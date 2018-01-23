#include <stdio.h>
int main(void)
{
	int ch;
	printf("please enter a integer.\n");
	scanf("%d", &ch); /*user inputs a char*/
	printf("the character for %d is %c.\n",ch,ch);

	return 0;
}
