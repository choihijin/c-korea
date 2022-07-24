#include<stdio.h>

void main6() {
	//삼항연산자 :조건에 따라서 동작을 다르게 
	// 비교연산자 ? 맞을때: 틀릴때: 
	(1 == 1) ? printf("1은1과같다\n") : printf("1은1과다른다\n");



	int age = 21;
	(age >= 20) ? printf("성인입니다\n") : printf("미성년자입니다");



}