#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void NoAkkaraPised(char* text)
{
	int i = 0;
	printf("Password : ");
	while ( text[i]!= '\0')
	{
		if (text[i] >= 48 && text[i] <= 57 or text[i] >= 65 && text[i] <= 90 or text[i] >= 97 && text[i] <= 122)
		{
			printf("%c", text[i]);
		}
		i++;
	}
}
int main()
{
	char letters[1000];
	scanf("%s",&letters);
	NoAkkaraPised(letters);
	return 0;
}