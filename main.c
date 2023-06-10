#include <stdio.h>
#include "constantes.h"
#include "structs.h"

// Protótipos
void preencherGrade (grade *);
void imprimirGrade (grade *);


int main () {
	grade sudoku;

	preencherGrade(&sudoku);
	//sudoku.celulas[0][0].subCelulas[0][0] = 1111;
	imprimirGrade(&sudoku);
	
	return 0;
}


// Metódos


// Implementação
void preencherGrade (grade *sudoku) {
	int valor = 1;
	for (int i = 0; i < GRADE; i++) {
		for (int j = 0; j < GRADE; j++) {
			for (int k = 0; k < GRADE; k++) {
				for (int l = 0; l < GRADE; l++) {
				sudoku -> celulas[i][j].subCelulas[k][l] = valor++;
				}	
			}
		}
	}
}

void imprimirGrade (grade *sudoku) {
	printf("------------- SuDoKu -------------\n");
        for (int i = 0; i < GRADE; i++) {
                for (int k = 0; k < GRADE; k++) {
			printf("| ");
                        for (int j = 0; j < GRADE; j++) {
                                for (int l = 0; l < GRADE; l++) {
         	                       printf("%2d ", sudoku -> celulas[i][j].subCelulas[k][l]);
                                }
				printf("| ");
                        }
			printf("\n");
                }
		printf("----------------------------------\n");
	}
}


