#include <stdio.h>

int main(){

int a;
int b;
int sum;
int diff;
int prod;
int div;
int rem;

printf("please type 2 numbers:\n");
scanf("%d %d", &a, &b);
printf("you chose %d and %d.\n", a, b);
sum = a + b;
printf("the sum of the numbers is %d\n", sum);
diff = a - b;
printf("the difference of the numbers is %d\n", diff);
prod = a * b;
printf("the product of the 2 numbers is %d\n", prod);
div = a / b;
printf("the quotient of the 2 numbers is %d\n", div );
rem = a % b;
printf("the remainder of the 2 numbers is %d\n",rem);

printf("thank you for participating!");

return 0;
}
