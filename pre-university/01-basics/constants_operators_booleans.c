/* Car movement program */
#include <stdio.h>
// Using global variables and constants
int t1 = 4; // Global variable
int t2 = 6; // Global variable
double const v0 = 18.0;
double const a = 3.0;
int t3 = ((t1+t2) / 2); 
int TotalParts = 23;
int main() {
    int (x1) = 3 * (t1*t1) + 5*t1 + 10; 
    int (x2) = 3 * (t2*t2) + 5*t2 + 10; // Car's position formula
    int (v1) = 6 * t1 + 5; 
    int (v2) = 6 * t2 + 5; // Car's velocity formula
    int (a1) = 6; // Car's acceleration formula
    int (a2) = 6; 
    int AverageVelocity = (v2-v1)/(t2-t1); 
    printf("Car's position at the first place and second place : %d %d\n", x1, x2);
    printf("Car's velocity at the first place and second place : %d %d\n", v1, v2);
    printf("Car's acceleration at the first place and second place : %d %d\n", a1, a2);
    printf("Average velocity of the car between the first and second place : %d\n", AverageVelocity);
    int V = v0 + a * t3;
    float X = (0.5 * a * t3 * t3) + (v0 * t3);
    int t4 = ++t3;
    int t5 = --t3;
    // Used explicit conversion
    printf("Car's average velocity : %f\n", (float) V);
    printf("Car's average position : %f\n", X);
    printf("Car's time at the third place (after increment) : %d\n", t4);
    printf("Car's time at the third place (after decrement) : %d\n", t5);
    printf("Remaining parts : %.5f\n", (float) (TotalParts%5));
    printf("Total bytes used by the program : %d\n", sizeof(t1) + sizeof(t2) + sizeof(x1) + sizeof(x2) + sizeof(v1) + sizeof(v2) + sizeof(a1) + sizeof(a2) + sizeof(AverageVelocity) + sizeof(V) + sizeof(X) + sizeof(t3) + sizeof(t4) + sizeof(t5) + sizeof(TotalParts));


}
