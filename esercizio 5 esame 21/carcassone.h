#if !defined CARCASSONE_C
#define CARCASSONE_C
#include <stdbool.h>
#include <stdlib.h>
struct casella {
	int x, y;
	char lati[4]; // 0: nord, 1: est, 2: sud, 3: ovest
};

extern bool controlla_casella(const struct casella *c, const struct casella *tabellone, size_t dim);
#endif