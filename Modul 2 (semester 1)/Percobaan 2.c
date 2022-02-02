#include <stdio.h>

double konversi_A(double rupiah_A)
{
	double dollar ;
	dollar = rupiah_A /14500 ;
	printf("%.2f Dollar \n", dollar); 
	double euro ;
	euro = rupiah_A / 17500 ;
	printf("%.2f Euro \n", euro);
	double ringgit ;
	ringgit = rupiah_A / 3500 ;
	printf("%.2f Ringgit \n\n", ringgit);
	
	// Fungsi Konversi dari Rupiah A //
}

double konversi_B(double rupiah_B)
{
	double dollar ;
	dollar = rupiah_B /14500 ;
	printf("%.2f Dollar \n", dollar); 
	double euro ;
	euro = rupiah_B / 17500 ;
	printf("%.2f Euro \n", euro);
	double ringgit ;
	ringgit = rupiah_B / 3500 ;
	printf("%.2f Ringgit \n\n", ringgit);
	
	// Fungsi Konversi dari Rupiah B //
}

double konversi_C(double rupiah_C)
{
	double dollar ;
	dollar = rupiah_C /14500 ;
	printf("%.2f Dollar \n", dollar); 
	double euro ;
	euro = rupiah_C / 17500 ;
	printf("%.2f Euro \n", euro);
	double ringgit ;
	ringgit = rupiah_C / 3500 ;
	printf("%.2f Ringgit \n\n", ringgit);
	
	// Fungsi Konversi dari Rupiah C //
}

int main()
{
	int rupiah_A 	= 1377 * 8 ;
	int rupiah_B	= 20201 - 12345 ;
	double rupiah_C	= 202010370311377 / 23456789 ;
	
	
	printf("NIM : 202010370311377 \n\n");
	printf("Konversi rupiah A adalah %i sama dengan : \n", rupiah_A);
	konversi_A(rupiah_A);
	printf("Konversi rupiah B adalah %i sama dengan : \n", rupiah_B);
	konversi_B(rupiah_B);
	printf("konversi rupiah C adalah %.0f sama dengan : \n", rupiah_C);
	konversi_C(rupiah_C);

	
	return 0;
}