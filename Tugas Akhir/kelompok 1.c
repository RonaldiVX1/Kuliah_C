#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int i=1, j=1,k; /* buat perulangan */
int m ;
int v=1 ;

int pilih, menu; /* untuk menu */
int pilihjam, pilihjudul, jumlahtiket, uang; /* inputan User */
int	kursi1[5] ;
int	kursi2[5] ;
int	kursi3[5] ;
int	kursi4[5] ;
int	kursi5[5] ;
int temptiket, total ;
char jamtayang[5][10] = {"12.00", "16.00", "18.00", "20.00", "22.00" } ;
char theater [5][5]   = {"0", "1", "2", "3", "4" } ;
char nama[50], umur[50], judul[50][50]; 
char member, bacajudul[100] , bacatiket[100] ;
char tempjudul[30],tempjam[10], temptheater[5] ;
char alphabet ;
char bacakursi1 ;
char *tokenkursi1 ;
char *token ;
char tiket[100], kodetiket[100],inputkode[100]; /* untuk menu 2*/
char *kode ;


void jam(int j,int k, char jamtayang[5][10])
{
	printf("Jam Tayang : ");
	for(j=1;j<5;j++)
	{
		printf("\n%i. %s", j, jamtayang[k]);
		k++ ;
	}
}

void datatiket1(int kursi1[5],int v)
{
		// tiket theater 1
	FILE *file ;
 	 file = fopen ("1.txt","r");
   while(fscanf(file,"%d",&kursi1[v])!=EOF)
   {
      v++ ;
   }
	fclose(file);
} 

void datatiket2(int kursi2[5],int v)
{
		// tiket theater 2
	FILE *file ;
 	 file = fopen ("2.txt","r");
   while(fscanf(file,"%d",&kursi2[v])!=EOF)
   {
      v++ ;
   }
	fclose(file);
} 

void datatiket3(int kursi3[5],int v)
{
		// tiket theater 3
	FILE *file ;
 	 file = fopen ("3.txt","r");
   while(fscanf(file,"%d",&kursi3[v])!=EOF)
   {
      v++ ;
   }
	fclose(file);
} 

void datatiket4(int kursi4[5],int v)
{
		// tiket theater 4
	FILE *file ;
 	 file = fopen ("4.txt","r");
   while(fscanf(file,"%d",&kursi4[v])!=EOF)
   {
      v++ ;
   }
	fclose(file);
} 

void datatiket5(int kursi5[5],int v)
{
	// tiket theater 5
	FILE *file ;
 	 file = fopen ("5.txt","r");
   while(fscanf(file,"%d",&kursi5[v])!=EOF)
   {
      v++ ;
   }
	fclose(file);
} 

void tulisdatatiket(int kursi1[5],int kursi2[5],int kursi3[5],
					int kursi4[5],int kursi5[5], int v)
{
	
	FILE *file	= fopen("1.txt","w");
	for (v=1;v<5;v++)	
		{
			fprintf(file, "%i\n", kursi1[v]);
		}
	fclose(file);
	
	file = fopen("2.txt","w");
	for (v=1;v<5;v++)	
		{
			fprintf(file, "%i\n", kursi2[v]);
		}
	fclose(file);
	
		file = fopen("3.txt","w");
	for (v=1;v<5;v++)	
		{
			fprintf(file, "%i\n", kursi3[v]);
		}
	fclose(file);
	
		file = fopen("4.txt","w");
	for (v=1;v<5;v++)	
		{
			fprintf(file, "%i\n", kursi4[v]);
		}
	fclose(file);
	
		file = fopen("5.txt","w");
	for (v=1;v<5;v++)	
		{
			fprintf(file, "%i\n", kursi5[v]);
		}
	fclose(file);
}
	
		

		

