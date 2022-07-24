#include <stdio.h>

void main4() {
	int num = 0;
	//대입
	num = 3;
	//연산후 대입 
	num = 3 + 5;
	printf("%d\n", num);

	// 내가 갖고 있는 값에서 5를 더한다 (누적연산자)
	num = 3; // 3을 저장 
	//num = num + num  //   왼쪽은 공간 = 오른쪽은 안에 들어가있는 값 
	printf("%d\n", num);
	
	
	num += 5;// num=num+5 은 안에 5을더한다// 누적연산자  
	num -= 5;// num=num-5 은 안에 5을빼기// 누적연산자
	num *= 5;// num=num+5 은 안에 5을곱하기// 누적연산자
	num /= 5;// num=num+5 은 안에 5나눗기// 누적연산자
	num += 1;// 1누적 덧셈 > num++
	num ++;// 증감연산자

	num -= 1;// 1누적뺄셈 > num--

	//c언어는 업그레이드 c++
	//





}