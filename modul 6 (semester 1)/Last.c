#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
FILE *file ;
int menu;
int i, j = 1 ;
char username [50], password [50], kodeuser[50];
char cariuser[50],caripass[100];
char tempuser[100],temppass[100];
char tampiluser[100] ;
char *user,*user1;
char *pass, *pass1;
bool cekuser, cekpass;

int main()
{
	
	do
	{
	printf("MENU\n");
	printf("1. Registrasi\n");
	printf("2. Login\n");
	printf("3. Tampilkan Data\n");
	printf("4. Format Data\n");
	printf("5. Exit\n");
	printf("\n=======================\n");
	printf("Pilih Menu : ");
	scanf("%i", &menu);
	
	
	switch(menu)
	{
	case 1:
		i++ ;
		file = fopen("username.txt","a");
		printf("\n====== Registrasi ====\n");
		while(1>0)
		{
			printf("Input Username : ");
			scanf("%s", username);
			
			if(strlen(username) > 6)
			{
				break ;
			}
			
			else if(strlen(username) < 6)
			{
				printf("Username harus lebih dari 6 karatker\n");
			}
			
			
		}
		
		
		while(2>0)
		{
			printf("Input Password : ");
			scanf("%s", password);
			
			if(strlen(password) > 8)
			{
				break ;
			}
			
			else if(strlen(password) < 8)
			{
				printf("Pasword harus lebih dari 8 karakter \n");
			}
				
		}
		
		strcpy(kodeuser, username);
		strupr(kodeuser);
		
		printf("Username berhasil didaftarkan\n");
		printf("=======================\n");
		printf("Username \t: %s \n", username);
		printf("Password\t: %s \n", password);
		printf("Kode User\t: %.3s-%04i\n", kodeuser, i);
		
		file = fopen("username.txt","a");
		fprintf(file, "%s,%.3s-%04i,\n", username, kodeuser, i);
		fclose(file);
		
		file = fopen("password.txt","a");
		fprintf(file, "%s\n", password);
		fclose(file);
		
		
		break;
case 2:
		printf("\n====== Login ====\n");
	
		file = fopen("username.txt","r");
		
		cekuser = false ;
			
		printf("Input Username : ");
		scanf("%s", cariuser);
		while(fgets(tempuser, 100, file)!= NULL)
		{
			strcpy(tampiluser, tempuser);
			user = strtok(tempuser,",");
			user1 = strtok(NULL, ",");
				if (strcmp(user, cariuser)==0 || strcmp(user1,cariuser)==0)
				{
					cekuser = true;
					break ;
				}
		}
		fclose(file);
		
		file = fopen("password.txt","r");
		cekpass = false ;	
		printf("Input Password : ");
		scanf("%s", caripass);
		while(fgets(temppass, 100, file)!= NULL)
		{
			if(strcmp(caripass, temppass)!=1)
			{
				cekpass = true;
				break ;
			}
		}	
			
		fclose(file);
		
		if (cekuser == false || cekpass == false )
		{
			printf("Username/ password yang anda masukan salah\n" ) ;
		}
		else if (cekuser == true && cekpass == true)
		{
			printf("\nSelamat Datang %s\n", user);
			printf("=== Data Anda ==== \n");
			printf("Username   : %s\n", user);
			printf("Kode User  : %s \n", user1);
		}
		else
		{
			printf("password anda salah");
		}
		
		break ;
case 3:
		file = fopen("username.txt","r");
		
		if ((file = fopen("username.txt","r")) == NULL)
		{
       	   	   printf("Error: Member tidak ada yang registrasi \n\n");
       	   	   continue ;
  	    }

		printf("\n====== List Data ====\n");
		while(fgets(tempuser, 100, file) != NULL)
		{
			
				
			printf("== %i ==\n", j);
			user = strtok(tempuser,",");
			user1 = strtok(NULL, ",");

			printf("Username   : %s\n", user);
			printf("Kode User  : %s \n", user1);
			j++ ;
		}
				
		fclose(file);
		break ;
		
case 4: //exit 1//
	
	remove("username.txt");
	
	printf("\n======================\n");
	printf("Data Berhasil diformat\n");
				
	default:
		break;
	
	}
	
}while(9>0) ;

	return 0;
}