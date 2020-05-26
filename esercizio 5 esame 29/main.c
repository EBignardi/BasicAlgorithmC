#include <string.h>
#include <stdlib.h>

void string_split(const char *str, size_t index, char **s1, char **s2)
{
	char *stringa1 = malloc(sizeof(char) * 1);
	char *stringa2 = malloc(sizeof(char) * 1);

	size_t i = 0;
	for (i; i < index; i++) {
		stringa1[i] = str[i];
		realloc(stringa1, (i + 2) * sizeof(char));
	}
	stringa1[i] = 0;

	size_t j = 0;
	for (j; i < strlen(str); i++, j++) {
		stringa2[j] = str[i];
		realloc(stringa2, (j + 2) * sizeof(char));
	}
	stringa2[j] = 0;

	
	*s1 = stringa1;
	*s2 = stringa2;

	return;
}

int main(void) {
	
	char **s1 = NULL;
	char **s2 = NULL;
	char str[] = "alfabetizzazione";
	string_split(str, 6, s1, s2);
	return;
}