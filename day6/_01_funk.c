#include<stdio.h>

//함수
// 자료형 함수형(){}
//()입력받을값
//{}내용
//함수명 :함수명
//자료형: 리턴값 형태 


void func1() {

	printf("함수형사용\n");
	//void 리턴값 없음 
	//()비어있는값 없음 

}
void func2(int num) {
	printf("%d\n",num);
	//void 리턴값 없음 
	//() int 라는 변수 하나 있으니 사용할때 정수값 하나를 넣어주어야 함 


}

void func3(char c) {
	printf("%c\n",c);
}

void func4(int num1,int num2) {
	printf("%d\n",num1+num2);
}

int funck5(int num1, int num2) {
	int result = num1 + num2;
	return result;

	//(): 받는것 
	//return : 주는것

}

char func6(int num) {
	if (num >= 0) {
		return 'y';
	}
	else
	{
		return 'n';
	}

}

int main1() {

	func1();
	func2(321);// int 라는 변수정수한개을 써주어여 함 
	func3('a');
	func4(2, 4);
	
	
	//:함수로 값을 전달 
	// return  함수로도 값을 전달받음
	// func6 양수이면 y 음수이면 n
	int number=funck5(5,10); //cnffur x, return 으로 결과값을 알려줌
	printf("%d\n", 5 + 10);
	printf("%d\n", funck5(5,10));
	
	
	printf("%c\n", func6(10));
	printf("%c\n", func6(1));
	printf("%c\n", func6(-10));
	//사용할때 넘겨주는 값은 ()에, 사용후에 넘겨받을 값을 return 에 적어준다 
	char a = '\0';
	a = func6(-5);
	a = 'n';
	number = 5 + 10;      // 15가 남은 
	number = funck5(5,10);//15 가 남은

	return 0;
}