#include<stdio.h>


int main5() 
{
	char name[30] = "홍길동";// 일반 변수는 값을 담는다
	char* name_position = &name;
	printf("%s\n", name);
	printf("%s\n", * name_position);

	int age = 35;
	int* age_position = &age;
	printf("%d\n", *age_position);
	printf("%d\n", age_position);


	return 0;
}


//c언어 을 만들어진/사용하는이유 :포인터
//bell  연구소(전화기를 처음설립한 회사-.운영체제를 만들기 위해 언어를 개발 b언어
//운영체제:옛날에는 각회사의 장비마다 프로그램 언어를 따로 만들어서 사용했어야헸음.
//B언어 를 만들고 보니싼 운영체제를 만들 수 없음,
//왜냐하면, 사용할 장비는 운영체제보다 ㅇ미래에 만들어질 것이기때문,
//예를들어 LG회사에서 에어컨에 환풍기능 만든다라고 가정.1990년
//운영체제는 1900년에 만들어진 1900년 함수에 이름을 알수없음
//쉽게 말하면, 1900년에 사는사람은 1930년에 태어날 자식을 이름을 알수없음


//대명사 그(him):미래의 내 첫째자식 이름===>point(미래의 태어날 자식을 이름 가상으로지정한다) 
//모든 변수는 혹은 함수에 주소가 있음
//이공간의 주소를 가르키는 것이 포인터라 한다 

