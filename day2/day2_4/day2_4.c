#include <stdio.h>
int main(void)
{
	int input, origin;
	int i;
	int rest = 0;
	int reverse;

	for (i = 0; i < 5; i ++) {
		reverse = 0;//�ʱ�ȭ �Ű澲��!
		printf("Enter a number: ");
		scanf("%d", &input);

		origin = input;
		
		//�Է°��� ����� ������ �Է°��̶� ���ϰڴٴ� ��!
		while (input != 0) {//input�� 0�� �ƴѶ�.!���� �� �����ؾ���..! input <= 0 �ƴϾ�!!//���� 0���� �����°� ���� ���� --> 0���� �����ϴ� �� ���.
			rest = input % 10;
			reverse = reverse * 10 + rest;
			input = input / 10;//rest������ �ʾƵ� 10���� ���� �� �����ϱ� ���� ���� �ʿ� ����!
		}
		if (reverse == origin) 
			printf("%d is a palindrome\n", origin);
		else 
			printf("%d is not a palindrome\n", origin);
	}	
}