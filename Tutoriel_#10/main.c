#include "util.h"

int main(void) {
    char *str = bs_strdup("Bonjour, comment vas tu ?");
    printf("%s\n", str);
    free(str);
    return 0;
}