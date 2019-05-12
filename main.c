#include "IT8951.h"

int main (int argc, char *argv[])
{
	if(IT8951_Init())
	{
		printf("IT8951_Init error \n");
		return 1;
	}
	
	if (argc != 2)
	{
		printf("Error: No image path specified.\n");
		exit(1);
	}

	IT8951_BMP_Example(0,0,argv[1]);
	IT8951_Cancel();

	return 0;
}


