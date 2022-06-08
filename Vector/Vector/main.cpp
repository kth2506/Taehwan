// ** Vector ver 0.10 - 06.08
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

// ** 컨테이너의 마지막 위치의 값을 삭제
void pop_back();

// ** 가장 앞쪽에 있는 원소
int front();

// ** 가장 뒤쪽에 있는 원소
int back();

// ** _where의 위치의 데이터를 삭제
void erase(const int _value);

// ** _where의 위치에 _value 추가
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
	// ** 만약 더 이상 수용할수 있는 공간이 없다면 
	if (Capacity <= Size)
	{
		// ** 4보다 작으면 1 증가 4보다 크면 0.5배 증가
		Capacity += (Capacity <= 3) ? 1 : Capacity >> 1;

		// ** 임시의 저장소를 생성
		int* Temp = new int[Capacity + 1];

		// ** 초기화
		for (int i = 0; i <= Capacity; ++i)
			Temp[i] = NULL;

		// ** 기존에 있던 값을 복사
		for (int i = 0; i < Size; ++i)
			Temp[i] = Vector[i];
		
		// ** 기존 값을 삭제
		if (Vector)
		{
			delete Vector;
			Vector = nullptr;
		}

		// ** 임시의 값(해당 주소)을 복사해옴
		Temp[Size] = _Value;

		// ** 임시의 주소값에 복사해준 값과
		// ** 추가된 새로운 값을 다시
		// ** 전역변수로 저장되어 있는 Vector로 가져옴
		Vector = Temp;
	}
	else
		// ** 마지막 위치에 값 추가
		Vector[Size] = _Value;

	// ** 현재 원소의 최대값 증가
	++Size;




}


void pop_back()
{
	// ** 현재 원소의 최대값 감소
	--Size;
}

int front()
{
	// ** 0번째 원소 반환
	return Vector[0];
}

int back()
{
	// ** 마지막 원소 반환
	return Vector[Size - 1];
}

void erase(const int _value)
{
	// ** 특정 위치에 있는 원소를 삭제하고 정렬
	
	--Size;
	
	// ** 재정렬
	for (int i = _value - 1; i < Size; ++i)
		Vector[i] = Vector[i + 1];


	for (int i = 0; i < Size; ++i)
		cout << " Value : " << Vector[i] << endl;
	cout << "Size : " << Size << endl;
}

void insert(const int& _where, const int& _value)
{
	// ** 특정 위치에 원소를 삽입

	if (Capacity <= Size)
		Capacity += (Capacity <= 3) ? 1 : Capacity >> 1;

		// ** 임시 저장소
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