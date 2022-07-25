/*Finding the mean of N positive numbers*/

#include <stdio.h>

int main()
{
    int array[100];
    int i, num;
    int sum=0;
    float average=0.00;
    
    
    printf("Enter how many numbers: \n");
    scanf("%d", &num);
    
    for(i=0; i<num; i++)
    {
        printf("[%d] Enter integer: ", i+1);
        scanf("%d", &array[i]);
        
        if(array[i]<0){
            
            printf("Invalid input. Try again.\n");
            i--;
            continue;
        }
    }

for(i=0; i<num; i++)
    {
        sum += array[i];
        average = sum/num;
    }

    printf("Average = %.2f", average);
    
    return 0;
}