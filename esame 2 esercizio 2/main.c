#include <stdio.h>
void stampa_quadrato(unsigned int lato)
{
	for (unsigned int i = 0; i < lato; i++) { 
		fputc('*', stdout); 
	} 
	fputc('\n', stdout);

	for (unsigned int i = 0; i < lato - 1; i++) {
		fputc('*', stdout); 
		for (unsigned int i = 0; i < lato - 1; i++) { 
			fputc(' ', stdout); } 
		fputc('*', stdout); 
		fputc('\n', stdout);
	}

	for (unsigned int i = 0; i < lato; i++) { 
		fputc('*', stdout); 
	}
	return;
}

int main(void)
{
	stampa_quadrato(5);
	return;
}