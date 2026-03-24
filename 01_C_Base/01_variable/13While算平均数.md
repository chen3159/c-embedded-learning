//算平均数, 让用户输入一系列的正整数，最后输入-I表示输入结束，然后程序计算出这些数字的平均数，输出输入的数字的个数和平均数
//变量->算法->流程图->程序

#include <stdio.h>

int main (){
	
	int number;
	int sum =0;
	int count =0;
	//do-while 循环 
/*	do{
	
	scanf("%d",&sumber);
	if ( number != -1){
		sum += number;
		count ++;
		}	
	}	while ( number !=-1);*/

//while循环, 
	scanf("%d",&sumber);
	while( number != -1){
		sum += number;
		count ++;
		scanf("%d",&number);//循环里需要再读一下判断变量，如果不读会卡死循环。 
		}	
		
	
	printf("%f",1.0*sum/count);

	return 0;
} 
