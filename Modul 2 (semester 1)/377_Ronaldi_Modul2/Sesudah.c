#include <stdio.h>

int hitung_are(int hektare) {
	int are ;
	are = hektare * 100 ;
	return are ;
	// fungsi are //
}

int hitung_meter(int hektare, int are) {
	int m_persegi ;
	m_persegi = are * 100 ;
	return m_persegi ;
	// fungsi meter // 
}

int hitung_centimeter(int hektare, int m_persegi) {
	int cm_persegi ;
	cm_persegi = m_persegi * 10000 ;
	return cm_persegi ;
	// fungsi centimeter //
}

int main()
{
	int hektare, are, m_persegi, cm_persegi;
	
	printf("Masukan satuan luas dalam satuan hektare : ");
	scanf("%d", &hektare);
	
	are 		= hitung_are(hektare);
	m_persegi 	= hitung_meter(hektare, are);
	cm_persegi	= hitung_centimeter(hektare, m_persegi);
	
	printf("konversi satuan luas adalah %d hektare sama dengan : ", hektare);
	printf("\n %d are \n %d meter persegi \n %d centimeter persegi", are, m_persegi, cm_persegi);
	
	return 0;
}