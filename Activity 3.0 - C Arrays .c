/*Create a Program that adds all the array elements and prints the sum

+ Array size limit is 5 to 10 only.
+ The user must input the array size
+ The user must input the elements.*/

#include <stdio.h>

int main()
{
    int array[10];
    int i, num;
    int sum=0;
    
    
    printf("Enter the size of the Array: ");
    scanf("%d", &num);
    
    for(i=0; i<num; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &array[i]);
    }

for(i=0; i<num; i++)
    {
        sum += array[i];
    }

    printf("Sum of all array elements = %d", sum);
    
    return 0;
}