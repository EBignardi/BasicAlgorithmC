#if !defined MATRIX_C
#define MATRIX_C
#include <stdlib.h>
struct matrix {
	size_t rows, cols;
	double *data;
};

extern struct matrix *prod_kronecker(const struct matrix *a, const struct matrix *b);

#endif