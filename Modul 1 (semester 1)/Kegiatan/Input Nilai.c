#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,d ;
	float e;
	const float f = 0.04;
	
	
	printf("masukan Nilai 1 : ");
	scanf("%i", &a);
	printf("masukan Nilai 2 : ");
	scanf("%i", &b);
	printf("masukan Nilai 3 : ");
	scanf("%i", &c);
	printf("Nilai Akhir 4 persen dari rata rata nilai yang diperoleh \n");
	printf("\n");
	
	d = (a+b+c)/3;
	printf("rata-rata nilai yang kamu peroleh adalah : %i\n", d);
	e = d*f;
	printf("Nilai Akhir yang kamu peroleh adalah: %f \n\n", e);
	
	
	return 0;
}