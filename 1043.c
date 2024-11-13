#include <stdio.h>
 
int main() {
    int A, B, C;
    double per, areat;
    scanf("%d %d %d", &A, &B, &C);
    per = A+B+C;
    areat = ((A+B)*C)/2;
    if ((A + B)>C && (B+C)>A && C+A>B){
        printf("Perimetro = %.1lf\n", per);
    }else{
        printf("Area = %.1lf\n", areat);
    }
 
    return 0;
}