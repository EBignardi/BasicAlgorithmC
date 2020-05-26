#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


struct person {
	char name[256];
	unsigned int age;
};

void person_read(FILE *f, struct person* pp)
{

	fscanf(f, "%s %u", pp->name, &pp->age);
	return;
}

int main(void)
{
	struct person persona = {0,0};
	FILE *f = fopen("person1.txt", "rt");
	person_read(f, &persona);
	return 0;
}
