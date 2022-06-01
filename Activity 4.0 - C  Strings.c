#include<stdio.h>
#include<string.h>
 
int main()
{
    char name[255];
    int  i, vowels=0, consonants=0;
   printf("Input a sentence: ");
   gets(name);
   i=0;
    while(name[i]!='\0')
    {
        if(name[i]=='a' ||name[i]=='e' ||name[i]=='i' ||name[i]=='o' ||name[i]=='u')
            name[i]=name[i]-32;
        i++;
    }
    printf("String converted:\n");
    puts(name);
    
    int length = strlen(name);
    printf("String Length: %d\n", length);
    
    for(i=0;name[i];i++)  
    {
    	if((name[i]>=65 && name[i]<=90)|| (name[i]>=97 && name[i]<=122))
    	{
		
            if(name[i]=='a'|| name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O' ||name[i]=='U')
		      vowels++;
            else
             consonants++;
        }
 
 	}
 	
     
    printf("Vowels = %d",vowels);
    printf("\nConsonants = %d",consonants);
    
    return 0;
}

