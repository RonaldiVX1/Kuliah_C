#include <stdio.h>

int hitung (int jumlah)
  {
	int diskon ;
	if ((jumlah >= 100000) && (jumlah < 300000))
	{

		diskon = 0.1*jumlah ;		   	
	   	jumlah -= diskon ;
	}	
	 else if ((jumlah >= 300000) && (jumlah < 500000))
	{
	
		diskon = 0.2*jumlah ;
	 	jumlah -= diskon ;
	}
	 else if (jumlah >= 500000)
	{
	
	  	  diskon = 0.25*jumlah ;
	  	  jumlah -= diskon ;	
	} 
	 else
	{
 	 diskon = 0* jumlah ;
	 jumlah -= diskon ;
	} 	
 	return diskon ;
  }
   
  int output (int jumlah)
  {
	int diskon ;
	if ((jumlah >= 100000) && (jumlah < 300000))
	{
		printf("Anda mendapat diskon sebesar 10 persen !!! ");
	}	
	 else if ((jumlah >= 300000) && (jumlah < 500000))
	{
	
		diskon = 0.2*jumlah ;
	 	jumlah -= diskon ;
		printf("Anda mendapat diskon sebesar 20 persen !!! ");
	}
	 else if (jumlah >= 500000)
	{
	
	  	  diskon = 0.25*jumlah ;
	  	  jumlah -= diskon ;	
		printf("Anda mendapat diskon sebesar 25 persen !!! ");
	} 
	 else
	{
 	 diskon = 0* jumlah ;
	 jumlah -= diskon ;
	printf("Anda tidak mendapat diskon .. " );
	} 	
 	return diskon ;
  }
   
int main()
{
	int harga , i ;
	int jumlah = 0;
	double total ;
	
	printf("\t<< INFOTECH STORE TENGAH KOTA >>\n" );
	printf("-------------------------------------------------------------\n\n");
	
	for (i=1;i<4;i++)
	{
		printf("Masukan Harga Barang %i :" ,i );
		scanf("%i", &harga);
		jumlah += harga ;
	}
	
	hitung(jumlah);
	total = jumlah - hitung(jumlah);
	output(jumlah);
	
	printf("\n\n Jumlah \t\t = %i \n", jumlah);
	printf(" Anda mendapat diskon \t = %i  \n" , hitung(jumlah));
	printf("==========================================================\n");
	printf(" Total pembayaran anda \t = %.0lf \n\n" , total);
	
	return 0;
}