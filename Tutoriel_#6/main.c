#include <stdio.h>

int main() {
    // Exercice strlen
    char string[] = "Hello";
    int strlen = 0;
    while (string[strlen] != '\0') {
        strlen++;
    }
    printf("length -> %d\n", strlen);

    // Exercice strcpy
    char src_cpy[] = "Bonjour !";
    char dest_cpy[50];
    int i_cpy = 0;

    while (src_cpy[i_cpy] != '\0') {
        dest_cpy[i_cpy] = src_cpy[i_cpy];
        i_cpy++;
    }
    dest_cpy[i_cpy] = '\0';

    printf("dest_cpy -> %s\n", dest_cpy);

    // Exercice strcat
    char src[] = "comment vas tu ?";
    char dest[30] = "Bonjour, ";
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
        i++;
    }

    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    printf("dest -> %s\n", dest);
    return 0;
}