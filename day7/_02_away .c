#include<stdio.h>
#define SUBWAY_LENGTH 4

int main2() {

	int subway[4] = { 0,0,0,0 };  //컴퓨터은 0번부터 시작

	//1번 칸에 3명  
	subway[0] = 3;
	
	//2번 칸에 2명 

	subway[1] = 2;


	//3번 칸에 1명  
	subway[2] = 1;

	//4번 칸에 2명 
	
	subway[3] = 2;
	
	//3번칸 이 3명으로 추가로 탑승
	int subway3 = 1;
	
		
		subway[2] += 3;  //subway{3,2,4,2}
	
		int sum = 0;
	//각 칸에 인원과 전체 인원을 계산
		for (int i = 0; i < SUBWAY_LENGTH; i++)  // 4회정도을 반복을 한다 
		{
			printf("%d 은칸에는%d명\n", i+1, subway[i]);
			sum += subway[i];
		
		}
		printf("총인원은 %d명", sum);
	
	return 0;
}