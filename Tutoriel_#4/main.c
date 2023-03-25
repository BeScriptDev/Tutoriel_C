#include <stdio.h>

int main() {
    // Exercice table de multiplication
    int mult = 5;
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", mult, i, mult * i);
    }
    printf("\n");
    
    // Exercice factorielle
    int n = 5;
    int factorial = 1;
    for (int i = 1; i <=5; i++) {
        factorial *= i;
    }
    printf("Factorielle de %d = %d\n\n", n, factorial);


    // Exercice carré
    int col = 0;
    int row = 0;
    printf("Deux nombres : ");
    scanf("%d%d", &col, &row);
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}