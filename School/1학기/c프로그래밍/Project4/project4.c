#include <stdio.h>

void oddnum(int a[], int n);
void evennum(int a[], int n);

void oddnum(int a[], int n)
{

	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 1) {
			printf(" %d", a[i]);
		}
	}
}
void evennum(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0) {
			printf(" %d", a[i]);
		}
	}

}

int main(void)
{
	printf("10개의 정수를 입력하시오.\n");
	int a[10];
	for (int i = 0; i < 10; i++) {
		printf("입력 > ");
		scanf_s("%d", &a[i]);

	}
	printf("입력한 정수 중 홀수 :");
	oddnum(a, 10);
	printf("\n");
	printf("입력한 정수 중 짝수 :");
	evennum(a, 10);

}