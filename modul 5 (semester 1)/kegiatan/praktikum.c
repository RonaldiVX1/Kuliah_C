#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

FILE *file;

int main()
{
	int pilih, i=0,login;
	char username[50],password[50];
	char temppassword[50][20], tempusername[20][20] ;
	char kodeuser[10], data[20];
	char userlogin, passwordlogin;
	bool Loguser, Logpass ;

	do
	{
		printf("Menu\n");
		printf(" 1. Registrasi\n");
		printf(" 2. Login\n");
		printf(" 3. Tampilkan semua data\n");
		printf(" 4. exit\n");
		printf(" Pilih Menu : ");
		scanf("%i", &pilih);
		
switch(pilih)
		{
			 
case 1:
			printf("==Registrasi==\n");
			file = fopen("username.txt","a+");
			
		// input username //
		printf("Input Username : ");
			fflush(stdin);
			fgets(username, 50, stdin);
		while(strlen(username)<=7) 
		{
			if(strlen(username)<=7)
			{
				printf("Username harus lebih dari 6 karakter\n");
			}
			printf("Input Username : ");
			fflush(stdin);
			fgets(username, 50, stdin);
			
		}
		
		// perintah kodeuser //
		strcpy(kodeuser,username);
		strupr(kodeuser);
		fputs(username, file);
		fclose(file);
		
		//input pasword //
		file = fopen("password.txt","a+");
		while(strlen(password)<=7)
		{
			printf("Input Password : ");
			fflush(stdin);
			fgets(password, 50, stdin);
			fflush(stdin);
			if(strlen(password)<8)
			{
				printf("Password harus lebih dari 8 karakter\n");
			}
		}
		fputs(password, file);
		fclose(file);
		printf("Username berhasil didaftarkan\n");
		printf("Username \t: %s",username);
		printf("Password \t: %s", password);
		i++ ;
		printf("Kode User  \t: %.3s-%04i\n", kodeuser,i);
		
		//notepad registrasi//
		file = fopen("registrasi.txt","a") ;

		fprintf(file,"%s", username);
		fprintf(file,"%.3s-%04i\n",kodeuser, i);
		fprintf(file,"%s", password);
		fclose(file);
		
		//menulis data ke notepad//
		file = fopen("data.txt","a") ;
		fprintf(file,"== %i ==\n", i);
		fprintf(file,"Username : %s", username);
		fprintf(file,"Kode User : %.3s-%04i \n",kodeuser, i);
		fclose(file);
		break;
	
	
case 2:
	login = 0;
	printf("input username : ");
	scanf("%s", &userlogin);
	
	file=fopen("registrasi.txt","r");
	while(fscanf(file,"%s", tempusername[i++])!=EOF)	
	
		if (strcmp(tempusername[i], userlogin)==0)
		{
			Loguser	= false ;
			break ;
		}
		else
		{
			printf("username tidak ada\n");
			printf("input username : ");
			scanf("%s", &userlogin);
		}
		
		printf("input Password : " );
		scanf("%s", passwordlogin);
	while(fscanf(file,"%s", temppassword[i++])!=EOF)
	
	if (strcmp(temppassword[i], passwordlogin)==0)
		{
			Logpass = false;
			break ;
		}
		else
		{
			printf("Password anda Salah");
			printf("input Password : " );
		scanf("%s", passwordlogin);
		}
		
	if (Loguser == 0 && Logpass == 0)
	{
		strcpy(kodeuser,userlogin);
		strupr(kodeuser);
		printf("SELAMAT DATANG %s\n", username );
		printf("== Data Anda ==\n");
		printf("Username : %s\n", username);
		printf("KodeUser : %.3s-%04i", kodeuser, i);
	}
	
			break ;
case 3:
	file =fopen("data.txt","r");
	while(fgets(data, 50,file)){	
		printf("%s", data);	
	}
	case 4:
		exit(0);
default:
			break;
		}
	}
	while(i<=99);
	
	
	return 0;
}