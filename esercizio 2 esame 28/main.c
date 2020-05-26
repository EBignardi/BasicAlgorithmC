#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct persona {
	char *nome;
	uint16_t eta;
	char sesso;
};

bool persona_scrivi(const struct persona *p, FILE *f)
{
	int d = 0;
	if (f == NULL)
		return false;

	if (fwrite(p->nome, strlen(p->nome), 1, f) != 1)
		return false;
	/*per mettere lo zero*/
	else if (fwrite(&d, sizeof(char), 1, f) != 1)
		return false;
	else if (fwrite(&p->eta, sizeof(uint16_t), 1, f) != 1)
		return false;
	else if (cfwrite(&p->sesso, sizeof(char), 1, f) != 1)
		return false;
	else
		return true;
}








int main(void) {

	return 0;
}