int main()
{
	FILE *file;
	  
	printf("\n==============================================\n");
	printf("\tBioskop Pojok Malang");
	printf("\n==============================================\n\n");
	
	printf("Apakah anda sudah terdaftar menjadi member ? (Y/N) : ");
	scanf("%s", &member);
	

if (member == 'Y' || member == 'y')
{
	file = fopen("member.txt","r");
	// jika file tidak ada maka akan error
	if ((fgets(nama, 50, file)) == NULL)
	{	
  	  printf("Error File Tidak Ada!!");
   	  exit(1);
	}	
	
} 
		 
else
{
	file = fopen("member.txt","w");
	/* Input Nama User */ 
	printf("Masukan Nama anda : ");
	fflush(stdin);
	fgets(nama, 50, stdin); 
	fputs(nama, file);
	/* Input Umur User */
	printf("Masukan Password anda : ");
	fgets(umur, 50, stdin); 
	fputs(umur, file);
	fclose (file) ;
	
	file = fopen("tiket1.txt", "w");
	fclose (file) ;
	

	
	
}	  

	
 		 
 do{
 	system("CLS") ;

	printf("\n==============================================\n");
	printf("\tBioskop Pojok Malang");
	printf("\n==============================================\n\n");
 	file = fopen("member.txt","r");
 	fgets(nama, 50, file);
 	printf("Selamat Datang %s", nama);
 	fclose(file);
 	
	printf("\n1. Beli tiket bioskop " );
	printf("\n2. Batalkan pembelian tiket " );
	printf("\n3. Riwayat pembelian tiket " );
	printf("\n4. About Team " );
	printf("\n5. Exit " );
	printf("\n\nmasukan pilihan anda : ");
	fflush(stdin);
	scanf("%i", &menu);
	printf("\n--------------------------------------\n");
	
	
// fungsi memanggil tiket
	 datatiket1(kursi1,v); 
	 datatiket2(kursi2,v); 
	 datatiket3(kursi3,v);
	 datatiket4(kursi4,v); 
	 datatiket5(kursi5,v); 
	
	
	switch(menu)
 {
 case 1:	
 	 
    srand(time(NULL));
int alphabet = (rand() % 250 ) + 1;
 		/* pilih judul film */
	file = fopen("judulfilm.txt","r+");
	fgets(bacajudul, 100, file) ;
	token = strtok(bacajudul, ",");
	 while(token != NULL)	 
	{
	 	printf("%i. %s\n",i,token);
		strcpy(judul[i], token);
		i++ ;
		token = strtok(NULL, ",");
	 }
	 printf("\nPilih judul film yang akan anda tonton : ");
	 scanf("%i", &pilihjudul);
	 printf("\n===========================================\n");
	 fclose(file);
	 
	 /* memilih Jam Tayang */
	 jam(j,k,jamtayang) ;
	 printf("\n\nPilih jam tayang : ");
	 scanf("%i", &pilihjam);
	 printf("\n==========================================\n");
	 
	/* pilih jumlah tiket */
	 printf("\nJumlah tiket yang dibeli : ");
	 scanf("%i", &jumlahtiket);
	 

	 
	 /*proses pengurangan kursi */
	 if (pilihjudul == 1)
	 {	
		 
	  // percabangan theater  
	 	 if (pilihjam == 1)
		  {
			
		  	kursi1[1] -= jumlahtiket;
		  	temptiket = kursi1[1] ;
		  	
		  }
		  
 	 	else if (pilihjam == 2)
		  {
		  	kursi1[2] -= jumlahtiket;
		  	temptiket = kursi1[2];
		  }
		  
		else if (pilihjam == 3)
		  {
		  	kursi1[3] -= jumlahtiket;
		  	temptiket = kursi1[3];
		  }
		  
		 else if (pilihjam == 4)
		  {
		  	kursi1[4] -= jumlahtiket;
		  	temptiket = kursi1[4];
		  } 
		  
		  strcpy (tempjudul, judul[pilihjudul]);
		  strcpy (tempjam, jamtayang[pilihjam]);
		  strcpy (temptheater, theater[pilihjam]);
	 }
	 
	 else if (pilihjudul == 2)
	 {	
		
	   // percabangan theater
	 	 if (pilihjam == 1)
		  {
		  	kursi2[1] -= jumlahtiket;
		  	temptiket = kursi2[1] ;
		  	
		  }
		  
 	 	else if (pilihjam == 2)
		  {
		  	kursi2[2] -= jumlahtiket;
		  	temptiket = kursi2[2];
		  }
		  
		else if (pilihjam == 3)
		  {
		  	kursi2[3] -= jumlahtiket;
		  	temptiket = kursi2[3];
		  }
		  
		 else if (pilihjam == 4)
		  {
		  	kursi2[4] -= jumlahtiket;
		  	temptiket = kursi2[4];
		  } 
		  strcpy (tempjudul, judul[pilihjudul]);
		  strcpy (tempjam, jamtayang[pilihjam]);
		  strcpy (temptheater, theater[pilihjam]);
	 }
	 
	 else if (pilihjudul == 3)
	 {
		 
	  // percabangan theater
	 	 if (pilihjam == 1)
		  {
		  	kursi3[1] -= jumlahtiket;
		  	temptiket = kursi3[1] ;
		  }
		  
 	 	else if (pilihjam == 2)
		  {
		  	kursi3[2] -= jumlahtiket;
		  	temptiket = kursi3[2];
		  }
		  
		else if (pilihjam == 3)
		  {
		  	kursi3[3] -= jumlahtiket;
		  	temptiket = kursi3[3];
		  }
		  
		 else if (pilihjam == 4)
		  {printf("%i", kursi3[4]);
		  	kursi3[4] -= jumlahtiket;
		  	temptiket = kursi3[4];
		  } 
		  strcpy (tempjudul, judul[pilihjudul]);
		  strcpy (tempjam, jamtayang[pilihjam]);
		  strcpy (temptheater, theater[pilihjam]);
	 }
	 
	 else if (pilihjudul == 4)
	 {
		 
	  // percabangan theater
	 	 if (pilihjam == 1)
		  {
		  	kursi4[1] -= jumlahtiket;
		  	temptiket = kursi4[1] ;
		  }
		  
 	 	else if (pilihjam == 2)
		  {
		  	kursi4[2] -= jumlahtiket;
		  	temptiket = kursi4[2];
		  }
		  
		else if (pilihjam == 3)
		  {
		  	kursi4[3] -= jumlahtiket;
		  	temptiket = kursi4[3];
		  }
		  
		 else if (pilihjam == 4)
		  {
		  	kursi4[4] -= jumlahtiket;
		  	temptiket = kursi4[4];
		  } 
		  strcpy (tempjudul, judul[pilihjudul]);
		  strcpy (tempjam, jamtayang[pilihjam]);
		  strcpy (temptheater, theater[pilihjam]);
	 }
	 	 else if (pilihjudul == 5)
	 {
		
	  // percabangan theater
	 	 if (pilihjam == 1)
		  {
		  	kursi5[1] -= jumlahtiket;
		  	temptiket = kursi5[1] ;
		  }
		  
 	 	else if (pilihjam == 2)
		  {
		  	kursi5[2] -= jumlahtiket;
		  	temptiket = kursi5[2];
		  }
		  
		else if (pilihjam == 3)
		  {
		  	kursi5[3] -= jumlahtiket;
		  	temptiket = kursi5[3];
		  }
		  
		 else if (pilihjam == 4)
		  {
		  	kursi5[4] -= jumlahtiket;
		  	temptiket = kursi5[4];
		  } 
		  strcpy (tempjudul, judul[pilihjudul]);
		  strcpy (tempjam, jamtayang[pilihjam]);
		  strcpy (temptheater, theater[pilihjam]);
	 }
	 else
	 {
		 printf("Wrong Input\n");
	 }
	
	 if(temptiket<0)
	 {
	 	printf("Maaf Tiket Theater Tersebut Sudah Habis \n");
	 	temptiket = 0;
	 	printf("Sisa Tiket yang tersedia : %i\n", temptiket);
	 	
	 	goto next ;
	 }
	 else
	 {
		 printf("Sisa Tiket yang tersedia : %i\n", temptiket);
	 }
	 
	 total = jumlahtiket*50000 ;
	 
	 
	 printf("==========================================");
	 printf("\n\t\t TIKET ANDA \n");
	 printf("==========================================\n");			 
	 printf("Judul\t: %s\n", tempjudul);
	 printf("Jam\t: %s\n", tempjam);
	 printf("theater\t: %s\n", temptheater);
	 printf("jumlah\t: %i\n",jumlahtiket);
	 printf("==========================================\n");
	 printf("Harga Tiket\t: 50.000\n" );
	 printf("Jumlah Tiket\t: %i\n", jumlahtiket);
	 printf("Total Pembayaran: %i\n", total) ;
	 printf("==========================================\n");
	 while(uang<total)
	 {
		 printf("Masukan uang anda : ");
		 scanf("%i", &uang);
		 if (uang<total)
		 {
		 	printf("Uang anda tidak cukup\n");
		 	printf("==========================================\n");
		 }
	 }

	 printf("\n(: TIKET BERHASIL DIBELI :)"); 	 	 	
		
	 
	file = fopen("tiket1.txt", "a"); 
	fprintf(file, "%i,%s,%s,%s,%i\n", alphabet,tempjudul,tempjam,temptheater,jumlahtiket);
	fclose(file) ;
	 break;
 case 2:
		 file = fopen("tiket1.txt","r");

  while(fgets(bacatiket,100,file)!=NULL)
 	 {	
 	 token = strtok(bacatiket, ",");
 	 printf("==========================================");
	 printf("\n\t\t TIKET %s \n", token);
	 printf("==========================================\n");
	 token = strtok(NULL, ",");			 
	 printf("Judul\t: %s\n", token);
	 
	 token = strtok(NULL, ",");	
	 printf("Jam\t: %s\n", token);
	 
	 token = strtok(NULL, ",");	
	 printf("theater\t: %s\n", token);
	 
	 token = strtok(NULL, "\n");	
	 printf("jumlah\t: %s\n",token);
	 printf("==========================================\n");
	}
	fclose(file);
	
			if (strlen(bacatiket) == 0) 
		{
   	   	  printf("Anda tidak memiliki tiket \n");
   	   	  break ;
 	   	}
	
	file = fopen("tiket1.txt","r");
	FILE *ftemp = fopen("replace.txt","w");
	
 	printf("Masukan kode tiket yang ingin dibatalkan : ");
 	scanf("%s", inputkode);
	while(fgets(bacatiket,100,file)!=NULL){
		strcpy(tiket, bacatiket);
		kode = strtok(bacatiket, ",");
	 	if (strcmp(kode, inputkode)!=0)
		 {
		 	fprintf(ftemp, "%s", tiket);
		 }
	}
	printf("\n Tiket berhasil dibatalkan "); 
	 fclose(file);
	 fclose(ftemp);
	 
	 remove("tiket1.txt");
	 rename("replace.txt", "tiket1.txt") ;
	 break ;
 
 case 3:
 	 file = fopen("tiket1.txt", "r");
 	 
 	 while(fgets(bacatiket,100,file)!=NULL)
 	 {	

		  
 	 token = strtok(bacatiket, ",");
 	 
 	 printf("==========================================");
	 printf("\n\t\t TIKET %s \n", token);
	 printf("==========================================\n");
	 token = strtok(NULL, ",");			 
	 printf("Judul\t: %s\n", token);
	 
	 token = strtok(NULL, ",");	
	 printf("Jam\t: %s\n", token);
	 
	 token = strtok(NULL, ",");	
	 printf("theater\t: %s\n", token);
	 
	 token = strtok(NULL, "\n");	
	 printf("jumlah\t: %s\n",token);
	 printf("==========================================\n");
	 

	}
		if (strlen(bacatiket)== 0) 
		{
   	   	  printf("Anda tidak memiliki tiket \n");
   	   	  break ;
 	   	}
 	break;
 
 case 4: /* Nama Kelompok 1 */
 	printf("Anggota Kelompok 1 Kelas H : \n" );
 	printf("1.Ronaldi\t\t(202010370311377) \n" );
 	printf("2.Raka Yudivtira\t(202010370311367)\n");
 	printf("3.Nafisaturahmi\t\t(202010370311372)\n");
 	printf("\n----------------------------------------------\n");
	 break ;
 default:
 	 exit(1);
	 break;
 
 	
 }
 next :
 printf("\n____________________________________________________");
 printf("\n\nApakah ada transaksi lagi? (1=Ya) & (0=Tidak) : " ); 
 	scanf("%i", &pilih);
	 system("CLS") ;
	 tulisdatatiket(kursi1,kursi2,kursi3,kursi4,kursi5,v);
	 uang = 0;	
	 i=1;
}
 	while(pilih == 1);

	 

 	 
 return 0;
}	

	


   
    