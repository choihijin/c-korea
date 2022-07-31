#include <stdio.h>

void main0() {
	//조건문 if else if else switch case break 
	//if(){}
	//switch(){}
	
	int number = 10;
	// == ,<,>,=>,=<  맞은면 1 틀리면 0
	if (number ==0) {
		printf("숫자는 1과 같다\n");
	}
	else if (number==10) {  ///else if 은 if 가 틀리면 실행한다 
		printf("숫자는 10과같다\n");
	}
	
	else if (number == 20) {//else if else if 가틀리면 실행한다 

		printf("숫자는20과같다\n");

	}
	
	
	else
	{
		printf("숫자는 0과 같다\n");
	}


	switch (number){
	case 0:
		printf("숫자는0과같다\n");
		break;
	case 10:
		printf("숫자는10과같다\n");
		break;
		
	case 20:

		
		printf("숫자는20과같다\n");
		break;
	default:
		printf("일치하는숫자는없다\n");
	}



}