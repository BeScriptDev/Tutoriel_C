#include <stdio.h>

int main() {
    // Utilisation de base
    char mon_char = 'l';
    int mon_int = 30;
    float mon_float = 10.4;

    printf("mon_char => %c, mon_int => %d, mon_float => %f\n", mon_char, mon_int, mon_float);

    // Incrementation et decrementation
    int i = 0;

    i++;
    printf("i => %d\n", i);
    i++;
    i++;
    i--;
    printf("i => %d\n", i);

    i += 4;
    printf("i => %d\n", i);
    i -= 10;
    printf("i => %d\n", i);

    // Operations mathematiques

    int mult = 4 * 20;
    int div = 10 / 3;
    int add = 40 + 3;
    int modulo = 3 % 20;

    printf("mult => %d, div => %d, add => %d, modulo => %d\n", mult, div, add, modulo);


    //Utilisation de scanf
    int age_utilisateur = 0;

    printf("Entre ton age : ");
    scanf("%d", &age_utilisateur); // On passe ici l'adresse de la variable pour remplacer la valeur
    printf("Tu as %d ans !\n", age_utilisateur);
    
    return 0;
}