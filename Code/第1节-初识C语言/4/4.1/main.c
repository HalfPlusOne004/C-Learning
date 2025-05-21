#include <stdio.h>
#include <string.h> // strlen函数所需头文件

// C语言提供了char字符类型，表示字符
'a'; // 这是单引号引起来的字符常量
char ch = 'w'; // 将字符常量存入字符变量中

// 这种由双引号（Double Quote）引起来的一串字符称为字符串字面值（String Literal），简称字符串
"hello bit.\n"; 

// 下面代码，打印结果是什么？为什么？（突出'\0'的重要性）
int main()
{
    // 1、C语言中没有字符串类型，字符串需要存入字符数组中
    // 2、中括号中不填入数字，编译器会根据提供的初始化值自动推断数组的长度
    // 3、在初始化字符数组时，系统会自动在字符串的末尾添加'\0'
    char arr1[] = "bit";
    char arr2[] = {'b', 'i', 't'};
    char arr3[] = {'b', 'i', 't', '\0'};
    // %s是一个格式说明符，用于在字符串格式化函数中表示一个字符串
    // 例如，在printf函数中，%s用于输出一个字符串
    printf("%s\n", arr1); // 输出：bit
    printf("%s\n", arr2); // 输出：bit烫烫烫烫蘠it
    printf("%s\n", arr3); // 输出：bit

    //strlen是求字符串长度的一个函数，string length，返回一个整数，头文件<string.h>
    printf("%d\n", strlen(arr1)); // 输出：3
    printf("%d\n", strlen(arr2)); // 输出：15
    return 0;
}
// 结果：每次打印arr2时，打印结果会出现错误。这是因为arr2没有'\0'终止符，打印完arr2后会继续打印相邻内存空间的字符，直到遇到'\0'
