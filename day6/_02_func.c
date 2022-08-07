#include<stdio.h>

//Pluse 숫자을 2개을 더한다  

int pluse(int num1, int num2) {
	int a = 0;
	a = num1 + num2;

	return a;

}




//minus 숫자을 2개을 빼기
int Minus(int num1,int num2) {
	int a = 0;
	a = num1 - num2;
	return a;

}



//mul  숫자을 2개을 곱하기 

int mul(int num1,int num2 ) {
	int a = 0;
	a = num1 * num2;
	return a;

}

//div 숫자을 2개을 나누기

  double Div(int num1, int num2) {
	double result = 0;
	 result = (double) num1 / num2;
	return result;



}

//float  실수 






int main3()
{
	
	int Pluse_result = 0;
	int Minuse_result = 0;
	int mul_result = 0;
	int div_result = 0;
	
	//함수을 사용
	
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