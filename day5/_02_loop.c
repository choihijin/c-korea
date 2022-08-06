#include<stdio.h>

void main2() {
	//반복문 :whil for 
	//반복문을 제어하는 명령어:berak,conitue
	//break :반복문 즉시종료 
	//conitue :반복문을 처음으로 돌아가기 ()1회성 취소
	int flag = 0;
	while (1)
	{
		flag++;
		printf("%d\n", flag);
		if (flag==500)// flag 가 500 일때 break 으로 하여 강제종료
		{
			break; // if 에 같히 쓴다  
		}
	}


}