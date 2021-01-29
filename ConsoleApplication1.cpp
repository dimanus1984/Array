#include <iostream>

using namespace std;

void oneArray()
{
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

void twoArray()
{
    int n, i, * a, f;
    cout << "Enter kolichestvo element massiva: ";
    cin >> n;
    f = 0;
    a = new int[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter element massiva: ";
        cin >> a[i];
    }
    for (i = 1; i < n; i++)
    {
        if (a[i - 1] - a[i] > 0)
        {
            f = 1;
        }
        else
        {
            f = -1;
        }
    }
    if (f == -1)
    {
        if (a[i - 1] - a[i] < 0)
        {
            f = 2;
        }
        else
            f = -1;
    }
    if (f == 1)
    {
        cout << "Posledovatel'nost' ubyvayet \n";
    }
    if (f == 2)
    {
        cout << "Posledovatel'nost' vozrastayet \n";
    }
    if (f == -1) cout << "Posledovatel'nost' ne vozrastayet i ne ubyvayet";
}

int main()
{
	setlocale(LC_ALL, "Russian");

	//oneArray();

	twoArray();

	//treeArray();

	//fourArray();

	//fiveArray();

	return 0;
}