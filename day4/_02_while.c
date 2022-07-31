#include <stdio.h>
void main2() {
	// if()맞으면{}실행하고 
	//while()맞으면{}실행하고 다시 while 의 처음으로 실행한다 
	
		
	int i = 0; //실행횟수의 기준점
	while (i<5) {
		 printf("안녕\n");    //()에는 조건을 ,{} 에는 내용을 넣어준다 
		 i++;                //i을 1씩 증가한다 
	
	}
		
	//5번이 ->5번이면 실행하면 조건을 틀린도록 조작 
	printf("끝남\n");
}
//제어문 :조건문, 반복문 ..
//조건문 :if switch
//반복문 :for, while 
