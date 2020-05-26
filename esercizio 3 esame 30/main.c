#include <math.h>

int *convolution3(const int *v, size_t lenv, const int k[3])
{
	if (v == NULL)
		return NULL;
	if (k == NULL)
		return NULL;

	
	int *c = malloc(sizeof(int)*lenv);

	int sum = 0;
	char flag = 0;

	for (size_t j = 0; j < lenv; j++) {
		for (size_t i = 0; i < 3; i++) {
			if (((j + 1 - i) >= lenv) || ((j + 1 - i) < 0)) {
				flag = 1;
				sum += 0 * k[i];
			}

			if (flag == 0) {
				sum += v[j + 1 - i] * k[i];
			}

			flag = 0;
		}
		c[j] = sum;
		sum = 0;
	}


	return c;
}





int main(void)
{
	int a[] = { 1, 2, 3, 4, 3, 2, 1 };
	int b[] = { -1, 2, -1 };
	size_t lunghezza = 7;

	int *ris = convolution3(a,lunghezza,b);
	return;
}