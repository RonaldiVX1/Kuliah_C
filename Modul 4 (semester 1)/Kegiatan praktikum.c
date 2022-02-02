#include <stdio.h>
int main()
{
  float matriks1[3][3], hasil ;
  int i, j, ordo  ;
  printf("Masukkan ordo matrix yang diinginkan (2x2 atau 3x3) : ");
  scanf("%d", &ordo);
  printf("\nMasukkan angka angka matrix: \n");

  	for (i = 0; i < ordo; i++)
	{
    	for (j = 0; j < ordo; j++)
  		{
			  printf("Masukan Index [%d][%d] : ", i,j );
      	  	  scanf("%f", &matriks1[i][j]);
    	}
	}
	printf("\nHasil Inputan : \n");
	
	for (i = 0; i < ordo; i++)
	{
    	for (j = 0; j < ordo; j++)
  		{
  			printf("%.1f \t", matriks1[i][j]);
    	}
 	 printf("\n");
	}
	
	if (ordo == 2)
	{
		printf("\nNilai Determinan yang dihasilkan: \n");
	    hasil = matriks1[0][0]*matriks1[1][1]-matriks1[0][1]*matriks1[1][0] ;
        
	}
  	else
	{
		  printf("\nNilai Determinan yang dihasilkan: \n");
		  hasil = 
		(matriks1[0][0]*matriks1[1][1]*matriks1[2][2]) + 
		(matriks1[0][1]*matriks1[1][2]*matriks1[2][0]) +
		(matriks1[0][2]*matriks1[1][0]*matriks1[2][1]) -
		(matriks1[0][2]*matriks1[1][1]*matriks1[2][0]) -
		(matriks1[0][0]*matriks1[1][2]*matriks1[2][1]) -	
		(matriks1[0][1]*matriks1[1][0]*matriks1[2][2]) ;
	};
	   printf("%.2f \n\n", hasil);	  
	  

  
  return 0;
}