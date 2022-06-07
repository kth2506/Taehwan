// ** Vector ver 0.9 - 06.07
#include <iostream>

using namespace std;

// ** ������ ����
int Size = 0;
// ** �ִ� ���� ����
int Capacity = 0;
// ** �����̳�
int* Vector = nullptr;

// ** �����̳��� ������ ��ġ�� ���� �߰�
void push_back(const int& _Value);

int front();

int back();

void erase(const int _value);

void insert(const int _where);

// ** �����̳��� ������ ��ġ�� ���� ����
void pop_back();

int main(void)
{
	for (int i = 0; i < 15; ++i)
		push_back(i * 100 + 100);


	pop_back();

	push_back(10000);

	for (int i = 0; i < Size; ++i)
		cout << " Value : " << Vector[i] << endl;
	cout << "Size : " << Size << endl;

	erase(4);

	for (int i = 0; i < Size; ++i)
		cout << " Value : " << Vector[i] << endl;
	cout << "Size : " << Size << endl;


	cout << front() << endl;
	cout << back() << endl;
	return 0;
}

void push_back(const int& _Value)
{
	if (Capacity <= Size)
	{
		Capacity += (Capacity <= 3) ? 1 : Capacity >> 1;

		int* Temp = new int[Capacity + 1];

		for (int i = 0; i <= Capacity; ++i)
			Temp[i] = NULL;

		for (int i = 0; i < Size; ++i)
			Temp[i] = Vector[i];
		

		if (Vector)
		{
			delete Vector;
			Vector = nullptr;
		}

		Temp[Size] = _Value;
		Vector = Temp;
	}
	else
		Vector[Size] = _Value;

	++Size;




}


void pop_back()
{
	--Size;
}

int front()
{
	return Vector[0];
}

int back()
{
	return Vector[Size - 1];
}

void erase(const int _value)
{
	// ** Ư�� ��ġ�� �ִ� ���Ҹ� �����ϰ� ����
	--Size;
	for (int i = _value - 1; i < Size; ++i)
		Vector[i] = Vector[i + 1];
}

void insert(const int _where, const int _value)
{
	// ** Ư�� ��ġ�� ���Ҹ� ����
	++Size;
	Vector[_where - 1] = _value;

	for (int i = _where; i < Size; ++i)
	{
	}
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