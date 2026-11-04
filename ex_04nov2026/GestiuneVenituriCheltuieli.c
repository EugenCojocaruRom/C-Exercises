#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {
	//1. Citirea datelor financiare
	
	//Definim numarul zilelor dintr-o luna ca si o constanta
	const int nrZileLuna = 30;
	//Declaram vector de tip char pentru tipurile de cheltuieli
	char cheltuieli[] = { 'A', 'C', 'R' };
	//Declaram variabila de tip float pentru venitul lunar
	float venitLunar;
	//Afisam mesaj pentru utilizator
	printf("Introduceti venitul lunar: ");
	//Citim de la tastatura valoarea introdusa
	scanf("%f", &venitLunar);
	

	printf("Venit introdus: %.2f\n", venitLunar);

	return 0;
}