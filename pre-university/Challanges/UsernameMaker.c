#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char firstName[50], lastName[50];
    scanf("%s", firstName);
    scanf("%s", lastName);
    // Create username (lowercase, no space)
    char username[100];
    firstName[0] = tolower(firstName[0]);
    lastName[0] = tolower(lastName[0]);
    strcat(username, firstName);
    strcat(username, lastName);

    char initials[3];
    // Create initials (uppercase first letters)
    initials[0] = toupper(firstName[0]);
    initials[1] = toupper(lastName[0]);
    initials[2] = '\0';
    // Print results
    printf("Username: %s\n", username);
    printf("Initials: %s\n",initials);

    return 0;
}
