// ** STLVector ver 0.1 06.09

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> vecNumbers;
	
	for(int i = 0 ; i < 10; ++i)
		vecNumbers.push_back(i);

	for (vector<int>::iterator iter = vecNumbers.begin();
		iter != vecNumbers.end(); ++iter)
	{
		cout << *iter << endl;
	}
		

	return 0;
}


/*
int Array[16];

for (int i = 0; i < 16; ++i)
	Array[i] = i * 2;

int* iterator = Array;
for (int i = 0; i < 16; ++i)
	cout << Array[i] << endl;

for (int i = 0; i < 16; ++i)
	cout << (*iterator++) << endl;
*/