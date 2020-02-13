#include <stdio.h>
#include <windows.h>

#pragma warning (disable:4996)


// ASCII码表中加减乘除的顺序为 * + , - . / 
// 以乘号 * 为相对位置 然后根据其他符号与 * 的距离
// 距离为 0 为 *, 距离为 1 为 +, 距离为 3 为 -, 以此类推
// 把不参与运算的',''.'置为空NULL

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