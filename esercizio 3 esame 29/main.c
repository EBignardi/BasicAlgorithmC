#include "matrix.h"
int main(void)
{
	double dati[] = { 1,2,3,4,5,6,7,8,9 };

	struct matrix a = { 3,3,dati };
	struct matrix *ris = scambia_diagonali(&a);
	return;
}