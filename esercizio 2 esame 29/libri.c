#include "libri.h"

bool libro_scrivi(const struct libro *p, FILE *f)
{
	if (f == NULL)
		return false;

	while()
	fwrite(p->titolo, sizeof(p->titolo), 1, f);

	fwrite(p->anni_ristampe, sizeof(uint16_t), 1, f);

	return true;
}