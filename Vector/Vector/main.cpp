// ** Vector v0.4
#include <iostream>

using namespace std;

int main(void)
{
	char str1[2][5] = {
		{'A', 'B', 'C', 'D', 'E'},
		{'F', 'G', 'H', 'I', 'J'}
	};
	char* str2[2] = {
		{(char*)"ABCD"},
		{(char*)"EFGH"}

	};

	printf_s("%s\n", str2[0]);
	printf("%c", *str1[0] + 1);
	printf("%c", str1[0][0]);
	cout << (char)(*str2[0] + 4) << endl;
	return 0;
	// 1. ������ �߰� (���ο� ���� Ȯ��)
	
	// 2. ������ ����

	// 3. �����͸� �����Ҽ� �ִ� ������ ũ��

	// 4. ���� ���ԵǾ��ִ� ������ ����
	
	// 5. container�� ���� ����.
	
	// 6. container�� ���� ����.


}



/*
�迭 : ���� ������ �����ϴ�
Vector : ���� ������ �����ϴ�
���� ������ ����

���� �ӵ��� �׻� �����ϴ�.
asd
�迭�� ����

�����͸� �������� ����� �� ����.
�迭�� ���̸� ������ �� ����.

�������� �̵����� ���簡 �� ������

char str1[2][5] = {
		{'A', 'B', 'C', 'D', 'E'},
		{'F', 'G', 'H', 'I', 'J'}
	};
	char* str2[2] = {
		{(char*)"ABCD"},
		{(char*)"EFGH"}
	};

	printf_s("%s\n", str2[0]);
	printf("%c", *str1[0] + 1);
	printf("%c", str1[0][0]);
	cout << (char)(*str2[0]+4) << endl;
	return 0;
*/