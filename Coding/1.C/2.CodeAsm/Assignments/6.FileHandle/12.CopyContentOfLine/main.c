#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Usage: %s <source_file> <dest_file_1> [<dest_file_2> ...]\n", argv[0]);
        return 1;
    }

    const char *source_file = argv[1];

    FILE *src_file = fopen(source_file, "r");
    if (!src_file)
    {
        fprintf(stderr, "Error opening source file: %s\n", source_file);
        return 1;
    }

    // Copy
    for (int i = 2; i < argc; i++)
    {
        const char *dest_file = argv[i];
        FILE *dest_file_ptr = fopen(dest_file, "w");
        if (!dest_file_ptr)
        {
            fprintf(stderr, "Error opening destination file: %s\n", dest_file);
            fclose(src_file);
            return 1;
        }

        char buffer[BUFFER_SIZE];
        size_t bytes_read;
        while ((bytes_read = fread(buffer, 1, BUFFER_SIZE, src_file)) > 0)
        {
            if (fwrite(buffer, 1, bytes_read, dest_file_ptr) != bytes_read)
            {
                fprintf(stderr, "Error writing to destination file: %s\n", dest_file);
                fclose(src_file);
                fclose(dest_file_ptr);
                return 1;
            }
        }

        // Res the file position
        rewind(src_file);

        fclose(dest_file_ptr);
        printf("Copied contents of %s to %s\n", source_file, dest_file);
    }

    fclose(src_file);
    return 0;
}

// ./program input.txt cop1.txt cop2.txt ....