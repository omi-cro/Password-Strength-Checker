#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int length, upper = 0, lower = 0, digit = 0, special = 0;

    printf("Enter your password: ");
    scanf("%s", password);

    length = strlen(password);

    for (int i = 0; i < length; i++) {
        if (isupper(password[i]))
            upper = 1;
        else if (islower(password[i]))
            lower = 1;
        else if (isdigit(password[i]))
            digit = 1;
        else
            special = 1;
    }

    if (length < 8) {
        printf("Password Strength: Weak\n");
    } 
    else if (upper && lower && digit && special) {
        printf("Password Strength: Strong\n");
    } 
    else {
        printf("Password Strength: Medium\n");
    }

    return 0;
}