#if !defined DICTIONARY_C
#define DICTIONARY_C
#include <stdlib.h>

struct pair {
	char key[256];
	char value[256];
};

struct dictionary {
	size_t size;
	struct pair *data;
};

extern char *find(const struct dictionary *dict, const char *key);
#endif