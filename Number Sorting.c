/*Create a program that accepts 10 positive integer and sort these in descending order (highest to lowest)*/

#include <stdio.h>

int main()
{
    int array[20];
    int i, j, a;
    
    
     for(i=0; i<10; i++)
    {
        
        printf("[%d] Input number: ", i+1);
        scanf("%d",&array[i]);
        
        if(array[i]<0){
            
            printf("This is an invalid input. Try again.\n");
            i--;
            continue;
        }
    }
 
    for (i = 0; i < 10; ++i){
        
        for (j = i + 1; j < 10; ++j){
            
            if (array[i] < array[j])
            {
                a = array[i];
                array[i] = array[j];
                array[j] = a;
                
            }
            
        }
    }
 
        printf("\nSorted list: ");
 
        for (i = 0; i < 10; ++i)
        {
            printf("%d, ", array[i]);
        }
 
    return 0;
}