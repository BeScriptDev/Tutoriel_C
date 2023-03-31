#include "util.h"

int main(void) {
    user_t user[3];
    user[0].firstname = bs_strdup("John");
    user[0].lastname = bs_strdup("Doe");
    user[0].age = 50;

    user[1].firstname = bs_strdup("Alex");
    user[1].lastname = bs_strdup("Doe");
    user[1].age = 20;

    user[2].firstname = bs_strdup("Jean");
    user[2].lastname = bs_strdup("Doe");
    user[2].age = 40;
    for (int i = 0; i < 3; i++) {
        printf("Firstname -> %s, Lastname -> %s, Age -> %d\n", user[i].firstname, user[i].lastname, user[i].age);
    }
    return 0;
}