#include <stdio.h>

void main0() {
	//출력을 화면을 보이기 위한것
	printf("복습\n");

	//문장을 끝을 날때 세미콜론: ;
	//주석 ://메모 
	//변수 :(수학) 변하는 수
	//프로그램 에서 변수 은 저장 공간 을 뜻한다 
	// 변수 은 자주 사용응 할것같은 값을 저장해놓기 위한것
	//변수선언 공간을 만드는 작업
	
	char 저장공간1 = 'a';// 저장공간 의 변수 


	printf("%c \n", 저장공간1);
	// 변수는 타입을 갖고있습니다 .(자료형)
	//char int float double,...
	//변수을 만들려면 자료형을 쓰고 옆에다가 변수의 이름을 적어 줍니다 
	int 숫자공간;      // 정수타입의 공간 

	float 소수점있는공간;//실수 타입의 저장공간
	
	char 한글자공간;     // 문자타입 저장공간

	char 여러가지공간[100] = "hello word";//문자열 저장공간 변수 
	//값 대입 :
	//변수명 = 값;
	//변수 초리과 변수선언과 동시에 값을 대입할수있다 
   //변수사용 :사용하는 곳에 변수 이름을 적어주면 됩니다
	숫자공간 = 314;        //숫자있는 공간
	소수점있는공간 = 3.14f; //실수형이 있는 공간
	한글자공간 = 'a';       // 한공간 있는공간    
	printf("숫자는   %d \n", 숫자공간);
	printf("문자는   %c \n", 한글자공간);
	printf("문자열는 %s \n", 여러가지공간);
	printf("실수형은 %f \n", 소수점있는공간);
	//출력은 여러개의 변수 사용
	printf("%d %c %s %f \n",숫자공간,한글자공간,여러가지공간, 소수점있는공간);
	//숫자끼리는 연산이 가능 (계산 비교 등등)
	int sum = 숫자공간 + 소수점있는공간;
	printf("%d", sum);

}

