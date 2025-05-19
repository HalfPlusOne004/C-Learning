#include <stdio.h> // std - standard；i - input；o - output

// 标准的主函数的写法
int main()
{
	printf("Hello World!\n");//printf是一个库函数，用来打印数据到命令行窗口
	return 0;//因为main函数前面的int是定义返回值类型，int是整数型，所以main函数最后一定要返回一个整数。按照C语言约定成俗的习惯，正常运行返回0，有异常返回非0
}

// 古老的写法-不推荐
// void main() {}
