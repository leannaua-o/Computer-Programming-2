#include <math.h>
#include <stdio.h>

int main() {
    double b, x, result;
    printf("Enter X: ");
    scanf("%lf", &b);
    printf("Enter Y: ");
    scanf("%lf", &x);

  
    result = pow(b, x);

    printf("%.1lf^%.1lf = %.1lf", b, x, result);
    
    return 0;

}