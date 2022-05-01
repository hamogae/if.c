#include <stdio.h>

int main() {
	int a, b, result;
	char ch;
	
	// 연산자, 첫번째, 두번째 수 입력받기
	printf("연산자를 입력해주세요: ");
	scanf("%c", &ch);
	printf("첫번째 수를 입력해주세요: ");
	scanf("%d", &a);
	printf("두번째 수를 입력해주세요: ");
	scanf("%d", &b);

	switch (ch) {
	case 053:
		if (a > 30000 && b > 30000)
			printf("오류가 발생하였습니다.");
		else if (a <= 30000 && b <= 30000) // ab가 3만과 같거나 작으면 
			result = a + b;
		printf("결과: \n%d\n", result);
		break;
		case 052:
			if (a > 30000 && b > 30000)
				printf("오류가 발생하였습니다.");
			else if (a <= 30000 && b <= 30000)
				result = a * b;
			printf("결과: \n%d\n", result);
			break;
		case 055:
			if (a > 30000 && b > 30000) // a, b가 3만 크다
				printf("오류가 발생하였습니다.");
			else if (a <= 30000 && b <= 30000)
				result = a - b;
			printf("결과: \n%d\n", result);
			break;
		case 057:
			if (a > 30000 && b > 30000) // a, b가 3만보다 크다
				printf("오류가 발생하였습니다.");
			else if (a <= 30000 && b <= 30000 && b > 0)
				result = (double) a / b;
			printf("\n결과: %f\n", result);
			break;
		default:
			printf("오류가 발생하였습니다.\n");
			break;
		}
		return 0;
	}
