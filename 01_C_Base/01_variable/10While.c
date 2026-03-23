//While循环
//如果我们把while翻译作“当”，那么一个while循环的意思就是:当条件满足时，不断地重复循环体内的语句。
//循环执行之前判断是否继续循环，所以有可能循环一次也没有被执行;条件成立是循环继续的条件。
#include <stdio.h>
int main()
{
	/*int x;
	int n=0;
	scanf("%d",&x);
	n++;
	x /= 10;
	while ( x>0 ){
		n++;
		x /=10;
		
	}
	printf("%d\n",n);*/
	//再想想  能否优化代码
	
	int x;
	int n =0;
	scanf("%d",&x);
	//在程序适当的位置插入printf来输出变量的内容 
	while ( x>0){
		n++;
		x /=10;
		printf("x=%d,n=%d\n",x,n);
	}
	 printf("%d\n",n);

	return 0;
	
	
}
 
