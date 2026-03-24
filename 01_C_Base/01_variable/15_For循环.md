//for 循环   写一个程序让用户输入n，然后计算输出n！
 
#include <stdio.h>
//for循环 
int main (){
	int n;
	
	scanf("%d",&n);
	int fact = 1;
	
	int i = 1;
	/*for ( i=1; i<=n;  i++){
//	 	  初始;  循环;   循环每轮要做的事情; 
		fact *= i;
		}
	print("%d!=%d\n",n,fact); */

	//修改代码
	for (i=n; i>=2; )
	printf("%d! =%d\n", n, fact);
	
	/*while 循环 
	int n;
	
	scanf("%d",&n);
	int fact =1;
	
	int i =1;
	while ( i<=n){
		fact * =i;
		i++;
	*/
	
	return 0;
} 
