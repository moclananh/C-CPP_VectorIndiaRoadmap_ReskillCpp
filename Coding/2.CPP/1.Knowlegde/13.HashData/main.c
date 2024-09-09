#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for a linked list node
typedef struct Node
{
    char *key;
    int value;
    struct Node *next;
} Node;

// Define the structure for the hash table
typedef struct HashTable
{
    int size;
    Node **buckets;
} HashTable;

// Function to create a new linked list node
Node *createNode(char *key, int value)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->key = strdup(key);
    node->value = value;
    node->next = NULL;
    return node;
}

// Function to create a new hash table
HashTable *createHashTable(int size)
{
    HashTable *table = (HashTable *)malloc(sizeof(HashTable));
    table->size = size;
    table->buckets = (Node **)calloc(size, sizeof(Node *));
    return table;
}

// Hash function to map keys to indices
int hashFunction(char *key, int size)
{
    int hash = 0;
    for (int i = 0; i < strlen(key); i++)
    {
        hash += key[i];
    }
    return hash % size;
}

// Function to insert a key-value pair into the hash table
void insert(HashTable *table, char *key, int value)
{
    int index = hashFunction(key, table->size);
    Node *node = createNode(key, value);
    if (table->buckets[index] == NULL)
    {
        table->buckets[index] = node;
    }
    else
    {
        Node *current = table->buckets[index];
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = node;
    }
}

// Function to search for a value in the hash table
int search(HashTable *table, char *key)
{
    int index = hashFunction(key, table->size);
    Node *current = table->buckets[index];
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            return current->value;
        }
        current = current->next;
    }
    return -1; // Key not found
}

// Function to delete a key-value pair from the hash table
void delete(HashTable *table, char *key)
{
    int index = hashFunction(key, table->size);
    Node *current = table->buckets[index];
    Node *previous = NULL;
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            if (previous == NULL)
            {
                table->buckets[index] = current->next;
            }
            else
            {
                previous->next = current->next;
            }
            free(current->key);
            free(current);
            return;
        }
        previous = current;
        current = current->next;
    }
}

int main()
{
    HashTable *table = createHashTable(10);
    insert(table, "apple", 5);
    insert(table, "banana", 7);
    printf("%d\n", search(table, "apple")); // Output: 5
    delete (table, "apple");
    printf("%d\n", search(table, "apple")); // Output: -1
    return 0;
}