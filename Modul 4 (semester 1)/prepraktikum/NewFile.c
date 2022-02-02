#include <stdio.h>

int main()
{
	char karakter1, karakter2, karakter3;
	
	printf("Input 3 Karakter sembarang \n");
	
	printf("Karakter Pertama : ");
	scanf("%c", &karakter1);
	fflush(stdin);
	printf("Karakter kedua : ");
	scanf("%c", &karakter2);
	fflush(stdin);
	printf("Karakter ketiga : ");
	scanf("%c", &karakter3);
	
	// tampilkan karakter dengan urutan terbalik
	
	printf("\n");
	printf("Karakter yang diinput adalah %c \n", karakter3);	
	printf("Karakter yang diinput adalah %c \n", karakter2);
	printf("Karakter yang diinput adalah %c \n", karakter1);
	
	printf("\n");
	
	return 0;
}