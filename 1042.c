#include<stdio.h>
int main(){
    int A, B, C;
    int X, Y, Z;
    scanf("%d %d %d", &A, &B, &C);
    X=A;
    Y=B;
    Z=C;
        if(A<B && A<C){
            printf("%d", A);
        }else if(B<A && B<C){
            printf("%d", B);
        } else{
            printf("%d", C);
        }
}