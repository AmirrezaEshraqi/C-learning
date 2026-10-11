#include <stdio.h>
#include <stdbool.h>
double const exam1 = 17.52;
double const exam2 = 14.57;
double const project = 19.75;
double const passMark = 10.0;
int main() {
    double FinalScore = 0.4*exam1 + 0.3*exam2 + 0.3*project;
    if ( (0 < exam1 && exam1 <= 20) && (0 < exam2 && exam2 <= 20) && (0 < project && project <= 20) ) {
        printf("===============================\n");
        printf("First check status : Datas are Correct!\n");
        if (FinalScore >= 18) {
            printf("Second check status : Exellent!\n");
        } else if (FinalScore >= 15) {
            printf("Second check status : Very Good\n");
        } else if (FinalScore >= 12) {
            printf("Second check status : Good\n");
        } else if (FinalScore >= passMark) {
            printf("Second check status : Pass\n");
        } else {
            printf(" Second check status : Student Failed!\n");
        }
    } else {
        printf(" First check status : Datas are Unsigned!\n");
        return 0;
    }
    printf("===============================\n");
    if (FinalScore >= passMark) {
        printf("Third check status : Student Passed!\n");
    } else {
        printf("Third check status : Student Failed!\n");
    }
    printf("===============================\n");
    if (project > exam1 && project > exam2) {
        printf("Fourth check status : Project is the best score!\n");
    } else if (exam1 > project && exam1 > exam2) {
        printf("Fourth check status : Exam1 is the best score!\n");
    } else if (exam2 > project && exam2 > exam1) {
        printf("Fourth check status : Exam2 is the best score!\n");
    } else {
        printf("Fourth check status : There is no best score!\n");
    }
    printf("===============================\n");
    if ( (int) FinalScore % 2 == 0) {
        printf(" Fifth check status : Final Score is Even!\n");
    } else {
        printf(" Fifth check status : Final Score is Odd!\n");
    }
    printf("===============================\n");
    if (FinalScore >= 17) {
        bool HighRank = true;
        printf("Bool status code : %d\n", HighRank);
        printf("Sixth check status : Student is higher than 75%%!\n");
    } else if (FinalScore >= 15) {
        bool MidRank = true;
        printf("Bool status code : %d\n", MidRank);
        printf("Sixth check status : Student is higher than 60%%!\n");
    } else if (FinalScore >= 12) {
        bool LowRank = true;
        printf("Bool status code : %d\n", LowRank);
        printf("Sixth check status : Student is higher than 50%%!\n");
    } else if (FinalScore >= passMark) {
        bool VeryLowRank = true;
        printf("Bool status code : %d\n", VeryLowRank);
        printf("Sixth check status : Student is higher than 25%%!\n");
    } else {
        bool DropOutRank = true;
        printf("Bool status code : %d\n", DropOutRank);
        printf("Sixth check status : Student is lower than 25%%!\n");
    }
    printf("===============================\n");
    bool isPassed = FinalScore >= passMark;
    (isPassed) ? printf("Seventh check status : Student Passed!\n") : printf("Seventh check status : Student Failed!\n");
    printf("===============================\n");
    (exam1 > exam2 && exam1 > project) ? printf("Eighth check status : Exam1 is higher than Exam2 and Project!\n") : printf("Eighth check status : Exam2 is higher than Exam1 or Project!\n");
    printf("===============================\n");
    (exam2 > exam1 && exam2 > project) ? printf("Ninth check status : Exam2 is higher than Exam1 and Project!\n") : printf("Ninth check status : Exam1 is higher than Exam2 or Project!\n");
    printf("===============================\n");
    (project > exam1 && project > exam2) ? printf("Tenth check status : Project is higher than Exam1 and Exam2!\n") : printf("Tenth check status : Exam1 or Exam2 is higher than Project!\n");
    printf("===============================\n");
    return 0;
}
