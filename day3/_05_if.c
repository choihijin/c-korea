#include <stdio.h>

void main5() {
	//학점 계산
	//점수 90점이상이면 a, 80점 이상이면 b 70 점이상이면 c 70점 미만 이면 d

	char  grade;
	int score;
	//점수을 입력받고 
	//점수에 따라서 등급 을 알려주세요

	printf("점수을 입력하세요>>");
		scanf("%d",&score);

		if (90 >= score) {
			grade = 'a';
			printf("%c점,%d등급", grade, score);
		}
	else if(80 >= score) {
			grade = 'b';
			printf("%c등그,%d", grade, score);

	}
	
	else if (70 > score) {
			grade = 'c';
			printf("%d점,%c등급", grade, score);
		}


	else if (70<=score){
			grade = 'd';
			printf("%d점,%c등급", grade, score);

		
		}
	
	
		


	 

}