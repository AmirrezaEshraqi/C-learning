#include <stdio.h>
#include <stdbool.h>
double const exam1 = 17.0;
double const exam2 = 14.0;
double const project = 19.0;
double const passMark = 10.0;
int main() {
    double FinalScore = 0.4*exam1 + 0.3*exam2 + 0.3*project;
    if ( (0 < exam1 && exam2 && project <=* 20) *||* *!*(0 *>= exam1 || exam2 || project >= 20)  ) {
        printf("===============================\n");
        printf(" First check status : Datas are Correct!\n");
        if (FinalScore >= 18) {
            printf(" Second check status : Exellent!\n");
        } else if (FinalScore >= 15) {
            printf(" Second check status : Very Good\n");
        } else if (FinalScore >= 12) {
            printf(" Second check status : Good\n");
        } else if (FinalScore >= passMark) {
            printf(" Second check status : Pass\n");
        } else {
            printf(" Second check status : Student Failed!\n");
        }
    } else {
        printf(" First check status : Datas are Unsigned!\n");
    }
    printf("===============================\n");
    if (FinalScore >= passMark) {
        printf(" Third check status : Student Passed!\n");
    } else {
        printf(" Third check status : Student Failed!\n");
    }
    printf("===============================\n");
    if (project > exam1 && exam2) {
        printf(" Fourth check status : Project is the best score!\n");
    } else if (exam1 > project && exam2) {
        printf(" Fourth check status : Exam1 is the best score!\n");
    } else if (exam2 > project && exam1) {
        printf(" Fourth check status : Exam2 is the best score!\n");
    } else {
        printf(" Fourth check status : There is no best score!\n");
    }
    printf("===============================\n");
    if ( (int) FinalScore % 2 == 0) {
        printf(" Fifth check status : Final Score is Even!\n");
    } else {
        printf(" Fifth check status : Final Score is Odd!\n");
    }
    if (FinalScore >= 17) {
        bool HighRank = true;
        printf("%d","Bool status code : ", HighRank, " Sixth check status : Student is higher than 75%!\n");
    } else if (FinalScore >= 15) {
        bool MidRank = true;
        printf("%d","Bool status code : ", MidRank, " Sixth check status : Student is higher than 60%!\n");
    } else if (FinalScore >= 12) {
        bool LowRank = true;
        printf("%d","Bool status code : ", LowRank, " Sixth check status : Student is higher than 50%!\n");
    } else if (FinalScore >= passMark) {
        bool VeryLowRank = true;
        printf("%d","Bool status code : ", VeryLowRank, " Sixth check status : Student is higher than 25%!\n");
    } else {
        bool DropOutRank = true;
        printf("%d","Bool status code : ", DropOutRank, " Sixth check status : Student is lower than 25%!\n");
    }
    bool isPassed = FinalScore >= passMark;
    (isPassed) ? printf(" Seventh check status : Student Passed!\n") : printf(" Seventh check status : Student Failed!\n");
}
