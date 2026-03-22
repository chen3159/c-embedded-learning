//switch-case 语句
 //switch语句可以看作是一种基于计算的跳转，
//计算控制表达式的值后，程序会跳转到相匹配的case(分支标号)处。
//分支标号只是说明switch内部位置的路标，
//在执行完分支中的最后一条语句后，
//如果后面没有break，就会顺序执行到下面的case里去，直到遇到一个break，或者switch结束为止。


#include <stdio.h>

int main ()
{
	int type;
	
	scanf("%d",&type);
	
	switch (type/*控制表达式 */){//控制表达式只能是整数型的结果 
		case 1/*常数-可以是常熟也可以是常数计算的表达式*/:
			printf("你好");
			break;
		case 1+1:
			printf("早上好");
			break;
		case 3:
			printf("晚上好");
//			break;
		case 4:
			printf("再见");
			break;
		default:
			printf("啊,什么啊?");
			

	}





	
/*	if ( type ==1 )
		printf("你好");
	else if ( type ==2)
		printf("早上好");
	else if (type ==3)
		printf("再见");
	else
		printf("啊，什么啊？");
	*/
	
	
	return 0;
}

