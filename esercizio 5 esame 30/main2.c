#include <string.h>
#include <stdlib.h>

void path_split(const char *str, char **path, char **filename)



int main(void)
{
	char **s1, **s2;
	char stringa[] = "c:\user\esami\FdI2017\esercizi";
	path_split(stringa, s1, s2);
	return;
}