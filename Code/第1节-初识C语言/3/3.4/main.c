#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//写一个代码，计算2个整数的和
//scanf 是一个输入函数
//printf是一个输出函数
int main()
{
    int num1 = 0;
    // int num1 = 0;//同一范围内，定义的变量不能重名
    int num2 = 0;//初始化。不初始化：1、编译器会警告。2、会默认往变量存入一个随机值
    int sum = 0;

    // 输入2个整数
    printf("输入两个操作数:>");
    scanf("%d %d", &num1, &num2);

    // 求和
    sum = num1 + num2;

    // 输出
    printf("sum = %d\n", sum);
    return 0;
}
