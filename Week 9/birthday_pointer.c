// birthday_pointer.c
#include <stdio.h>

int main(void) {
	short birthday;
	short* ptr; // ������ ���� ������
	ptr = &birthday; // birthday ������ �ּҸ� ptr ������ ������

	// ���� ����
	int intVar = 42;
	float floatVar = 3.14;
	char charVar = 'A';
	double doubleVar = 9.81;

	// ������ ����
	int* intPtr = &intVar;
	float* floatPtr = &floatVar;
	char* charPtr = &charVar;
	double* doublePtr = &doubleVar;

	// %p �ͽ��� �޸� �ּҸ� 16���� �������� �����
	printf("birthday ������ �ּҴ� %p�Դϴ�.\n", ptr);

	// ���� ���� �ּҸ� �����
	printf("intVar ���� ��: %d, �ּ�: %p\n", *intPtr, intPtr);
	printf("floatVar ���� ��: %.2f, �ּ�: %p\n", *floatPtr, floatPtr);
	printf("charVar ���� ��: %c, �ּ�: %p\n", *charPtr, charPtr);
	printf("doubleVar ���� ��: %.2f, �ּ�: %p\n", *doublePtr, doublePtr);

	getch();

	return 0;
}