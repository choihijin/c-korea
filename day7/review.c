#include<stdio.h>
#include"review.h"

//자료형 함수 (전달받을값){함수을 사용되면 실행하는코드}

int main0() {

	int sum = add(30, 50);
	printf(" %d\n", sum);
	float divisition = div(30.0f, 50.0f);
	printf(" %f\n", divisition);





	return 0;



}








int add(int n1, int n2) {
	int result = n1 + n2;

	return result;

}
//사용자 가 직접 만든는 기능
float Div(float n1, float n2) {

	float result = n1 / n2;
	return result;
}




