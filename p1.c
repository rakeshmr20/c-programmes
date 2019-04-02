#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
	int a=5,b=3,c=1;
	if (a<b)
	{
		if (a<c)
		{
			printf("%d ", a);
		}
		else if (b<a)
		{
			if (b<c)
			{
				printf("%d ", b);
			}
		}
		else
			printf("%d ", c);
	}
	
	return 0;
}