//变量输入：如何让程序读入用户输入的数字（scanf）
#include <stdio.h>

int  main()
{
int a = 0;
int b = 0;

	//scanf("%d %d", &a, &b);//正常输入情况下，运行后输入1  2  输出1   2 
	//scanf("%d,%d", &a, &b);//这种情况下输入 1,2  输出 1 2 
	 //scanf("%d %d\n", &a, &b)； //这里添加\n 的情况下  输入 1  2后 还要随便输入一个东西 然后回车才能输出 1  2  
	 //scanf("price%d %d\n", &a, &b)；//这是出错的代码  scanf一定是要输入的东西。 这里就要输入 price  1  2  会输出1 2  
	printf("%d %d\n", a, b);
	 
	return 0;
	
}

//常量vs变量，不变的是常量。
#include <stdio.h>

int  main()
{
	
	int amount  = 100;
	//const int AMOUNT = 100;//const是一个修饰符，加在int的前面，用来给这个变量加上一个const（不变的）的属性。这个const的属性表示这个变量的值一旦初始化，就不能再修改了。
	//一般用const 定义的变量 用大写 
	int price = 0;
	 
	
	printf("请输入金额(元):");
	scanf("%d",&price);
	
	printf("请输入票面(元):");
	scanf("%d",&amount);
	
	int change = amount - price;//如果你试图对常量做修改，把它放在赋值运算符的左边，就会被编译器发现，指出为一个错误。
//（图片底部黑色条内文字：用来讲这个变量不能被修改）
	
	printf("找您%d元。\n",change);
	
	return 0;
	
}
