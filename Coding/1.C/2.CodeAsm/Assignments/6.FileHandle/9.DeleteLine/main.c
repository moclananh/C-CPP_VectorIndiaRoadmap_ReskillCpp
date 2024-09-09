#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256
#define INITIAL_SIZE 10

// Hàm để xóa một dòng trong tệp tin
void deleteLineFromFile(const char *filename, int lineToDelete)
{
    FILE *file = fopen(filename, "r");
    if (!file)
    {
        perror("Error opening file");
        return;
    }

    // Đọc các dòng vào mảng
    int capacity = INITIAL_SIZE;
    int count = 0;
    char **lines = malloc(capacity * sizeof(char *));
    if (!lines)
    {
        perror("Memory allocation failed");
        fclose(file);
        return;
    }

    char buffer[MAX_LINE_LENGTH];
    while (fgets(buffer, sizeof(buffer), file))
    {
        // Loại bỏ ký tự newline nếu có
        buffer[strcspn(buffer, "\n")] = '\0';

        if (count >= capacity)
        {
            capacity *= 2;
            lines = realloc(lines, capacity * sizeof(char *));
            if (!lines)
            {
                perror("Memory allocation failed");
                fclose(file);
                return;
            }
        }

        lines[count] = strdup(buffer); // copy a strings and return a pointer to this string copy
        if (!lines[count])
        {
            perror("Memory allocation failed");
            fclose(file);
            return;
        }
        count++;
    }
    fclose(file);

    // Kiểm tra số dòng để xóa có hợp lệ không
    if (lineToDelete >= count)
    {
        fprintf(stderr, "Error: Line %zu does not exist.\n", lineToDelete);
        for (int i = 0; i < count; i++)
        {
            free(lines[i]);
        }
        free(lines);
        return;
    }

    // Ghi lại nội dung còn lại vào tệp tin, bỏ qua dòng cần xóa
    file = fopen(filename, "w");
    if (!file)
    {
        perror("Error opening file for writing");
        for (int i = 0; i < count; i++)
        {
            free(lines[i]);
        }
        free(lines);
        return;
    }

    for (int i = 0; i < count; i++)
    {
        if (i != lineToDelete)
        {
            fprintf(file, "%s\n", lines[i]);
        }
        free(lines[i]);
    }
    free(lines);
    fclose(file);

    printf("Deleted line %zu from %s.\n", lineToDelete, filename);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s <filename> <line_number>\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];
    int lineToDelete = (int)atoi(argv[2]);

    if (lineToDelete == 0)
    {
        fprintf(stderr, "Error: Line number must be greater than 0.\n");
        return 1;
    }

    deleteLineFromFile(filename, lineToDelete - 1); // Chuyển đổi sang chỉ số bắt đầu từ 0
    return 0;
}

// ./program file.txt numofline