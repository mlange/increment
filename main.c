#include <stdio.h>

int main(int argc, char *argv[])
{
    int ii = 0;

    while (ii++ < 100)
    {
	int jj = 0;

	printf("JJ: %d\n", jj++);
    }

    exit(0);
}

