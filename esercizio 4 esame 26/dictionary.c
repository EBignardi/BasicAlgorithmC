#include "dictionary.h"

char *find(const struct dictionary *dict, const char *key)
{
	if (dict == NULL)
		return NULL;
	if (key == NULL)
		return NULL;

	size_t i = dict->size;

	for (i; i > 0; i--) {
		if(dict->data == key)
			return 
	}

	return;
}