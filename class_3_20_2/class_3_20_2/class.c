#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 1000;
	    for (i = 1000; i <= 2000; i++)
	   {
		if (i % 4 == 0 && i % 100 != 0)
			printf("%d年是闰年\n", i);
		else if (i % 400 == 0)
			printf("%d年是闰年\n", i);
	   }

	 return 0;
}