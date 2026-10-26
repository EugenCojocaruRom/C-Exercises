#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// Afisare mesaj simplu cu functia printf
	printf("Primul exercitiu\n");

	printf("\n");

	// Afisarea sumei a doua numere intregi citite de la tastatura
	int a, b, suma1;
	printf("Introduceti primul numar: ");
	scanf("%d", &a);
	printf("Introduceti al doilea numar: ");
	scanf("%d", &b);
	suma1 = a + b;
	printf("Suma este: %d", suma1);

	printf("\n\n");

	// Afisare rezultatului verificarii daca un numar este par/impar
	int nr1;
	printf("Introduceti numarul: ");
	scanf("%d", &nr1);
	if (nr1 % 2 == 0)
		printf("Numarul este par.");
	else // nr % 2 == 1
		printf("Numarul este impar.");

	printf("\n\n");

	// Suma a n numere citite de la tastatura
	int n1, nr2, i, suma2 = 0;
	printf("Cate numere doriti? ");
	scanf("%d", &n1);
	for (i = 0; i < n1; i++) {
		printf("Nr: ");
		scanf("%d", &nr2);
		suma2 += nr2;
	}
	printf("Suma numerelor este: %d", suma2);

	printf("\n\n");

	//N numere citite de la tastatura pana la intalnirea numarului 0 (while)
	int n2;
	printf("N = ");
	scanf("%d", &n2);
	while (n2 != 0) {
		printf("Numarul este: %d,", n2);
		printf("\nN = ");
		scanf("%d", &n2);
	}
	return 0;

}