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
    int j_cpy = 0;

    while (dest_cpy[i_cpy] != '\0') {
        i_cpy++;
    }
    while (src_cpy[j_cpy] != '\0') {
        dest_cpy[i_cpy + j_cpy] = src_cpy[j_cpy];
        j_cpy++;
    }
    dest_cpy[i_cpy + j_cpy] = '\0';

    printf("dest_cpy -> %s\n", dest_cpy);

    // Exercice strcat
    char src_cat[] = " tous le monde";
    char dest_cat[50] = "Bonjour";
    int i_cat = 0;
    int j_cat = 0;

    while (dest_cat[i_cat] != '\0') {
        i_cat++;
    }
    while (src_cat[j_cat] != '\0') {
        dest_cat[i_cat + j_cat] = src_cat[j_cat];
        j_cat++;
    }
    dest_cat[i_cat + j_cat] = '\0';

    printf("dest_cat -> %s\n", dest_cat);
    return 0;
}