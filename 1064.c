#include <stdio.h>
 
int main() {
    double a;
    int val = 0;
    double media = 0;
    for (int i = 1; i<=6;i++){
        scanf("%lf", &a);
        media +=a;
        if(a>0){
            val++;
        }
    } printf("%d valores positivos\n %lf", val, media/6);
    
    return 0;
}