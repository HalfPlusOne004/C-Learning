#include <stdio.h>
int main()
{
    // %d 是C语言中的格式化输出符号，用于将整数值按照十进制格式输出到标准输出流（通常是控制台）
    // %zu 是C语言中的一种格式说明符，用于输出 size_t 类型的无符号整数
    // sizeof 是一个关键字，它是一个编译时运算符，用于判断变量或数据类型的字节大小
    printf("%d\n", sizeof(char));		// 1（byte）
    printf("%d\n", sizeof(short));		// 2（byte）
    printf("%d\n", sizeof(int));		// 4
    printf("%d\n", sizeof(long));		// 4 C语言规定：sizeof(long) >= sizeof(int)
    printf("%zu\n", sizeof(long long));	// 4
    printf("%zu\n", sizeof(float));		// 8
    printf("%zu\n", sizeof(double));	// 4
    printf("%zu\n", sizeof(long double));// 8
    return 0;
}
