#include <stdio.h>

void main3() {
	//버스카드 를 찍습니다 
	//나이를 입력 받아서 
	//14세 미만이면 어린입니다 . 요금은 500 입니다 
	//14세~19세 이면    요금은 750원 입니다 
	//20세 이면 :성인입니다. 요금은 1000원입니다  
	int age = 0;
	int price = 0;
	char bus = 0;
	char a[100]  = "어린  500원입니다";
	char b[100]  = "청소년750원 입니다";
	char c[100]  = "어른  1000원 입니다";

	printf("버스카드 찍어주세요>>");
	scanf("%d",&age);
	
	if (age > 10) {
		
		price = 500;
		
		printf("%s\n", a);
		printf("어린입니다.요금은%d원 입니다 ",price);
	}
else if (age < 10) {
		price = 750;
		printf("%s", b);
		printf("청소년입니다 요금은 %d", price);
	   
	}
else if (age < 20) {
		price = 1000;
		printf("%s", c);
		printf("어른입니다 요금은 %d", price);
	
	}







}