#include <stdio.h>

void main2() {
	int 숫자;      // %d
	//char 문자;        //%c
	char 문자열[100]; //%s
	float 실수;       ////%f
	printf("내가입력한값은:");
	scanf("%d",&숫자);
	
	printf("내가문자열입력:");
	scanf ("%s",&문자열);
	
	printf("실수형 입력:");
	scanf("%f", &실수);
 
	printf("%d \n,%s\n,%f\n",숫자,문자열,실수);

}

