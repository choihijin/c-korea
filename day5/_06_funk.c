#include<stdio.h>

//sum
void sum(int num1,int num2) {
	int result0 = num1 + num2;
	printf("%d\n", result0);
}
//SUB

void sub(int num1, int num2) {
	int result1 = num1 - num2;
	printf("%d \n", result1);


}
//mul
void mul(int num1, int num2) {
	int result2 = num1 * num2;
	printf("%d \n", result2);


}
//Div
void Div(int num1, int num2) {
	int result3 = num1 / num2;
	printf("%d \n", result3);


}

//������ 2���� �޾Ƽ����� ���밪 ����� ���ϱ� (���밪�� ���� �÷����� �ٲ�)

void a(int num1, int num2) {
	if(num1>0){
	
		int result4 = -num1 + num2;
		printf("%d \n", result4);
	
	}
	else(num2)
	}
	
	
	 

	
	


//
void b(int num1, int num2) {
	int result5 = -num1 + num2;
	
	
	printf("%d \n", result5);


}




//���ϱ� ���� ��� ���ϱ� ��� 
//c��� ������ �� main()�Լ��̴� 




int main() 
{

	sum(2, 2);
	sub(2, 2);
	mul(2, 2);
	Div(2, 2);
	a (-3, 2);
	b (1 ,-6);

	
	
	return;
}