#include<stdio.h>

int main()
{
	printf("Hello World");
	int Foo = 0;
	for (int i = 0; i < 100000000; i += 1)
	{
		Foo += i;
		if (Foo > 2048)
		{
			Foo /= 2;
		}
	}
	printf("%d", Foo);
	return 0;
}