#include<stdio.h>
#include<string.h>
int main()
{
	char str [20];
	int i,length;
    int s=0;
    printf("enter a string");
    scanf("%s",string1);
    length = strlen(string1);
	for(i=0;i<length;i++)
	{
		if(string1[i]1 = string1[length-i-1])
		{
			s=1;
			break;
		}
	}
	if(s)
	{
		printf("%s is not a palindrome",string1);
	}
	{
		printf("%s is a palindrome",string1);
	}
	return 0;
	}
}



