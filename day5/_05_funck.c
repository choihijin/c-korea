#include<stdio.h>
void add3(int num1,int num2,int num3) {

	printf("%d", num1+ num2+ num3);
	//함수을 만든는 방법
	//자료형 정수형(){}
	//{}사용하는 곳에서 받을 값을 저장을 공간을 마련하기위한것 

}

//sumNONE 두숫자을 더한 후에 +1

void sumNONE(int n,int m) {
	int result = n + m+1;  // 
	printf("%d\n", result);
}
void DivNotZero(int i, int j) {
	if (j != 0) {
	int result1 = i / j;
		printf("%d\n",result1);

		}
	else
	{
		printf("0으로 나눌수 없습니다 \n");
	}
		
		
}

void main5(){
	// 개발자 가 직접만든는 기능 
	//연산자 :언어가 제공하는 기능 (+ - * / =....)
	//함수는 개발자가 만든는 기능 
	//예시 :0으로 나눌때는 계산하지 않는 나눈기 
	//연산자 /는 0으로 나눌때 연산에러발생  <==> 고치고 싶다
	//언어은 제공하는 사람은 기호을 따로 제공한다 
	//예을 들면 , 세개 더하기 기호 ,네개 더하기 들어가는 기호, 등등 무한 
	//그러면 너이가 만들어 <==> 함수


	//한번에 3개을 더하는 기능 가진 연산자을 만들자 
	//원래 더하기는 한번에 2개까지만 더할수 있다 . 
	//printf("%d", 2 + 3 );  //2더하기3을 4을 더하기 을 기호을 만든다 
	//add3은 :한번에 3개을 더하는 기호 (함수)
	add3(2, 3, 4); 
	printf("\n");
	
	add3(1, 3, 4);
	printf("\n");

	//숫자을 2개을 입력받아 합치고 +1을 더하는 기능 추가
	sumNONE(1, 1);
	sumNONE(5, 6);
	printf("\n\n");
	DivNotZero(2, 2);
	DivNotZero(10, 2);
	DivNotZero(0, 0);
	
	
		


}
