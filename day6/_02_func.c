#include<stdio.h>

//Pluse ������ 2���� ���Ѵ�  

int pluse(int num1, int num2) {
	int a = 0;
	a = num1 + num2;

	return a;

}




//minus ������ 2���� ����
int Minus(int num1,int num2) {
	int a = 0;
	a = num1 - num2;
	return a;

}



//mul  ������ 2���� ���ϱ� 

int mul(int num1,int num2 ) {
	int a = 0;
	a = num1 * num2;
	return a;

}

//div ������ 2���� ������

  double Div(int num1, int num2) {
	double result = 0;
	 result = (double) num1 / num2;
	return result;



}

//float  �Ǽ� 






int main3()
{
	
	int Pluse_result = 0;
	int Minuse_result = 0;
	int mul_result = 0;
	int div_result = 0;
	
	//�Լ��� ���
	
	 Pluse_result = pluse(2, 3);
	 Minuse_result = Minus(8, 4);
	 mul_result = mul(2, 4);
	 div_result= Div(2,10 );




	//
	
	
	
	
	
	printf("%d\n", Pluse_result);
	printf("%d\n", Minuse_result);
	printf("%d\n", mul_result);
	printf("%l f\n", div_result);
	
	
	
	
	
	
	
	
	return 0;









}