#include <stdlib.h>
#include <math.h>
#include <string.h>
struct matrix {
	size_t rows, cols;
	double *data;
};

struct matrix *rotate_v(const struct matrix *m, int n)
{
	/*alloco la memoria per la matrice*/
	struct matrix *matrix_rotate = malloc(sizeof(struct matrix));
	matrix_rotate->data = malloc(sizeof(double)* m->rows * m->cols);
	matrix_rotate->cols = m->cols;
	matrix_rotate->rows = m->rows;
	/*calcolo la grandezza della riga*/
	size_t dimensione_riga;
	dimensione_riga = m->cols * sizeof(double);
	/*nel caso il valore degli scambi coincide
	con il numero delle righe la matrice rimane invariata*/
	if (abs(n) == m->rows) {
		memcpy(&matrix_rotate->data, &m->data, sizeof(m->cols*m->rows));
	}
	/*alloco memoria per due righe che usero come appoggio*/
	double *tmp1, *tmp2;
	tmp1 = malloc(dimensione_riga);
	tmp2 = malloc(dimensione_riga);
	/*faccio una copia nella unova matrix*/
	memcpy(matrix_rotate->data, m->data, sizeof(double)*m->cols*m->rows);
	// NEL CASO IN CUI N>0
	/*WHILE per il numero di scambi da fare*/
	if (n > 0) {
		int i = 0;
			while (n > 0) {
				/*copio la prima riga nella memoria temporanea*/
				memcpy(tmp1, matrix_rotate->data + (matrix_rotate->cols * i), dimensione_riga);
				/*copio la seconda riga nella prima*/
				memcpy(matrix_rotate->data + (matrix_rotate->cols * i), matrix_rotate->data + (matrix_rotate->cols * (i + 1)), dimensione_riga);
				/*copio la prima riga che era stata memorizzata nella seconda*/
				memcpy(matrix_rotate->data + (matrix_rotate->cols * (i + 1)), tmp1, dimensione_riga);
				i++, n--;
			}
	}
	else {
		// NEL CASO IN CUI N<0
			/*WHILE per il numero di scambi da fare*/
			int i = matrix_rotate->rows - 1;
			while (n < 0) {
				/*copio l'ulitma riga nella memoria temporanea*/
				memcpy(tmp, matrix_rotate->data + (matrix_rotate->cols * i), dimensione_riga);
				/*copio l'ultima riga nella penul'ultima*/
				memcpy(matrix_rotate->data + (matrix_rotate->cols * i), matrix_rotate->data + (matrix_rotate->cols * (i - 1)), dimensione_riga);
				/*copio la riga che era stata memorizzata nella seconda*/
				memcpy(matrix_rotate->data + (matrix_rotate->cols * (i + 1)), tmp, dimensione_riga);
				i--, n++;
			}
	}
	

	return matrix_rotate;
}


int main(void)


{
	double data[] = { 1,2,3,4,5,6,7,8,9 };
	struct matrix a = { 3,3,data };
	
	struct matrix *ris= rotate_v(&a, 1);

	return 0;
}