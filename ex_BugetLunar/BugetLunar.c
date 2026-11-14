#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Definim expresii constante (macro) pentru valori fixe
#define ZILE 30 //Numarul zilelor dintr-o luna
#define DETALII_RELAXARE 100 //Lungimea maxima a textului pentru detaliile despre relaxare (e.g. "Parc", "Cinema", "Petrecere", "Plimbare cu barca pe lac")

/* Declaram vectorii pentru venituri, cheltuieli (alimente, casa, relaxare) si detalii despre relaxare
-> numarul de elemente este dat de expresia constanta ZILE + 1 (pentru a accesa corect indecsii), respectiv DETALII_RELAXARE */
float venit[ZILE + 1]; //numar real
int alimente[ZILE + 1]; //numar intreg
float casa[ZILE + 1]; //numar real
float relaxare[ZILE + 1]; //numar real
char detalii_relaxare[DETALII_RELAXARE]; //sir de caractere

//Functie ajutatoare pentru afisarea meniului de optiuni
void afisare_meniu() {
	//Afisare titlu sectiune
	printf("\n=== BUGET LUNAR (%d zile)===\n", ZILE);
	//Afisare optiuni meniu
	printf("1 - Introducere date financiare (venit / cheltuiala)\n");
	printf("2 - Afisare venit total, cheltuiala totala, sold final\n");
	printf("3 - Statistici per tip de cheltuiala (A / C / R)\n");
	printf("0 - Iesire aplicatie\n");
	//Afisare mesaj pentru introducere optiune meniu
	printf("\nIntrodu optiunea dorita: ");
}

/* Functie ajutatoare pentru golirea bufferului (pentru a preveni bucla infinita in cazul in care
se introduce de la tastatura altceva decat o cifra, un numar sau un caracter) */
void golire_buffer() {
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}
