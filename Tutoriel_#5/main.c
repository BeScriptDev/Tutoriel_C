#include <stdio.h>

int main() {
    // Exercice trouver un nombre
    int is_inside = 0;
    int arr_nombre[] = {123, 214, 545, 85, 0};
    int val = 0;
    printf("Entre un nombre : ");
    scanf("%d", &val);
    for (int i = 0; i < 5; i++) {
        if (val == arr_nombre[i]) {
            printf("Bravo !\n");
            is_inside = 1;
            break;
        }
    }
    if (is_inside == 0) {
        printf("Erreur\n");
    }

    // Exercice afficher les éléments d'un tableau
    int arr[5];

    printf("Entre 5 nombres : ");
    scanf("%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    
    for (int i = 0; i < 5; i++) {
        printf("index -> %d, valeur -> %d\n", i, arr[i]);
    }
    return 0;
}