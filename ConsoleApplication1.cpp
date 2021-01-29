#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int sum = 0;
	cout << "массив: " << endl;

	// объявление и инициализация одномерного массива
	int array[4] = { 1, 2, 3, 4 };

	cout << "Index" << "\t\t" << "Element massiva" << endl;

	for (int i = 0; i < 4; i++)
	{
		// вывод на экран индекса ячейки массива, а затем содержимого этой ячейки, в нашем случае - это целое число
		cout << "array[" << i << "]" << "\t\t" << array[i] << endl;
	}
	for (int i = 0; i < 4; i++) {
		sum += array[i];
		cout << "array[" << i << "]" << "\t\t" << sum << endl;
	}
}

