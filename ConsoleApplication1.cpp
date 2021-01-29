#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int array[5];

	cout << "Enter element massiva" << endl;
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> array[i];
	}
	//cout << "array = { ";
	
	for (int i = 0; i < 5; i++)
	{
		cout << " " << array[i] << " ";
	}
	cout << '\n';
	for (int i = 0; i < 5; i++) {
		sum += array[i];
		cout << " " << sum << " ";
	}	
}