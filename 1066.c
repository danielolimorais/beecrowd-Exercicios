#include <stdio.h>
 
int main() {
int a;
int p, imp, pos, neg;
for(int i = 1;i<=5;i++){
    scanf("%d", &a);
    if(a>0 && a%2==0){
        p++;
    }if(a>0 && a%2!=0){
        imp++;}
    if(a>0){
        pos++;
    }else{
        neg++;
    }
}printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)", p, imp, pos, neg);
 
    return 0;
}