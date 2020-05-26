#include <string.h>
#include <stdlib.h>

void path_split(const char *str, char **path, char **filename){	if (str == NULL) {		return NULL;	}	size_t i = 0, pos = 0, j = 0, len = 0;	while (str[i] != 0) {		if (str[i] == '\\') {			// trovo la posizione dell'ultima occorrenza			pos = i;		}		len++;	}	char *indirizzo = malloc(sizeof(char)*pos);	char *nome = malloc(sizeof(char)*(len - pos));	for (i = 0; i < pos; i++) {		indirizzo[i] = str[i];	}	for (i = 0, j = pos; j < len; i++, j++) {		nome[i] = str[j];	}	*path = indirizzo;	*filename = nome;}



int main(void)
{
	char **s1, **s2;
	char stringa[] = "c:\user\esami\FdI2017\esercizi";
	path_split(stringa, s1, s2);
	return;
}