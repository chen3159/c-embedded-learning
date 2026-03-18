//浮点数
#include <stdio.h>

int  main()
{
	printf("请分别输入身高的英尺和英寸,"
			"如输入\"5 7\"表示5英尺7英尺:");
	//int foot;
	//int inch;//我们这里定义的是int 整数 下面inch除以12 得到的应该是小数，结果计算机给我们得到的结果是0 因为他把小数扔掉了。 
	
	double foot;
双英寸；//“double”意为“双”，本是“双精度浮点数”的首单词，人们用它来表示浮点数类型。除了double，还有float（意即浮点！）表示单精度浮点数。
	
	
	//scanf("%d %d", &foot,&inch);
	scanf("%lf %lf", &foot,&inch);
	
	printf("身高是%f米. \n",
		(foot + inch / 12)* 0.3048);
// (英尺 + 英寸 / 12.0) * 0.3048);

	
	return 0;
	
}
