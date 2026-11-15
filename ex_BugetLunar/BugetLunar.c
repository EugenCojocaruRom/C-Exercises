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

//Functie ajutatoare pentru citirea zilei
int citire_zi() {
	int z; //z pentru a diferentia de variabila zi de mai sus
	int ok; //variabila pentru a verifica daca valoarea introdusa este corecta
	//Rulam o bucla do-while pentru a permite utilizatorului sa introduca o valoare corecta
	do {
		printf("Introdu ziua lunii (1-%d): ", ZILE);
		ok = scanf("%d", &z);
		golire_buffer(); //Se goleste bufferul pentru a preveni bucla infinita
		//Setare conditie pentru verificarea corectitudinii valorii introduse (1 <= z <= ZILE)
		if (ok != 1 || z < 1 || z > ZILE) {
			printf(" Valoarea trebuie sa fie in intervalul 1-%d.\n", ZILE);
			ok = 0; //Setam ok la 0 pentru a forta reluarea buclei
		}
	} while (!ok);
	return z;
}

//Functie ajutatoare pentru citirea numerelor intregi (cheltuieli alimente)
int citire_intreg() {
	int x; //variabila pentru citirea numarului intreg
	int ok; //variabila pentru a verifica daca valoarea introdusa este corecta
	//Rulam o bucla do-while pentru a permite utilizatorului sa introduca o valoare corecta
	do {
		printf("Introdu suma (numar intreg): ");
		ok = scanf("%d", &x);
		golire_buffer(); //Se goleste bufferul pentru a preveni bucla infinita
		//Setare conditie pentru verificarea corectitudinii valorii introduse
		if (ok != 1 || x < 0) {
			printf("Suma trebuie sa fie cel putin 0.\n");
			ok = 0; //Setam ok la 0 pentru a forta reluarea buclei
		}
	} while (!ok);
	return x;
}

//Functie ajutatoare pentru citirea numerelor reale (venituri, cheltuieli casa & relaxare)
float citire_real() {
	float y; //variabila pentru citirea numarului real
	int ok; //variabila pentru a verifica daca valoarea introdusa este corecta
	//Rulam o bucla do-while pentru a permite utilizatorului sa introduca o valoare corecta
	do {
		printf("Introdu suma (numar real): ");
		ok = scanf("%f", &y);
		golire_buffer(); //Se goleste bufferul pentru a preveni bucla infinita
		//Setare conditie pentru verificarea corectitudinii valorii introduse
		if (ok != 1 || y < 0) {
			printf("Suma trebuie sa fie cel putin 0.\n");
			ok = 0; //Setam ok la 0 pentru a forta reluarea buclei
		}
	} while (!ok);
	return y;
}