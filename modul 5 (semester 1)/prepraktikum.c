#include <string.h>
#include <stdio.h>

int main()
{
	char namadepan[50];
	char namabelakang[50];
	char nama[20];
	char nim[15];
	
 	printf("Input Data Anda\n");
 	printf("Masukan Nama Depan : ");
 	scanf("%s", namadepan);
 	printf("Masukan Nama Belakang : ");
 	scanf("%s", namabelakang);
	
	printf("Masukan Nim : ");
 	scanf("%s", nim);	
	 while(strlen(nim)!=15)
	 {
	 	if(strlen(nim)!=15){
			 printf("NIM harus berjumlah 15 digit\n");
		 }
		printf("Masukan Nim : ");
 		scanf("%s", nim);	 
	 }
 
	 
	 printf("\nSelamat %s, Data kamu berhasil dibuat ", namadepan);
	 printf("\n==========================\n");
	 strcat(namadepan,namabelakang);
	 printf("Nama Lengkap: %s\n",namadepan);
	 printf("NIM: %s", nim);
	 printf("\n==========================\n");
	 
	return 0;
	
}