#include <stdio.h>
#include <math.h> 
float a, b, c, x1, x2, delta;

int main (){
    printf("a katsayisini giriniz:");
    scanf("%f", &a);
    printf("\n");
    printf("b katsayisini giriniz:");
    scanf("%f", &b);
    printf("\n");
    printf("c katsayisini giriniz:");
    scanf("%f", &c);
    printf("\n");
    delta = (b*b)-(4*a*c);
     if(delta>0){
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            printf("Denklemin 2 reel  koku vardir = %.3f ve %.3f", x1, x2);
         	   }
                  
                  else if(delta==0) {
                  x1=x2=(-b)/(2*a);
                  printf("Denklemin 2 cakisik koku vardir fakat bunlar aynidir. Bu kok = %.3f", x1);
                  }
     else
     printf("Denklemin reel koku yoktur");
     
 	   }
 

