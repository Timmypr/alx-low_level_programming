#include <stdio.h>
#include <stdlib.h>

int main ( )
{
	FILE * fp;

	fp = fopen ("file.txt", "w+");
	fprint (fp, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 59);
	fclose(fp);
	return(1);
}
