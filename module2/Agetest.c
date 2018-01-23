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
	
	if(age >= 21)
	{
	

	printf("you can buy beer\n");
	}
	else if(age >= 18 && age < 21)
	{
		printf("you can buy ciggarretes\n");
	}
	else
	{
	printf("you are %i. wait, you are not old enough\n",age);
	}

	return 0;
}
