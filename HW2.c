#include <stdio.h>
int main() {
    int x ;
    int y ;
   //read two numbers
    scanf("%d %d" ,&x ,&y);
    printf("Sum of two numbers: %d\n" , x + y);
    printf("Difference between two numbers; %d\n" , x - y);
    printf("Product of two numbers:%d\n" , x * y);
    printf("Quotient of two numbers: %d\n" , x / y);
    printf("Remainder of two numbers: %d\n" ,x % y);
    return 0;
}