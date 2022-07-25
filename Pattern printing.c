/*Create a program that will accept an integer greater than 0 (N) and print out N lines size of
asterisk (*) into a pattern*/

#include <stdio.h>

int main(){
    
    int i, j, num;
    
    printf("Enter integer: ");
    scanf("%d", &num);
    
    for(i=1; i<=num; i++){
        
        for(j=1; j<=i; j++){
            
            printf("* ");
        }
        
        printf("\n");
    }
    
    return 0;
    
}

