//C是有类型的语言    ·C语言的变量，必须:·在使用前定义，并且·确定类型
//C以后的语言向两个方向发展:·C++/Java更强调类型，对类型的检查更严格	JavaScript、Python、PHP不看重类型，甚至不需要事先定义
/*类型有何不同
类型名称:int、long、double·
输入输出时的格式化:%d、%ld、%lf
所表达的数的范围:char<short<int<float<double
内存中所占据的大小:1个字节到16个字节
内存中的表达形式:二进制数(补码)、编码*/
#include <stdio.h>

int main(){
	int a;
	a = 6;
	printf("sizeof(double)=%ld\n",sizeof(long double));	//double占据8个字节   long double 占据16个字节。 
	printf("sizeof(a)=%ld\n",sizeof(a));
	/*sizeof
·是静态运算符，它的结果在编译时刻就决定了·不要在sizeof的括号里做运算，这些运算不会做的*/
	return 0;
}


//eg:sizeof(a+1.0)   会输出8   因为 1.0是double, a 是 整数， 中间有加号所以sizeof 会把括号内当作一个double 
