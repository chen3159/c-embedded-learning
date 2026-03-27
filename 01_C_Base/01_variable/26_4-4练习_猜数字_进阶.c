
#include <stdio.h>
int main(){
	// 1. 定义变量：裁判的“记事本”
	int number, n;		// number: 正确答案；n: 允许挑战的最大次数
	int inp;			// inp: 玩家当前猜的数字
	int finished = 0;		// 【核心状态】标志位。0表示比赛进行中，1表示比赛结束
	int cnt =0;				// 计数器：记录玩家已经猜了几次
	
	// 2. 设定规则
    // 这里是由你（或者第一个人）输入正确答案和限制次数
	scanf ("%d %d", &number, &n);
	
	// 3. 进入循环：比赛正式开始
	do{
		//输入数字.猜一猜 
		scanf("%d",&inp);
		cnt++;			//玩家每输入一次，就记一次
		
		// --- 逻辑判断 A：玩家违规或主动放弃 ---
		if( inp <0 ){
			printf("Game Over\n");	// 输入负数，直接判输
			finished =1;			// 掰下开关，结束比赛
			
			
		}else if ( inp > number){
			printf ("Too big\n");// 给出提示 太大了 
			
			
		}else if( inp < number){
			printf("Too small\n");// 给出提示 太小了 
			
			
		}else{
			if ( cnt == 1){			//根据猜的次数给评价 
				printf("Bingo!\n");// 第一次就中 
				
			}else if ( cnt <=3 ){	//三次以内 
				printf("Lucky You!\n");
			}else {					//三次以内 但n次以内 
				printf("Good Guess!\n");
			}
			finished =1;		//猜中 结束
			 
		}
		
		// --- 逻辑判断 E：最后通牒（次数限制） ---
        // 这里的逻辑很巧妙：即便上面没猜中，但如果次数用完了...
17		if ( cnt==n ){
			if ( !finished ){		// 如果此时 finished 还是 0（说明最后一次也没猜对）
				printf("Game Over\n");
				finished =1;		// 强行结束
			}
		}
	} while ( !finished );		//只要 finished 是 0，就继续循环
								/*finished 我们给的值是1 finished是1的时候 就游戏结束了， 我们输入了一个while（！finished ）这句的根本意思是finished的值为0 ，他与我们起初设定的finished的值是 ！的关系*/
							/*while 语句像个贪吃蛇，它只看括号里是不是 1（真）。如果是 1，它就继续吃（循环）；如果是 0，它就吐出来（退出）。*/
	return 0;
}
