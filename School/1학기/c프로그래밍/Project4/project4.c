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
	printf("10���� ������ �Է��Ͻÿ�.\n");
	int a[10];
	for (int i = 0; i < 10; i++) {
		printf("�Է� > ");
		scanf_s("%d", &a[i]);

	}
	printf("�Է��� ���� �� Ȧ�� :");
	oddnum(a, 10);
	printf("\n");
	printf("�Է��� ���� �� ¦�� :");
	evennum(a, 10);

}