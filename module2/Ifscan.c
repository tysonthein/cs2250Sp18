#include<stdio.h>
//main
int main(void)
{
	int age;
	printf("how old are you?\n");//capture info from user

	//input age

	scanf("%d",&age);

	//conditional
	
	printf("you are %d\n", age);
	
	if(age > 20)
	{
	

	printf("you can buy beer\n");
	}
	else
	{
	printf("you are %i. wait, you are not old enough\n");
	}

	return 0;
}
