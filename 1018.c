#include <stdio.h>
 
int main() {
 int N;
 int c100, c50, c20, c10, c5, c2, c1;
 scanf("%d", &N);
 printf("%d\n", N);
 c100 = N/100;
 printf("%d nota(s) de R$ 100,00\n", c100);
  N = N-c100*100;
 c50 = N/50;
 printf("%d nota(s) de R$ 50,00\n", c50);
 N = N-c50*50;
 c20 = N/20;
  printf("%d nota(s) de R$ 20,00\n", c20);
  N = N-c20*20;
 c10 = N/10;
  printf("%d nota(s) de R$ 10,00\n", c10);
  N = N-c10*10;
 c5 = N/5;
  printf("%d nota(s) de R$ 5,00\n", c5);
   N = N-c5*5;
  c2 = N/2;
   printf("%d nota(s) de R$ 2,00\n", c2);
   N = N-c2*2;
   c1 = N/1;
    printf("%d nota(s) de R$ 1,00\n", c1);
    N = N-c1*1;
 
    return 0;
}