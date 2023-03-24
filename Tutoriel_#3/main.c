#include <stdio.h>

/*
    false = 0
    true = 1
*/


int main() {
    // Comparaison basique
    int age = 26;
    int resultat = age != 30 || age == 27; // true or false == true; true and false == false;

    printf("resultat -> %d\n", resultat);

    //If, else if, else
    if (age == 26) {
        printf("%d == 26\n", age);
    } else if (age == 27) {
        printf("%d == 27\n", age);
    } else if (age == 28) {
        printf("%d == 28\n", age);
    } else {
        printf("%d > 28\n", age);
    }

    if (age >= 0 && age < 18) {
        printf("Tu es mineur\n");
    } else {
        printf("Tu es majeur\n");
    }

    //Switch
    char lettre;

    printf("Entre une lettre : ");
    scanf("%c", &lettre);

    switch (lettre) {
        case 'a':
            printf("Tu as rentré 'a'\n");
            break;
        case 'b':
            printf("Tu as rentré 'b'\n");
            break;
        case 'c':
            printf("Tu as rentré 'c'\n");
            break;
        default:
            break;
    }
    return 0;
}