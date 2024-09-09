#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MESSAGE_LENGTH 256

// Substitution cipher function for decryption
char decryptChar(char ch)
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

// Decrypt the message using the substitution cipher
void decryptMessage(char *encryptedMessage, char *message)
{
    int len = strlen(encryptedMessage);
    for (int i = 0; i < len; i++)
    {
        message[i] = decryptChar(encryptedMessage[i]);
    }
    message[len] = '\0';
}

// Function to get the least significant bit of a byte
char getLSB(unsigned char byte)
{
    return (byte & 1) ? '1' : '0';
}

// Function to extract the hidden message from the image file
void extractMessage(const char *imageFile)
{
    FILE *file = fopen(imageFile, "rb");
    if (!file)
    {
        printf("Error opening file.\n");
        exit(1);
    }

    // Read the image file header (assuming BMP format for simplicity)
    unsigned char header[54];
    fread(header, sizeof(unsigned char), 54, file);

    // Extract the message length first
    int messageLength = 0;
    for (int i = 0; i < 32; i++)
    {
        unsigned char byte;
        fread(&byte, sizeof(unsigned char), 1, file);
        messageLength = (messageLength << 1) | (getLSB(byte) - '0');
    }

    // Extract the encrypted message from the image
    char encryptedMessage[MAX_MESSAGE_LENGTH];
    for (int i = 0; i < messageLength; i++)
    {
        encryptedMessage[i] = 0;
        for (int j = 0; j < 8; j++)
        {
            unsigned char byte;
            fread(&byte, sizeof(unsigned char), 1, file);
            encryptedMessage[i] = (encryptedMessage[i] << 1) | (getLSB(byte) - '0');
        }
    }
    encryptedMessage[messageLength] = '\0';

    fclose(file);

    // Decrypt the message
    char message[MAX_MESSAGE_LENGTH];
    decryptMessage(encryptedMessage, message);

    printf("Extracted message: %s\n", message);
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <image_file>\n", argv[0]);
        return 1;
    }
    char message[] = "Meet on August 20";

    extractMessage(argv[1]);

    return 0;
}
