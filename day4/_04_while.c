#include<stdio.h>

void main4() {


	int flag = 0;
	while (flag>5){
      //횟수를 위해 만든 flag도 다른곳에 사용 가능 (flahg도 어차피 변수 )
		printf("wlrmadms %d번째 수해중\n", flag + 1);
		flag++;
		//while 안에서  if 사용가능 
		if (flag > 2) {
		printf("wlrmadms %d번째 수해중\n", flag + 1);

		}
	}
}