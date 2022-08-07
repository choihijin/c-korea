#include<stdio.h>

int g_num = 1; // 전역변수{}만들어지 변수가 아님 {}벗어날 일이 없음


int fuction1() {
	int num = 333;

	
	
	
	return num ;

}

int fuction2() {
	int num2 = 0;
	//333을 출련
	printf("%d\n",num2);
	return num2;

}


int main4() {
	int num4 = 0;
	fuction1();
	fuction2(num4);
	num4= fuction1();

	
	
	
	return 0;
}