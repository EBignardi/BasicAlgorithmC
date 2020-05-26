#include "insert.h"

char *inserisci(const char *str, const char *news, size_t indice)
{
	if (str == NULL || news == NULL || indice > strlen(str)) {
		return NULL;
	}

	char* nuova = malloc((strlen(str) + strlen(news) + 1) * sizeof(char));

	int i = 0, j = 0, z = 0;

	/*FOR per la copia della prima parola fino a indice*/
	for (j; j < indice; j++, i++)
		nuova[i] = str[j];
	/*FOR per la parola da inserire*/
	for (z; z < strlen(news) * sizeof(char); z++, i++)
		nuova[i] = news[z];
	/*FOR per la copia della prima parola dall indice alla fine*/
	for (j + z; (j + z) < (strlen(str) + strlen(news))* sizeof(char); j++, i++)
		nuova[i] = str[j];
	nuova[i] = 0;
	
	return  nuova;
}