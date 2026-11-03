#include <stdio.h>

int main() {
    printf("Welcome to EnTech V1.0 filemaker & writer! Choose an option : \n");
    printf("================================================================\n");
    printf("1_Read Only\n2_Append Only\n3_Write OR Replace Only OR Create Only\n");
    int option;
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        printf("Enter the file name :\n");
        char filenamer[100];
        scanf("%s",&filenamer);
        FILE *fptrr = fopen(filenamer, "r");
        if (fptrr == NULL) {
            printf("File not found! Exiting the program...\n");
        }
        break;
    case 2:
        printf("Enter the file name :\n");
        char filenamea[100];
        scanf("%s",&filenamea);
        FILE *fptra = fopen(filenamea, "a");
        if (fptra==NULL) {
            printf("File not found! Exiting the program...\n");
        }
        break;
    case 3:
        printf("Enter the file name :\n");
        char filenamew[100];
        scanf("%s",&filenamew);
        FILE *fptrw = fopen(filenamew, "w");
        if (fptrw==NULL){
            printf("File not found! Do you want to create it?\n");
        }
        break;
    }
    return 0;
}
