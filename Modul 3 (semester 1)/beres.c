#include <stdio.h>

int main(int argc, char** argv)
{
	int bil ;
	int i;
	for ( i=0; i<5;)
 {
		printf("Masukan sebuah bilangan : " );
		scanf("%d", &bil);
	
		
	if (bil < 0)
	{
		if (bil % 2 == 0)
		{
			printf("%d adalah bilangan genap negatif\n", bil);
		}
		else
		{
			printf("%d adalah bilangan ganjil negatif\n", bil);
		}
	}
	else if (bil > 0)
	{
		if (bil % 2 == 0)
		{
		 printf("%d adalah bilangan genap positif\n", bil); 
		}
		else
		{
		 printf("%d adalah bilangan ganjil positif\n", bil); 
		}
	}
	else
	 {
	 	printf("bilangan yang anda input adalah angka 0 \n");
	 }
	 i++;
 }	
	return 0;
}
