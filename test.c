#include <stdio.h>
#include <windows.h>

#pragma warning (disable:4996)


// ASCII����мӼ��˳���˳��Ϊ * + , - . / 
// �Գ˺� * Ϊ���λ�� Ȼ��������������� * �ľ���
// ����Ϊ 0 Ϊ *, ����Ϊ 1 Ϊ +, ����Ϊ 3 Ϊ -, �Դ�����
// �Ѳ����������',''.'��Ϊ��NULL

int add(int a, int b){
	return a + b;
}
int sub(int a, int b){
	return a - b;
}
int mul(int a, int b){
	return a * b;
}
int divi(int a, int b){
	return a / b;
}

int main(){
	int(*pfun[6])(int, int) = { mul, add, NULL, sub, NULL, divi };

	int a, b;
	char s;
	scanf("%d%c%d", &a, &s, &b);

	printf("%d", pfun[s - '*'](a, b));
	system("pause");
	return 0;
}