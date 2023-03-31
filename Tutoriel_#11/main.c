#include "util.h"

int main(void) {
    user_t user[3];

    user[0].firstname = bs_strdup("Alex");
    user[0].lastname = bs_strdup("Doe");
    user[0].age = 30;

    user[1].firstname = bs_strdup("John");
    user[1].lastname = bs_strdup("Doe");
    user[1].age = 34;

    user[2].firstname = bs_strdup("Mick");
    user[2].lastname = bs_strdup("Doe");
    user[2].age = 65;

    for (int i = 0; i < 3; i++) {
        printf("Firstname -> %s, Lastname -> %s, Age -> %d\n", user[i].firstname, user[i].lastname, user[i].age);
    }

    for (int i = 0; i < 3; i++) {
        free(user[i].firstname);
        free(user[i].lastname);
    }
    return 0;
}