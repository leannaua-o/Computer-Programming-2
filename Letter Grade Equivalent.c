/*Create a program that accepts an integer and converts it to the appropriate letter grade.
The input should be greater than 0 but less than or equal to 100.*/

#include <stdio.h>

int main ()

{
    int grade;
    
    printf("Enter Grade: ");
    scanf("%d", &grade);
    
    if((grade>=92) && (grade<=100)){
        
        printf("Your letter grade is A");
        
    }else if((grade>=84) && (grade<=91)){
        
        printf("Your letter grade is A-");
        
    }else if((grade>=76) && (grade<=83)){
        
        printf("Your letter grade is B");
        
    }else if((grade>=68) && (grade<=75)){
        
        printf("Your letter grade is B-");

    }else if((grade>=60) && (grade<=67)){
        
        printf("Your letter grade is C");
        
    }else if((grade>=50) && (grade<=59)){
        
        printf("Your letter grade is D");
        
    }else if((grade<=50) && (grade>0)){
        
        printf("Your letter grade is F");
    
    }else{
        printf("Invalid Input");
    }
    
    return 0;
    
}