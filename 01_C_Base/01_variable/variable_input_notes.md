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
