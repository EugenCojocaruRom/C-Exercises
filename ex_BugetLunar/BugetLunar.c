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

//Modulul 1: citirea zilei si a datelor financiare
void citire_date() {
	/* Declaram variabile pentru zi, tip cheltuiala (citire date financiare;
	afisare venit total, cheltuiala totala, sold final; statistici per tip de cheltuiala; iesire aplicatie) */
	int zi; //numar de la 1 la 30
	char tip; //A - alimente, C - casa, R - relaxare
	//Declaram variabile pentru cele 2 tipuri de sume (numere intregi si reale)
	int suma_int;
	float suma_real;
	//Afisare titlu sectiune
	printf("\n=== CITIRE DATE FINANCIARE ===\n");
	//Afisare tipuri de date financiare
	printf(" V - venit\n A - cheltuiala alimente\n");
	printf(" C - cheltuiala casa\n R - cheltuiala relaxare\n");
	//Afisam mesaj pentru introducerea tipului de date
	printf("Alege un tip de date: ");
	//Citire tip de date de la tastatura
	scanf("%c", &tip);
	golire_buffer(); //Se goleste bufferul pentru a preveni bucla infinita

	//Utilizam instructiunea switch-case pentru a permite utilizatorului sa selecteze tipul de data
	switch (tip) {
		//Cazul 'V' / 'v' (pentru a acoperi ambele tipuri de litera introduse) pentru venitul din ziua respectiva
	case 'V':case 'v':
		//Citire zi folosind functia ajutatoare
		zi = citire_zi();
		//Citirea valorii de tip numar real pentru venitul din ziua respectiva folosind functia ajutatoare
		suma_real = citire_real();
		//Se aduna valoarea introdusa la venitul existent in ziua respectiva 
		venit[zi] += suma_real;
		//Afisare mesaj cu valoarea venitului introdus si ziua corespunzatoare
		printf("Ziua %d - venit inregistrat: %.2f lei\n", zi, suma_real);
		break;

		//Cazul 'A' / 'a' - cheltuiala alimente din ziua respectiva
	case 'A':case 'a':
		//Citire zi folosind functia ajutatoare
		zi = citire_zi();
		//Citirea valorii de tip numar intreg pentru cheltuiala alimente din ziua respectiva folosind functia ajutatoare
		suma_int = citire_intreg();
		//Se aduna valoarea introdusa la cheltuiala alimente existenta in ziua respectiva 
		alimente[zi] += suma_int;
		//Afisare mesaj cu valoarea cheltuielii alimente introduse si ziua corespunzatoare
		printf("Ziua %d - cheltuiala alimente: %d lei\n", zi, suma_int);
		break;

		//Cazul 'C' / 'c' - cheltuiala casa din ziua respectiva
	case 'C':case 'c':
		//Citire zi folosind functia ajutatoare
		zi = citire_zi();
		//Citirea valorii de tip numar real pentru cheltuiala casa din ziua respectiva folosind functia ajutatoare
		suma_real = citire_real();
		//Se aduna valoarea introdusa la cheltuiala casa existenta in ziua respectiva 
		casa[zi] += suma_real;
		//Afisare mesaj cu valoarea cheltuielii casa introduse si ziua corespunzatoare
		printf("Ziua %d - cheltuiala casa: %.2f lei\n", zi, suma_real);
		break;

		//Cazul 'R' / 'r' - cheltuiala relaxare din ziua respectiva
	case 'R':case 'r':
		//Citire zi folosind functia ajutatoare
		zi = citire_zi();
		//Citirea valorii de tip numar real pentru cheltuiala relaxare din ziua respectiva folosind functia ajutatoare
		suma_real = citire_real();
		//Se aduna valoarea introdusa la cheltuiala relaxare existenta in ziua respectiva 
		relaxare[zi] += suma_real;
		//Afisare mesaj pentru introducere detalii despre relaxare (sir de caractere)
		printf("Detalii despre relaxare: ");
		//Citire detalii despre relaxare citite de la tastatura (sir de caractere)
		scanf("%99[^\n]", detalii_relaxare);
		golire_buffer(); //Se goleste bufferul pentru cazul in care se introduc mai mult de 99 de caractere
		//Afisare mesaj cu valoarea cheltuielii relaxare introduse si ziua corespunzatoare
		printf("Ziua %d - %s - cheltuiala relaxare: %.2f lei\n", zi, detalii_relaxare, suma_real);
		break;

		//Cazul default - pentru orice alta valoare introdusa care nu corespunde niciunei optiuni valide
	default:
		//Afisare mesaj pentru tip invalid
		printf("Tip date financiare invalid. Introdu V, A, C sau R.\n");
	}
}

//Modulul 2: Calcularea si afisarea veniturilor totale, cheltuielilor totale si soldului final
void calcul_total() {
	//Declaram variabile de tip real (float) pentru venit total, cheltuiala totala si sold final
	float venit_total = 0;
	float cheltuiala_totala = 0;
	float sold_final = 0;
	//Calculam veniturile si cheltuielile totale pe parcursul lunii
	for (int i = 0; i <= ZILE; i++) {
		venit_total += venit[i];
		cheltuiala_totala += alimente[i] + casa[i] + relaxare[i];
	}
	//Calculam soldul final
	sold_final = venit_total - cheltuiala_totala;
	//Afisare rezultate
	printf("\n=== SITUATIE BUGET LUNAR ===\n");
	printf("Venit total: %.2f lei\n", venit_total);
	printf("Cheltuiala totala: %.2f lei\n", cheltuiala_totala);
	//Setare conditii pentru afisarea soldului final in functie de valoarea acestuia (pozitiv, negativ sau zero)
	if (sold_final > 0) {
		printf("Sold final: %.2f lei -> profit\n", sold_final);
	}
	else if (sold_final < 0) {
		printf("Sold final: %.2f lei -> pierdere\n", sold_final);
	}
	else {
		printf("Sold final: %.2f lei -> echilibrat\n", sold_final);
	}
}
