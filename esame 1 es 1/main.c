#include <stdlib.h>

unsigned int conta_spazi(const char* s)
{
	int count = 0;
	for (size_t i = 0; s[i] != '\0'; i++) {
		if (s[i] == ' ') {
			count++;
		}
	}
	return count;
}



int main(void)
{
	char stringaprova[] = "in questa stringa ci sono 6 spazi";
	int risultato = conta_spazi(stringaprova);
	return 0;
}