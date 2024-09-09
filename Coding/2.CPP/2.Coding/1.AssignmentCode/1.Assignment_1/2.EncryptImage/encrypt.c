#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MESSAGE_LENGTH 256

// Substitution cipher function for encryption
char encryptChar(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return 'z' - (ch - 'a'); // Simple substitution: reverse alphabet for lowercase
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        return 'Z' - (ch - 'A'); // Simple substitution: reverse alphabet for uppercase
    }
    else
    {
        return ch;
    }
}

// Encrypt the message using the substitution cipher
void encryptMessage(const char *message, char *encryptedMessage)
{
    int len = strlen(message);
    for (int i = 0; i < len; i++)
    {
        encryptedMessage[i] = encryptChar(message[i]);
    }
    encryptedMessage[len] = '\0';
}

// Function to set the least significant bit of a byte
void setLSB(unsigned char *byte, char bit)
{
    if (bit == '1')
    {
        *byte |= 1;
    }
    else
    {
        *byte &= ~1;
    }
}

// Function to hide the message into the image file
void hideMessage(const char *imageFile, const char *message)
{
    FILE *file = fopen(imageFile, "rb+");
    if (!file)
    {
        printf("Error opening file.\n");
        exit(1);
    }

    // Encrypt the message
    char encryptedMessage[MAX_MESSAGE_LENGTH];
    encryptMessage(message, encryptedMessage);

    // Get the length of the encrypted message
    int messageLength = strlen(encryptedMessage);

    // Read the image file header (assuming BMP format for simplicity)
    unsigned char header[54];
    fread(header, sizeof(unsigned char), 54, file);

    // Write the header back to the file
    fseek(file, 0, SEEK_SET);
    fwrite(header, sizeof(unsigned char), 54, file);

    // Embed the message length first
    for (int i = 0; i < 32; i++)
    {
        unsigned char byte;
        fread(&byte, sizeof(unsigned char), 1, file);
        setLSB(&byte, (messageLength >> (31 - i)) & 1 ? '1' : '0');
        fseek(file, -1, SEEK_CUR);
        fwrite(&byte, sizeof(unsigned char), 1, file);
    }

    // Embed the encrypted message into the image
    for (int i = 0; i < messageLength; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            unsigned char byte;
            fread(&byte, sizeof(unsigned char), 1, file);
            setLSB(&byte, (encryptedMessage[i] >> (7 - j)) & 1 ? '1' : '0');
            fseek(file, -1, SEEK_CUR);
            fwrite(&byte, sizeof(unsigned char), 1, file);
        }
    }

    fclose(file);
    printf("Message embedded successfully.\n");
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <image_file>\n", argv[0]);
        return 1;
    }

    const char *message = "hi";

    hideMessage(argv[1], message);

    return 0;
}