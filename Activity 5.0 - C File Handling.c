#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[100];
   int i, num;

   printf("Input how many lines to be appended: ");
   scanf("%d", &num);

   FILE *fptr;
   fptr = (fopen("C:\\text.txt", "w"));
   if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }

   for(i = 0; i < num; ++i)
   {
     
      scanf("%s", name);
   }

   fclose(fptr);
   return 0;
}