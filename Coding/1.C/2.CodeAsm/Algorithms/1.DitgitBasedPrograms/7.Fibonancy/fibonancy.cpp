#include <stdio.h>

void print_fibonacci_in_range(int min, int max) {
    if (min < 0 && max < 0) {
        printf("both input invalid\n");
        return;
    }
    if (min < 0) {
        printf("min range is invalid\n");
        return;
    }
    if (max < 0) {
        printf("max range is invalid\n");   
        return;
    }

    int a = 0, b = 1, next = a + b;

    while (next < min) {
        a = b;
        b = next;
        next = a + b;
    }

    while (next <= max) {
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }
    printf("\n");
}

void handle_input_and_print() {
    int min, max;
    printf("Enter min and max: ");
    if (scanf("%d %d", &min, &max) != 2) {
        printf("Invalid input format.\n");
        return;
    }
    print_fibonacci_in_range(min, max);
}

int main() {
    handle_input_and_print();
    return 0;
}
