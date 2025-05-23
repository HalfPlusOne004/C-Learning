//程序输出什么？
#include <stdio.h>
int main()
{
    printf("%d\n", strlen("abcdef")); // 6
    // \t和\62被解析成一个转义字符，8不在八进制里面，输出：14
    printf("%d\n", strlen("c:\test\628\test.c"));
    return 0;
}
