#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SHIFT 3

void encryptFile(const char *inputFile, const char *outputFile)
{
    FILE *inFile = fopen(inputFile, "r");
    FILE *outFile = fopen(outputFile, "w");

    if (inFile == NULL)
    {
        fprintf(stderr, "Error opening input file: %s\n", inputFile);
        return;
    }

    if (outFile == NULL)
    {
        fprintf(stderr, "Error opening output file: %s\n", outputFile);
        fclose(inFile);
        return;
    }

    int c;
    while ((c = fgetc(inFile)) != EOF)
    {
        if (isalpha(c))
        {
            if (isupper(c))
            {
                c = 'A' + (c - 'A' + SHIFT) % 26;
            }
            else
            {
                c = 'a' + (c - 'a' + SHIFT) % 26;
            }
        }
        fputc(c, outFile);
    }

    fclose(inFile);
    fclose(outFile);
    printf("File encrypted successfully.\n");
}

// Function to decrypt a file
void decryptFile(const char *inputFile, const char *outputFile)
{
    FILE *inFile = fopen(inputFile, "r");
    FILE *outFile = fopen(outputFile, "w");

    if (inFile == NULL)
    {
        fprintf(stderr, "Error opening input file: %s\n", inputFile);
        return;
    }

    if (outFile == NULL)
    {
        fprintf(stderr, "Error opening output file: %s\n", outputFile);
        fclose(inFile);
        return;
    }

    int c;
    while ((c = fgetc(inFile)) != EOF)
    {
        if (isalpha(c))
        {
            if (isupper(c))
            {
                c = 'A' + (c - 'A' - SHIFT + 26) % 26;
            }
            else
            {
                c = 'a' + (c - 'a' - SHIFT + 26) % 26;
            }
        }
        fputc(c, outFile);
    }

    fclose(inFile);
    fclose(outFile);
    printf("File decrypted successfully.\n");
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        fprintf(stderr, "Usage: %s <input_file> <encrypted_file> <decrypted_file>\n", argv[0]);
        return 1;
    }

    const char *inputFile = argv[1];
    const char *encryptedFile = argv[2];
    const char *decryptedFile = argv[3];

    encryptFile(inputFile, encryptedFile);

    decryptFile(encryptedFile, decryptedFile);

    return 0;
}