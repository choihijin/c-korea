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
 // ������ :c��� ����ϴ� ����
	int num1 = 0;
	int* (p_num)();
	p_num = fuction3;
	p_num();
	fuction3(p_num); // num ��ġ�� �����ϰ� 
	fuction4 (num1);  // ��ġ�� �Ѱܼ� 
	return 0;



}


