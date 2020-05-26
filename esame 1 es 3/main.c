#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct person {
	char name[256];
	unsigned int age;
};


unsigned int count_teenagers(FILE *f)
{
	unsigned int count = 0, numero_persone = 0;
	
	fscanf(f, "%u", &numero_persone);
	struct person *persona_letta = malloc(sizeof(struct person) * numero_persone);
	

	while (numero_persone > 0) {
		fscanf(f, "%s %u", &persona_letta->name, &persona_letta->age);
		if (persona_letta->age >= 13 && persona_letta->age <= 19) {
			count++;
		}
		numero_persone--;
	}
	free(persona_letta);

	return count;
}

int main(void) 
{
	FILE *f = fopen("people1.txt", "rt");
	count_teenagers(f);
	return 0;
}

