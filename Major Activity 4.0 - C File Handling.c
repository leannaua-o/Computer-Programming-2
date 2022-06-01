#include <stdio.h>
#include <stdlib.h>
int main()
{
   char name[100];
   int a, b, c, d=0, i, num;
   long double id;
   float ave=0;

   printf("Data Inside file: ");
   scanf("%d", &num);

   FILE *fptr;
   fptr = (fopen("C:\\studentgrade.txt", "w"));
   if(fptr == NULL)
   {
       printf("Error");
       exit(1);
   }

   for(i = 0; i < num; ++i)
   {
      printf("Student Name: ", i+1);
      scanf("%s", name);

      printf("Student ID Number: ");
      scanf("%Lf", &id);
      
      printf("Math Grade: ");
      scanf("%d", &a);
      
      printf("Science Grade: ");
      scanf("%d", &b);
      
      printf("English Grade: ");
      scanf("%d", &c);
      
      d = a+b+c;
      
      printf("Total Grade: %d", d);
      
      ave = d/3;
      
      printf("\nGrade Average: %.2f", ave);
      
      

      fprintf(fptr,"\nStudent Name: %s \nStudent ID Number: %Lf \nMath Grade: %d \nScience Grade: %d \nEnglish Grade: %d \nTotal Grade: %d \nGrade Average: %.2f\n", name, id, a, b, c, d,ave);
   }

   fclose(fptr);
   return 0;
}