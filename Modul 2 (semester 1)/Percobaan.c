#include <stdio.h>

void konversi_uang(double rupiah)
{
	double dollar ;
	dollar = rupiah /14500 ;
	printf("%.2f Dollar \n", dollar); 
	double euro ;
	euro = rupiah / 17500 ;
	printf("%.2f Euro \n", euro);
	double ringgit ;
	ringgit = rupiah / 3500 ;
	printf("%.2f Ringgit \n\n", ringgit);
	
	// Fungsi Konversi //
}

int main()
{
	int rupiah_A 	= 1377 * 8 ;
	int rupiah_B	= 20201 - 12345 ;
	double rupiah_C	= 202010370311377 / 23456789 ;
	
	
	printf("NIM : 202010370311377 \n\n");
	printf("Konversi rupiah A adalah %i sama dengan : \n", rupiah_A);
	konversi_uang(rupiah_A);
	printf("Konversi rupiah B adalah %i sama dengan : \n", rupiah_B);
	konversi_uang(rupiah_B);
	printf("konversi rupiah C adalah %.2f sama dengan : \n", rupiah_C);
	konversi_uang(rupiah_C);

	
	return 0;
}