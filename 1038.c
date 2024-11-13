#include <stdio.h>
 
int main() {
 int cod;
 double var;
 scanf("%d", &cod);
 switch(cod){
     case 1:
     var=+4.00;
     case 2:
     var=+4.50;
     case 3:
     var=+5.00;
     case 4:
     var=+2.00;
     case 5:
     var=+1.50;
 }
 printf("Total: R$ %d\n", var);
 
    return 0;
}