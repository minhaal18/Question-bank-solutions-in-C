#include <stdio.h>
#include <string.h>

int main() {

    char username[50] = "minhaal";
    char password[50] = "0507001315";

    char a[50], b[50];

    do {
        printf("Enter the username: ");
        scanf("%49s", a);

        printf("Enter the valid password: ");
        scanf("%49s", b);

        if (strcmp(username, a) == 0 &&
            strcmp(password, b) == 0) {

            printf("Successfully logged in!\n");
        }
        else {
            printf("Login failed! Try again.\n");
        }

    } while (strcmp(username, a) != 0 ||
             strcmp(password, b) != 0);

    return 0;
}
