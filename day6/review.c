#include<stdio.h>

//�Լ�: �����ڰ� ���������� ��� 
//������: ���α׷� �� �������ִ� ��� (+ - == >= )

//�Լ� 
//�ڷ��� �Լ� (){}

//wjsekfqkedms rkqt
void Absplus(int num1,int num2) {
	int num3 = 0 , num4 = 0, result = 0;
	if (num1 < 0) {
		num3 = num1 * (-1);  //num1 ���� �̸� ��� �κ�ȭ�Ͽ� num3 �� �ִ´� 
	}
	else
	{
		num3 = num1;
	}
	if (num2 < 0) {
		num4 = num2 * (-1);

	}
	else
	{
		num4 = num2;
	}

	
	
	
	
	
	result = num3 + num4;
	printf("%d\n", result);  // ���ϱ� ��ɰ� ��������� ����� ���ؼ� �ӽ÷� ����

}
// ���밪�� ���� ���밪�� (���)�� ����� ���

void AbsMinus(int num1, int num2) {//������ 2���� ���޹��� �Լ�

	int num3 = num1;    //��������: �ӽ� 
	int num4 = num2;
	int result = 0;
	
	
	
	
	if (num1 < 0) {
		num3 = num3 * (-1) ;  //num1 ���� �̸� ��� �κ�ȭ�Ͽ� num3 �� �ִ´� 
	}
	
	if (num2 < 0) {
		num4 = num4 * (-1) ;

	}
	
	 result = num3 - num4;
	printf("%d\n", result);


}
//���� 3�� �����ϴ�  �Լ� 
void Pulse3(int num1,int num2,int num3) {
	
	int result =  0;
	int result1 = 0;
	result = num1 + num2+num3;
	//result1 = result + num3+num4;
	//printf("%d\n"num1+num2+num3)
	
	printf("%d\n", result);


}




int main0() {
	//������Ʈ �����ϸ� �����Լ� ���� �����Ѵ� 
	Absplus( 3,  4);  //3+4    7
	Absplus(-3,  4);  //-3+4   =7
	Absplus( 3, -4);  //3+(-4) =7
	Absplus(-3, -4);  //|(-3)|+|(-4)|=7
	AbsMinus(3, 4);  //3+4    7
	AbsMinus(-3, 4);  //-3+4   =7
	AbsMinus(3, -4);  //3+(-4) =7
	AbsMinus(-3, -4);  //|(-3)|+|(-4)|=7

	Pulse3(4, 5, 6);
	Pulse3(1, 2, 3);
	
	
	
	
	
	return 0;
}