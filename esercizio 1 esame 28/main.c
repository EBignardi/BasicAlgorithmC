#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

bool armstrong(size_t a)
{
	unsigned int cifre = 0;
	size_t b = a, c = a;
	size_t somma = 0;

	while (b > 0) {
		b /= 10;
		cifre++;
	}

	int resto = a, potenza=cifre;
	while (cifre != 0) {
		resto = c % 10;
		c /= 10;
		somma += pow(resto,potenza);
		cifre--;
	}

	if (somma == a) {
		return true;
	}
	else {
		return false;
	}
}

int main(void)
{
	bool risposta;
	risposta = armstrong(24678051);
	return;
}