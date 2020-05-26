#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct dato {
	double valore;
	unsigned classe;
};

struct dato *read_dati(const char *filename, unsigned int *pn)
{
	unsigned int count = 1;
	FILE *f = fopen(filename, "rt");
	if (f == NULL) return NULL;
	struct dato *dati_letti = malloc(sizeof(struct dato));
	while (!feof(f)) {
		fscanf(f, "%f %u", &dati_letti->valore, &dati_letti->classe);
		dati_letti = realloc(dati_letti, sizeof(struct dato) * count);
		count++;
	}
	*pn = (count - 2);
	fclose(f);
	return &dati_letti;
}



int main(void)
{
	unsigned int letti = 0;
	read_dati("dati2.txt", &letti);
	return 0;
}