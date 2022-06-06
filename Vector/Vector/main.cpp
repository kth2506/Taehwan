// ** Vector ver 0.8 - 06.06
#include <iostream>

using namespace std;

// ** ������ ����
int Size = 0;
int* Temp = nullptr;
// ** �ִ� ���� ����
int Capacity = 0;
// ** �����̳�
int* Vector = nullptr;

void push_back(const int& _Value);

int main(void)
{
	for (int i = 0; i < 8; ++i)
		push_back(i * 100 + 100);

	for (int i = 0; i < Size; ++i)
		cout << Vector[i] << endl;

	
	return 0;
}

void push_back(const int& _Value)
{
	if (Capacity <= Size)
	{
		Capacity += (Capacity <= 3) ? 1 : Capacity >> 1;

		Temp = new int[Capacity];

		for (int i = 0; i < Size; ++i)
			Temp[i] = Vector[i];

		if (Vector)
		{
			delete Vector;
			Vector = nullptr;
		}
	}
	Temp[Size] = _Value;
	++Size;

	Vector = Temp;


	cout << "Size : " << Size << endl;
	cout << "Capacity : " << Capacity << endl;
}

/*
- ���ٴ� +(-) �� �� ȿ�����̰� (2�� ���� - ������Ű�� + 1)
/ ���ٴ� *�� /2 ���ٴ� >> 1 �� �� ȿ�����̴�.
���� �迭�� ���̴� 2^n ���� ���ִ°��� ȿ�����̴�.

�迭�� 0�� �ƴѰ����θ� �ʱ�ȭ�� �����ϴ�
�迭�� ��������θ� �ʱ�ȭ�� �����ϴ�

�Ʒ��� ���� ����Ѵٸ� �� ������ ���� ����

	
	int Size = 10;
	int iter = 0;
	int* Vector = new int[Size];

	for (int i = 0; i < Size; ++i)
		Vector[i] = i;

	for (int i = 0; i < Size; ++i)
		cout << Vector[i];
	for (int i = 0; i < 17; ++i)
		cout << Vector[iter++] << endl;
*/
// 1. ������ �߰� (���ο� ���� Ȯ��)

// 2. ������ ����

// 3. �����͸� �����Ҽ� �ִ� ������ ũ��

// 4. ���� ���ԵǾ��ִ� ������ ����

// 5. container�� ���� ����.

// 6. container�� ���� ����.


/*
�迭 : ���� ������ �����ϴ�
Vector : ���� ������ �����ϴ�
���� ������ ����

���� �ӵ��� �׻� �����ϴ�.
asdasdasd
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