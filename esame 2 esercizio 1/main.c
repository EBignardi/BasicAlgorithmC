#define  _CRT_SECURE_NO_WARNINGS
#include <string.h>

char *concatena(const char *s1, const char *s2)
{
	char *stringa_concatenata;
	stringa_concatenata = malloc(strlen(s1) + strlen(s2) + 1);
	strcpy(stringa_concatenata, s1);
	strcat(stringa_concatenata, s2);
	return stringa_concatenata;
}

int main(void)
{
	char stringa1[] = "prova";
	char stringa2[] = "test";
	char *stringaconcatenata;
	stringaconcatenata = concatena(&stringa1, &stringa2);

	return 0;
}