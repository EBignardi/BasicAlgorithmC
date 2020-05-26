#include <stdbool.h>
#include <stdio.h>
#include <stdio.h>

bool is_gif(const char *filename)
{
	if(filename==NULL)
		return false;

	FILE *f = fopen(filename, "rb");
	if (f == NULL)
		return false;

	char s1[] = "GIF87a";
	char s2[] = "GIF89a";
	char buf[7];

	size_t b = fread(buf, 1, 6, f);
	buf[6] = 0;
	
	if (b != 6) {
		fclose(f);
		return false;
	}

	if (strcmp(s1, buf) == 0) {
		fclose(f);
		return true;
	}

	if (strcmp(s2, buf) == 0) {
		fclose(f);
		return true;
	}

	fclose(f);
	return false;
}

