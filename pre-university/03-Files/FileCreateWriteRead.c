#include <stdio.h>
#include <string.h>

int main() {
    printf("Welcome to EnTech V1.0 filemaker & writer & Reader ! Choose an option : \n");
    printf("================================================================\n");
    printf("1_Read Only\n2_Append Only\n3_Write OR Replace Only OR Create Only\n");
    int option;
    scanf("%d",&option);
    FILE *fptrr = NULL;
    FILE *fptra = NULL;
    FILE *fptrw = NULL;
    switch (option)
    {
    case 1:
        printf("Enter the file name :\n");
        char filenamer[100];
        scanf("%s",&filenamer);
        
        fptrr = fopen(filenamer, "r");
        
        if (fptrr == NULL) {
            printf("File not found! Do you want to create it?(yes/no)\n");
            char YesORNo[4];
            scanf("%3s", &YesORNo);
            
            if ((strcmp(YesORNo, "yes")) == 0){
                printf("Enter your new file name (with format suffix):");
                char filenameN[100];
                scanf("%s", filenameN);
                
                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF);
                
                fptrr = fopen(filenameN, "w");
                char text[1000];
                printf("Enter your text (max 999 characters):");
                
                fgets(text, sizeof(text), stdin);
                
                fprintf(fptrr, "%s", text);
                
            } else if ((strcmp(YesORNo, "no"))==0){
                printf("Ok. Good Luck!\n");
            } else {
                printf("Invalid input.Exiting the program\n");
            }
        }
        break;
    case 2:
        printf("Enter the file name :\n");
        char filenamea[100];
        scanf("%s",&filenamea);
        
        fptra = fopen(filenamea, "a");
        if (fptra==NULL) {
            printf("File not found! Do you want to create it?(yes/no)\n");
            char YesORNo[4];
            scanf("%3s", &YesORNo);
            if ((strcmp(YesORNo, "yes")) == 0) {
                
                printf("Enter your new file name (with format suffix):");
                char filenameN[100];
                
                scanf("%s", filenameN);
                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF);
                fptra = fopen(filenameN, "w");
                char text[1000];
                
                printf("Enter your text (max 999 characters):");
                fgets(text, sizeof(text), stdin);
                
                fprintf(fptra, "%s", text);
                
            } else if ((strcmp(YesORNo, "no"))==0){
                printf("Ok. Good Luck!\n");
            } else {
                printf("Invalid input.Exiting the program\n");
            }
        }
        break;
    case 3:
        printf("Enter the file name :\n");
        char filenamew[100];
        scanf("%s",&filenamew);
        fptrw = fopen(filenamew, "w");
        if (fptrw==NULL){
            printf("File not found! Do you want to create it?(yes/no)\n");
            char YesORNo[4];
            scanf("%3s", &YesORNo);
            if ((strcmp(YesORNo, "yes")) == 0) {
                printf("Enter your new file name (with format suffix):");
                char filenameN[100];
                
                scanf("%s", filenameN);
                int ch;
                
                while ((ch = getchar()) != '\n' && ch != EOF);
                fptrw = fopen(filenameN, "w");
                char text[1000];
                
                printf("Enter your text (max 999 characters):\n");
                fgets(text, sizeof(text), stdin);
                fprintf(fptrw, "%s", text);
                
            } else if ((strcmp(YesORNo, "no"))==0){
                printf("Ok. Good Luck!\n");
            } else {
                printf("Invalid input.Exiting the program\n");
            }
    break;
    }
    if (fptrr != NULL) {
        fclose(fptrr);
    }
    if (fptra != NULL) {
        fclose(fptra);
    }
    if (fptrw != NULL) {
        fclose(fptrw);
    }
    return 0;
    }
}
