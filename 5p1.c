#include<stdio.h>
main()
{
	char ch;
	int b=0,t=0;
	while ((ch=getchar())!=EOF)
	{
		if (ch=='\t')
		{
			t=t+1;
		}
		if (ch==' ')
		{
			b=b+1;
		}
		if (ch=='$')
		{
			break;
		}
	}
printf("%d\n%d\n",t,b);
getch();
}
