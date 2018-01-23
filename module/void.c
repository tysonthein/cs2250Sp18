#include <stdio.h>
//define funct
//the prototypes
void jolly(void);
void deny(void);
void woot(void);
void police(void);
void miss(void);
int main(void)
{
jolly();
jolly();
jolly();
deny();
woot();
police();
woot();
miss();
woot();
police();
woot();
miss();
return 0;
}

void jolly(void)
{
	printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
	printf("which nobody can deny!\n");
}
void police(void)
{
	printf("thats the sound of the police!\n");
}
void woot(void)
{
	printf("Woot Woot.\n");
}
void miss(void)
{
	printf("Thats the sound that i miss!\n");
}
