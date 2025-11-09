#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char input[100];
	FILE*fp;
	
	fp=fopen ("sample.txt", "r");
	if(fp==NULL)
	{
		printf("Failed to open file!\n");
		return -1;
	}
	//fprintf
	#if 0
	while( (c=fgetc(fp)) != EOF)
	{
		putchar(c);
	}
	#else 
	while (fgets(input, 100, fp) > 0)
	{
		printf("%s", input);
	}
	#endif
//fclose		
	fclose(fp);
	return 0;
}
