#include <iostream>
using namespace std;

int bilet()
{
	int sum = 0;
	int i, j, k;
	char bilet[6];
	for (i = 0; i <= 999999; i++)
	{
		for (k = i, j = 0; j < 6; j++, k /= 10)
			bilet[j] = k % 10;
		if (bilet[0] + bilet[1] + bilet[2] == bilet[3] + bilet[4] + bilet[5])
			++sum;
	}
	return sum;
}

int main()
{
	int k = bilet();
	cout << "The number of lucky tickets: " << k << endl;
	system("pause");
	return 0;
}