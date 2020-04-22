#include <stdio.h>
#include <string.h>
#include <conio.h>
int i, j, k;


	int main(){
		char adsoyad[50], yas[10], cinsiyet[50], eposta1[100], eposta2[100], sifre1[100], sifre2[100], ch;
			printf("\nBilgi Sistemine Hos Geldiniz...\n");
				printf("\nAdiniz ve Soyadiniz: ");
					gets(adsoyad);
				printf("\nYasiniz: ");
					gets(yas);
				printf("\nCinsiyetiniz: ");
					gets(cinsiyet);
				printf("\nE-Postanizi Giriniz: ");
					gets(eposta1);
				printf("\nE-Postanizi Tekrar Giriniz: ");
					gets(eposta2);
				printf("\nYeni Sifrenizi Giriniz: ");
					for(k=0; k<100; k++){
						ch = getch();
						if(ch == 13)
						break;
						sifre1[k] = ch;
						ch = '*' ;
		    			printf("%c ", ch);
                    }
                    
				printf("\n\nYeni Sifrenizi Tekrar Giriniz: ");
					for(k=0; k<100; k++){
						ch = getch();
						if(ch == 13)
						break;
						sifre2[k] = ch;
						ch = '*' ;
		    			printf("%c ", ch);
                    }
                    
		if(strcmp(eposta1, eposta2) )
			i = 1;
		if(strcmp(sifre1, sifre2))
			j = 1;				
				
			if(i==1 and j==1)
			      printf("\n\nHer Iki Dogrulama Yanlis. Lutfen Tekrar Deneyiniz..."); 
		   	  else if(i==1 and j==0)
				  printf("\n\nGirdiginiz E-Posta, Dogrulama E-Postasi Ile Eslesmiyor. Lutfen Tekrar Deneyiniz...");
		      else if(j==1 and i==0)
				  printf("\n\nGirdiginiz Sifre, Dogrulama Sifresi Ile Eslesmiyor. Lutfen Tekrar Deneyiniz...");
		    
		    
		 	if(i==0 and j==0){
		       printf("\n\n\nBilgileriniz;");
		       		printf("\nAdiniz ve Soyadiniz: %s", adsoyad);
			   		printf("\nYasiniz: %s", yas);
			   		printf("\nCinsiyetiniz: %s", cinsiyet);
			   		printf("\nE-Postaniz:%s ", eposta1);
			   		printf("\nSifreniz: %s", sifre1);
			   		}
			   		
		
		printf("\n\nTesekkurler...");
		
	return 0;
	}

