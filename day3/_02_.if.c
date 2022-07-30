#include <stdio.h>

void main2() {
	int age = 0;
	printf("나이를 입력하세요>>");
	scanf("%d", &age); // 나이 입력범위
	//if1 
	if (age < 10) {
		printf("어린입니다\n");
	}

	else if (age <20) {
		//10대입니다
		//else 틀려을때 그다음에 검사할 if 그전에 값이 틀리면 다음으로 흐르는 조건 
		
		printf("10대입니다 ");

	}

	else if (age <30)  {
		//20대입니다

		printf("20대입니다 ");
  }

	else if (age >30) {
		//30 대입니다 
		printf("30대입니다");

	
	}
}