#include<stdio.h>

//함수: 개발자가 직접만든은 기능 
//연산자: 프로그램 언어가 지원해주는 기능 (+ - == >= )

//함수 
//자료형 함수 (){}

//wjsekfqkedms rkqt
void Absplus(int num1,int num2) {
	int num3 = 0 , num4 = 0, result = 0;
	if (num1 < 0) {
		num3 = num1 * (-1);  //num1 음수 이면 양수 로변화하여 num3 에 넣는다 
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
	printf("%d\n", result);  // 더하기 기능과 상관없지만 출력을 위해서 임시로 넣음

}
// 절대값을 각각 절대값을 (양수)로 만든는 기능

void AbsMinus(int num1, int num2) {//정수을 2개를 전달받은 함수

	int num3 = num1;    //지역변수: 임시 
	int num4 = num2;
	int result = 0;
	
	
	
	
	if (num1 < 0) {
		num3 = num3 * (-1) ;  //num1 음수 이면 양수 로변화하여 num3 에 넣는다 
	}
	
	if (num2 < 0) {
		num4 = num4 * (-1) ;

	}
	
	 result = num3 - num4;
	printf("%d\n", result);


}
//숫자 3개 을더하는  함수 
void Pulse3(int num1,int num2,int num3) {
	
	int result =  0;
	int result1 = 0;
	result = num1 + num2+num3;
	//result1 = result + num3+num4;
	//printf("%d\n"num1+num2+num3)
	
	printf("%d\n", result);


}




int main0() {
	//프로젝트 실행하면 메인함수 부터 실행한다 
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