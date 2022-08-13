#include<stdio.h>


int fuction3(int* p_num) {
	
	int num = 3333;
	p_num = &num;
	return ;

}

int fuction4(int num) {
	printf("%d\n");
	return ;

}





int main5() {
 // 포인터 :c언어 사용하는 이유
	int num1 = 0;
	int* (p_num)();
	p_num = fuction3;
	p_num();
	fuction3(p_num); // num 위치을 지정하고 
	fuction4 (num1);  // 위치를 넘겨서 
	return 0;



}


