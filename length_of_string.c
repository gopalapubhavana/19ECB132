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
/*
Choose one option from the following list ...

===============================================

1.Insert in Beginning
2.Insert at last
3.Delete from Beginning
4.Delete from last
5.Search
6.Show
7.Exit

Enter your choice?
1

Enter Item value5

Node inserted

*********Main Menu*********

Choose one option from the following list ...

===============================================

1.Insert in Beginning
2.Insert at last
3.Delete from Beginning
4.Delete from last
5.Search
6.Show
7.Exit

Enter your choice?
1

Enter Item value 6

Node inserted

*********Main Menu*********

Choose one option from the following list ...

===============================================

1.Insert in Beginning
2.Insert at last
3.Delete from Beginning
4.Delete from last
5.Search
6.Show
7.Exit

Enter your choice?
1

Enter Item value 7

Node inserted

*********Main Menu*********

Choose one option from the following list ...

===============================================

1.Insert in Beginning
2.Insert at last
3.Delete from Beginning
4.Delete from last
5.Search
6.Show
7.Exit

Enter your choice?
6

 printing values ... 
7
6
5

*********Main Menu*********

Choose one option from the following list ...

===============================================

1.Insert in Beginning
2.Insert at last
3.Delete from Beginning
4.Delete from last
5.Search
6.Show
7.Exit

Enter your choice?
6

 printing values ... 
7
6
5

*********Main Menu*********

Choose one option from the following list ...

===============================================

1.Insert in Beginning
2.Insert at last
3.Delete from Beginning
4.Delete from last
5.Search
6.Show
7.Exit

Enter your choice?
2

Enter value6

node inserted

*********Main Menu*********

Choose one option from the following list ...

===============================================

1.Insert in Beginning
2.Insert at last
3.Delete from Beginning
4.Delete from last
5.Search
6.Show
7.Exit

Enter your choice?

*/
