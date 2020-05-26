#include "matrix.h"

int main(void) {
	double datiA[] = { 1,2,3,4,5,6,7,8,9 };
	double datiB[] = { 1,2,3,4 };

	struct matrix A = { 3,3, datiA };
	struct matrix B = { 2,2, datiB };
	struct matrix *ris = prod_kronecker(&A, &B);
	return 0;
}