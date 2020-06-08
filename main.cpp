#include "std.h"
#include "stdio.h"
//это учебная программа
 int main() 
 { 
   float a, b;
    printf("Input a: ") ;
    scanf ("%f", &a); 
	printf("Input b: ") ;
    scanf ("%f", &b); 
    printf(" sum a+b = %f ", a + b );
	printf(" raz a-b = %f ", a - b );
	printf(" proiz a*b = %f ", a * b );
        return 0;
 }