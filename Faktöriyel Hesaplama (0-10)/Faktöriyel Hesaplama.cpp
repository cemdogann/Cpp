#include <stdio.h>
int sayi, i, fktr=1;

	int main (){
		
		printf("1'den 10'a Faktoriyelini Almak istediginiz Sayiyi Giriniz:");
        scanf("%d", &sayi);
        	if(0<sayi and sayi<=10){
        		printf("\nGirdiginiz sayi belirtilen aralikta\n");
        		while(sayi>=1)
      {
                   fktr*=sayi;
                   sayi--;
                   }
                   
        		printf("\nSonucunuz: %d", fktr );
        }
			else
				printf("Girdiginiz sayi belirtilen aralikta degil");
			

	}
