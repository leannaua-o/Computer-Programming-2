/*Create a program that accepts 10 positive integer and prints out the smallest and largest number(s) in the last*/

#include <stdio.h>


int main()
{
    int array[20];
    int i, num, min, max;
    
    
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
 
    min=max=array[0];
    
    for(i=1; i<10; i++){
        
        if(min>array[i])
        min=array[i];
        if(max<array[i])
		max=array[i];
    }
    
    printf("Min : %d\nMax: %d", min, max);
 
    return 0;
}