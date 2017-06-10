#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int main(int argc, char *argv[])
{
	int i;
	int found = 0;
	char* target = "monkey apple banana jenny";
	printf ("%d\n", argc);	
	for (i=1; i < argc; i++)
	{
		if (strstr(target, argv[i]) != NULL)
				found++;
	}
	printf("%d\n", found);

	if ( found == argc-1) 
	{
		printf("%s\n", target);
	}
     return found;
}
