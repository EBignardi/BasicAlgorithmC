#include "matrix.h"
struct matrix *scambia_diagonali(const struct matrix *m)
{
	if (m == NULL)
		return NULL;

	if (m->cols != m->rows)
		return NULL;

	struct matrix *scambiata = malloc(sizeof(struct matrix));
	scambiata->cols = m->cols;
	scambiata->rows = m->rows;
	scambiata->data = malloc(sizeof(double) * m->cols * m->rows);

	// diagonale principale elemento -> riga == colonna
	memcpy(scambiata->data, m->data, m->rows*m->cols * sizeof(double));
	int c = 0, r = 0;
	while (c < scambiata->cols) {
		memcpy(scambiata->data + (r * scambiata->cols + c), scambiata->data+((scambiata->cols - 1)*(r + 1)), sizeof(double));
		memcpy(scambiata->data + ((scambiata->cols - 1)*(r + 1)), m->data + (r * scambiata->cols + c), sizeof(double));
		c++, r++;
	}

	// diagonale secondaria elemento -> riga == num_colonne - riga
	return scambiata;
}