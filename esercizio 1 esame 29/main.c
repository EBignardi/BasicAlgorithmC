#include <stdbool.h>


bool crescente(unsigned int x)
{
	unsigned int a = x, count1=0,count2=0;
	/*conta da quante cifre e' composto il numero*/
	while (a > 0) {
		a /= 10;
		count1++;
	}
	count2 = count1;

	int *b = malloc(sizeof(char)*count1);
	while (count1 > 0) {
		b[count1 - 1] = x % 10;
		x /= 10;
		count1--;
	}

	for (int i = 0; i < count2 - 1; i++) {
		if (b[i] < b[i + 1]) {
			continue;
		}
		else
			return false;
	}

	return true;
}



int main(void)
{
	bool ris = crescente(67);
	return 0;
}