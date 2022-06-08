// ** Vector ver 0.10 - 06.08
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

// ** �����̳��� ������ ��ġ�� ���� ����
void pop_back();

// ** ���� ���ʿ� �ִ� ����
int front();

// ** ���� ���ʿ� �ִ� ����
int back();

// ** _where�� ��ġ�� �����͸� ����
void erase(const int _value);

// ** _where�� ��ġ�� _value �߰�
void insert(const int& _where, const int& _value);


int main(void)
{
	for (int i = 0; i < 10; ++i)
		push_back(i * 100 + 100);

	insert(1, 1);
	insert(1, 1);
	insert(1, 1);
	insert(1, 1);

	cout << front() << endl;
	cout << back() << endl;
	return 0;
}

void push_back(const int& _Value)
{  
	// ** ���� �� �̻� �����Ҽ� �ִ� ������ ���ٸ� 
	if (Capacity <= Size)
	{
		// ** 4���� ������ 1 ���� 4���� ũ�� 0.5�� ����
		Capacity += (Capacity <= 3) ? 1 : Capacity >> 1;

		// ** �ӽ��� ����Ҹ� ����
		int* Temp = new int[Capacity + 1];

		// ** �ʱ�ȭ
		for (int i = 0; i <= Capacity; ++i)
			Temp[i] = NULL;

		// ** ������ �ִ� ���� ����
		for (int i = 0; i < Size; ++i)
			Temp[i] = Vector[i];
		
		// ** ���� ���� ����
		if (Vector)
		{
			delete Vector;
			Vector = nullptr;
		}

		// ** �ӽ��� ��(�ش� �ּ�)�� �����ؿ�
		Temp[Size] = _Value;

		// ** �ӽ��� �ּҰ��� �������� ����
		// ** �߰��� ���ο� ���� �ٽ�
		// ** ���������� ����Ǿ� �ִ� Vector�� ������
		Vector = Temp;
	}
	else
		// ** ������ ��ġ�� �� �߰�
		Vector[Size] = _Value;

	// ** ���� ������ �ִ밪 ����
	++Size;




}


void pop_back()
{
	// ** ���� ������ �ִ밪 ����
	--Size;
}

int front()
{
	// ** 0��° ���� ��ȯ
	return Vector[0];
}

int back()
{
	// ** ������ ���� ��ȯ
	return Vector[Size - 1];
}

void erase(const int _value)
{
	// ** Ư�� ��ġ�� �ִ� ���Ҹ� �����ϰ� ����
	
	--Size;
	
	// ** ������
	for (int i = _value - 1; i < Size; ++i)
		Vector[i] = Vector[i + 1];


	for (int i = 0; i < Size; ++i)
		cout << " Value : " << Vector[i] << endl;
	cout << "Size : " << Size << endl;
}

void insert(const int& _where, const int& _value)
{
	// ** Ư�� ��ġ�� ���Ҹ� ����

	if (Capacity <= Size)
		Capacity += (Capacity <= 3) ? 1 : Capacity >> 1;

		// ** �ӽ� �����
	int* temp = new int[Capacity + 1];

	for (int i = 0; i <= Capacity; ++i)
		temp[i] = NULL;

	for (int i = 0; i < _where; ++i)
		temp[i] = Vector[i];

	temp[_where - 1] = _value;
	
	++Size;
	for (int i = _where + 1; i < Size; ++i)
		temp[i] = Vector[i - 1];

	if (Vector)
	{
		delete Vector;
		Vector = nullptr;
	}

	Vector = temp;


	for (int i = 0; i < Size; ++i)
		cout << " Value : " << Vector[i] << endl;
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