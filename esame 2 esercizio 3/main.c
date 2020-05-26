#include <math.h>

double calcola_seno(double x)
{
	int denominatore = 0;
	double seno = 0;
	for (size_t n = 5; n > 0 ; n--) {
		/*fattoriale*/
		int i = 1;
		denominatore = (2 * n + 1);
		int a = denominatore;
		do {
			denominatore *= (2 * n + 1) - i;
			i++;
			a--;
		} while (a != 1);

		seno += (pow(-1, n) / denominatore) * (pow(x, 2 * n + 1));
	}
	
	return seno;
}



int main(void) {
	double x = 3.14159265 / 4.0;
	double y;

	y = calcola_seno(x);
}
