#include <stdio.h>

char to_uppercase(char c);
char to_lowercase(char c);
void print_square(int n1, int n2, char c);

int main() {
    char string[] = "Bonjour, coMmeNt vAs Tu ?";

    for (int i = 0; string[i] != '\0'; i++) {
        printf("%c", to_uppercase(string[i]));
    }
    for (int i = 0; string[i] != '\0'; i++) {
        printf("%c", to_lowercase(string[i]));
    }
    print_square(10, 10, 'B');
    return 0;
}

char to_uppercase(char c) {
    if (c >= 'a' && c <= 'z') {
        return c -= 32;
    }
    return c;
}

char to_lowercase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c += 32;
    }
    return c;
}

void print_square(int n1, int n2, char c) {
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
}