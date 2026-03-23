//do-while循环
/*do
	{
	<循环体语句>
	}while(<循环条件>); 
	*/
	
#include <stdio.h>
int main()
{	
	int x;
	int n =0;
	scanf("%d",&x);
	do{
		x /=10;
		n ++;
	}while ( x>0);//while 后面要有分号 
	
	 printf("%d\n",n);

	return 0;
	
	
}
  
