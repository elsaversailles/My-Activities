#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int *data;
	const int datacount = 50;
	data = malloc(sizeof(int) * datacount);
	if (!data) {
		perror("Memory Issue");
	}
	memset(data, 0, sizeof(int)*datacount);
	
	char n[datacount];
	int i;
	for (i = 0; n[i] != '\0'; ++i);


	
	printf("Hey! \n");
	printf("\n");
	printf("What's your name? ");
	fgets(n, sizeof(n), stdin);
	printf("\n");
	printf("Hey %s", n);
	return 0;
}
