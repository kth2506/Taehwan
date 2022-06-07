// ** Vector ver 0.9 - 06.07
#include <iostream>

using namespace std;

// ** 원소의 개수
int Size = 0;
// ** 최대 수용 개수
int Capacity = 0;
// ** 컨테이너
int* Vector = nullptr;

// ** 컨테이너의 마지막 위치에 값을 추가
void push_back(const int& _Value);

int front();

int back();

void erase(const int _value);

void insert(const int _where);

// ** 컨테이너의 마지막 위치의 값을 삭제
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
	// ** 특정 위치에 있는 원소를 삭제하고 정렬
	--Size;
	for (int i = _value - 1; i < Size; ++i)
		Vector[i] = Vector[i + 1];
}

void insert(const int _where, const int _value)
{
	// ** 특정 위치에 원소를 삽입
	++Size;
	Vector[_where - 1] = _value;

	for (int i = _where; i < Size; ++i)
	{
	}
}

/*
- 보다는 +(-) 가 더 효율적이고 (2의 보수 - 반전시키고 + 1)
/ 보다는 *가 /2 보다는 >> 1 이 더 효율적이다.
따라서 배열의 길이는 2^n 으로 해주는것이 효율적이다.

배열은 0이 아닌값으로만 초기화가 가능하다
배열은 상수값으로만 초기화가 가능하다

아래와 같이 사용한다면 위 조건은 무시 가능

	
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
// 1. 데이터 추가 (새로운 공간 확보)

// 2. 데이터 삭제

// 3. 데이터를 삽입할수 있는 공간의 크기

// 4. 현재 삽입되어있는 원소의 개수

// 5. container의 시작 지점.

// 6. container의 종료 지점.


/*
배열 : 직접 접근이 가능하다
Vector : 직접 접근이 가능하다
직접 접근의 장점

접근 속도가 항상 일정하다.
asdasdasd
배열의 단점

데이터를 동적으로 사용할 수 없다.
배열의 길이를 변경할 수 없다.

데이터의 이동보다 복사가 더 빠르다
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