#include <stdio.h>
#include <string.h>
 
int main()
{
  	char string[100];
  	int i, len;
 
  	printf("Enter any string: ");
  	gets(string);
  	
  	len = strlen(string);
  	printf("\nReverse order word\n"); 	   	
  	for(i = len - 1; i >= 0; i--)
	{
		if(string[i] == ' ')
		{
			string[i] = '\0';
			printf("%s ", &(string[i]) + 1);	
		} 
	}
	printf("%s", string);
	
  	return 0;
}