/*Fie o matrice patratica de rangul n, cititi elementele matricei, apoi realizati un meniu iteractiv cu urmatoarele optiuni
1 - Afisare matrice
2 - Afisare elemente de pe diagonala principala
3 - Afisare elemente de pe diagonala secundara
4 - Afisare elemente de sub diagonala principala
5 - Afisare elemente de deasupra diagonalei principale
6 - Afisare elemente de sub diagonala secundara
7 - Afisare elemente de deasupra diagonalei secundare
8 - Afisare elemente de pe marginile matricei
9 - Afisare elemente din colturile matricei
10 - Afisarea urmei matricei (suma diag. princip.)
11 - Afisarea matricei transpuse
12 - Daca rangul sau ordinul matricei este < 4 atunci calculati matrice la -1
0 - Iesire
Obs. Cand se vor afisa elementele indiferent de cazuri, se vor afisa pe pozitiile din matricea data
Obs. Se vor folosi pointeri*/
//[0,0] [0,1] [0,2]
//[1,0] [1,1] [1,2]
//[2,0] [2,1] [2,2]

#include<stdio.h>
#include<stdlib.h>

#define citire(x) scanf("%d", &x)
#define introducere printf("Introduceti nr.: ")
#define rand printf("\n")
#define space printf(" ")

int main() {
	system("color 02");

	int n, opt, i, j, urm = 0, aux;
	int **v;

	printf("Introduceti Ordinul Matricei: ");
	citire(n);

	v = (int**)calloc(n * n, sizeof(n));

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("v[%d][%d] = ", i, j);
			scanf("%d", (v + i * n + j));
		}
	}


	while (1) {

		printf("\n1 - Afisare matrice\n");
		printf("2 - Afisare elemente de pe diagonala principala\n");
		printf("3 - Afisare elemente de pe diagonala secundara\n");
		printf("4 - Afisare elemente de sub diagonala principala\n");
		printf("5 - Afisare elemente de deasupra diagonalei principale\n");
		printf("6 - Afisare elemente de sub diagonala secundara\n");
		printf("7 - Afisare elemente de deasupra diagonalei secundare\n");
		printf("8 - Afisare elemente de pe marginile matricei\n");
		printf("9 - Afisare elemente din colturile matricei\n");
		printf("10 - Afisarea urmei matricei\n");
		printf("11 - Afisarea matricei transpuse\n");
		printf("12 - Daca rangul sau ordinul matricei este < 4 atunci calculati matrice la -1\n");
		printf("0 - Iesire\n");
		printf("Introduceti Optiunea: ");
		citire(opt);

		switch (opt) {
		case 0:
			free(v);
			exit(0);
			break;
		case 1:
			rand;
			printf("1 - Afisare matrice\n");
			rand;
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					printf("%d", *(v + i * n + j));
					space;
				}
				rand;
			}
			break;
		case 2:
			rand;
			printf("2 - Afisare elemente de pe diagonala principala\n");
			rand;
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					if (i == j) {
						printf("%d", *(v + i * n + j));
						space;
					}
					else {
						space;
						space;
					}
				}
				rand;
			}
			break;
		case 3:
			rand;
			printf("3 - Afisare elemente de pe diagonala secundara\n");
			rand;
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					if (i + j == n - 1) {
						printf("%d", *(v + i * n + j));
						space;
					}
					else {
						space;
						space;
					}
				}
				rand;
			}
			break;
		case 4:
			rand;
			printf("4 - Afisare elemente de sub diagonala principala\n");
			rand;
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					if (i > j) {
						printf("%d", *(v + i * n + j));
						space;
					}
					else {
						space;
						space;
					}
				}
				rand;
			}
			break;
		case 5:
			rand;
			printf("5 - Afisare elemente de deasupra diagonalei principale\n");
			rand;
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					if (i < j) {
						printf("%d", *(v + i * n + j));
						space;
					}
					else {
						space;
						space;
					}
				}
				rand;
			}
			break;
		case 6:
			rand;
			printf("6 - Afisare elemente de sub diagonala secundara\n");
			rand;
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					if (i + j >= n) {
						printf("%d", *(v + i * n + j));
						space;
					}
					else {
						space;
						space;
					}
				}
				rand;
			}
			break;
		case 7:
			rand;
			printf("7 - Afisare elemente de deasupra diagonalei secundare\n");
			rand;
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					if (i + j < n - 1) {
						printf("%d", *(v + i * n + j));
						space;
					}
					else {
						space;
						space;
					}
				}
				rand;
			}
			break;
		case 8:
			rand;
			printf("8 - Afisare elemente de pe marginile matricei\n");
			rand;
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					if ((i == 0) || (i == n - 1) || (j == 0) || (j == n - 1)) {
						printf("%d", *(v + i * n + j));
						space;
					}
					else {
						space;
						space;
					}
				}
				rand;
			}
			break;
		case 9:
			rand;
			printf("9 - Afisare elemente din colturile matricei\n");
			rand;
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					if (((i == 0) || (i == n - 1)) && ((j == 0) || (j == n - 1))) {
						printf("%d", *(v + i * n + j));
						space;
					}
					else {
						space;
						space;
					}
				}
				rand;
			}
			break;
		case 10:
			rand;
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					aux = *(v + i * n + j);
					if (i == j) {
						urm += aux;
					}
				}
			}
			printf("Urma Matricei este: %d", urm);
			rand;
			break;
		case 11:
			rand;
			printf("11 - Afisarea matricei transpuse\n");
			rand;
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					printf("%d", *(v + i * n + j));
					space;
				}
				rand;
			}
			break;
		/*case 12:
			if (n <= 3) {

			}
			else {
				printf("Matricea trebuie sa fie de maxim ordinul 3");
			}
			break;*/

		default:
			printf("Optiune gresita");
			break;
		}
	}

	rand;
	system("pause");
	return 0;
}