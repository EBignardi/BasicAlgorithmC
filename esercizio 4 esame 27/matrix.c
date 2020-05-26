#include "matrix.h"

struct matrix *prod_kronecker(const struct matrix *a, const struct matrix *b)
{
	if (a == NULL)
		return NULL;
	if (b == NULL)
		return NULL;

	struct matrix *new_matrix = malloc(sizeof(struct matrix));
	new_matrix->cols = a->cols*b->cols;
	new_matrix->rows = a->rows*b->rows;
	new_matrix->data = malloc(new_matrix->rows*new_matrix->cols * sizeof(double));
	
	int i,j,k,t,elem=0;
	
	if (a->cols == 1 && a->rows == 1) {
		for (elem = 0,j=0; elem < b->cols * b->rows; elem++) {
						new_matrix->data[elem] = b->data[elem] * a->data[j];
				}
		return new_matrix;
	}
		

	if (b->cols == 1 && b->rows == 1) {
		for (elem = 0, j = 0; elem < a->cols * a->rows; elem++) {
					new_matrix->data[elem] = a->data[elem] * b->data[j];
				}
		return new_matrix;
	}

	for (i = 0; i < a->rows; i++)
		{
		for (j = 0; j < b->rows; j++)
			{
			for (k = 0; k < a->cols; k++)
				{
				for (t = 0; t < b->cols; t++)
					{
						new_matrix->data[elem] = a->data[i*a->rows + k] * b->data[j*b->rows + t];
						elem++;
					}
				}
			}
		}

	return new_matrix;
}