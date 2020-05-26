#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern void stampa_cornice(const char *s)
{
	size_t i;
	putc('/', stdout);
	for ( i = 0; i < strlen(s) + 2; i++) {
		putc('-', stdout);
	}
	putc('\\', stdout);
	putc('\n', stdout);

	putc('|', stdout);
	putc(' ', stdout);
	for (i = 0; i < strlen(s); i++) {
		putc(s[i], stdout);
	}
	putc(' ', stdout);
	putc('|', stdout);
	putc('\n', stdout);

	putc('`', stdout);
	for (size_t i = 0; i < strlen(s)+2; i++) {
		putc('-', stdout);
	}
	putc(''', stdout);
	putc('\n', stdout);
}

int main(void)
{
	stampa_cornice("ciao");
	return;
}