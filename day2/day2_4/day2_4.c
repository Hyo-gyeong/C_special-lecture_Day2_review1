#include <stdio.h>
int main(void)
{
	int input, origin;
	int i;
	int rest = 0;
	int reverse;

	for (i = 0; i < 5; i ++) {
		reverse = 0;//초기화 신경쓰자!
		printf("Enter a number: ");
		scanf("%d", &input);

		origin = input;
		
		//입력값을 뒤집어서 원래의 입력값이랑 비교하겠다는 논리!
		while (input != 0) {//input이 0이 아닌때.!조건 잘 생각해야함..! input <= 0 아니야!!//끝이 0으로 끝나는건 걱정 ㄴㄴ --> 0으로 시작하는 수 없어서.
			rest = input % 10;
			reverse = reverse * 10 + rest;
			input = input / 10;//rest빼주지 않아도 10으로 나눈 몫만 나오니까 따로 빼줄 필요 없음!
		}
		if (reverse == origin) 
			printf("%d is a palindrome\n", origin);
		else 
			printf("%d is not a palindrome\n", origin);
	}	
}