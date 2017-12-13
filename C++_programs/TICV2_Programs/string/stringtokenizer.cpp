#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char * l_str = (char *)malloc(100);
	strcpy(l_str,"Hai*how-are&you-I(am)fine!");
	char * l_delim = (char *)malloc(100);
	strcpy(l_delim,"*-&()!");
	char * tokenizedString= NULL;
	tokenizedString = strtok(l_str,l_delim);
	while(tokenizedString != NULL)
	{
		printf("\n::::%s::::",tokenizedString);
		tokenizedString = strtok(0,l_delim);
	}
	return 0;
}
