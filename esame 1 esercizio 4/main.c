unsigned int inverti(unsigned int i)
{
	unsigned int numero_invertito = 0;

	while (i > 0)
	{
		numero_invertito *= 10;
		numero_invertito += i % 10;
		i /= 10;
	}

	return numero_invertito;
}



int main(void)
{
	unsigned int numero = 123, numero_invertito;
	numero_invertito = inverti(numero);
	return 0;
}