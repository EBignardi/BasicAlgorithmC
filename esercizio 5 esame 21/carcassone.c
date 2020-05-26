#include "carcassone.h"

bool controlla_casella(const struct casella *c, const struct casella *tabellone, size_t dim)
{
	if (dim == 0)
		return false;
	
	size_t i;
	struct casella temp;
	//controllo se il posto e libero
	for (i=0; i < dim; i++) {
		temp = tabellone[i];
		if ((c->x == temp.x) && (c->y == temp.y)) {
			return false;
		}
	}

	//controllo se la casella e vicina a un altra
	for (i = 0; i < dim; i++) {
		temp = tabellone[i];
		if (c->x == temp.x + 1)
			break;
		if (c->x == temp.x - 1)
			break;
		if (c->y == temp.y + 1)
			break;
		if (c->y == temp.y - 1)
			break;
		if (i == dim - 1)
			return false;
	}

	return false;
}