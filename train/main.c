#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s", argv[0]);	
	if (argc > 1)
		printf("%s", argv[1]);
}
