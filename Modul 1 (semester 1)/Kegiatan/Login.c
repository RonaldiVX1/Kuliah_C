#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char nama[10], pas[10] ;
	int n;
	printf("Username : ");
	scanf("%s", &nama);
	printf("Password : " );
	scanf("%s", &pas);
	if(strcmp(nama,"username")==0 && strcmp(pas,"password")==0)
	{
		printf("\n Masukan Nilai Anda : ");	
	}		
	else 	
	{
			printf("\n USERNAME DAN PASSWORD SALAH \n\n");
			return 0 ;
	  }	
	scanf("%i", &n);
	if (n>=80)
	{
		printf("\n\n---------------------------------");
		printf("   SELAMAT ANDA LOLOS DI INFORMATIKA   ");
		printf("---------------------------------\n");
	}
	else
	{
		printf("\n\n---------------------------------");
		printf("   SILAHKAN COBA LAGI TAHUN DEPAN, SEMANGAT!   ");
		printf("---------------------------------\n");
	}
	 
	 return 0;
}	