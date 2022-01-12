#include<stdio.h>
#include<string.h>
void encrypt(char password[], int key)
{
	int i;
	for(i=0;i<strlen(password);i++)
	{
		password[i]=password[i]-key;
	}
}
void main()
{
	char password[20];
	printf("Enter your password: ");
	gets(password);
	printf("Encrypted password is: ");
	encrypt(password,0XAED);
	puts(password);
}
