#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	int i,c=0;
	printf("Enter Sentence:");gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	if(str[i]!=' ')
		{
			c++;
		}
	}
	printf("the number of characters is provided sentence is %d",c);
	getch();	
}
