#include <stdio.h>

//声明来自外部的符号
extern int a;

void test()
{
	printf("test-->%d\n", a);
}

int main()
{
	//int a = 10;//这个局部变量的作用域在当前的大括号内，包括子大括号
	test();
	{
		//int a = 10;//这个局部变量的作用域在当前的大括号内
		printf("a=%d\n", a);
	}
	printf("a=%d\n", a);

	return 0;
}
