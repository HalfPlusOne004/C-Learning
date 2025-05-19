#include <stdio.h>
//括号中的MALE,FEMALE,SECRET是枚举常量
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
int main()
{
	//字面常量演示
	3.14;//字面常量
	1000;//字面常量

	//const 修饰的常变量
	const float pai = 3.14f; //这里的pai是const修饰的常变量
	//pai = 5.14;//是不能直接修改的！
    const int n = 10;
	//int arr[n] = {0};//这里在定义数组，填入n会报错，编译器不认为n是常量

	//#define的标识符常量演示
#define MAX 100
	printf("max = %d\n", MAX);

	//枚举常量演示
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	//注：枚举常量的默认是从0开始，依次向下递增1的
	return 0;
}
