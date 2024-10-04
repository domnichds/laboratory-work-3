#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	long long int result = 1;
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		arr[i] = rand() % 100;
	}
	cout << "Исходный массив: ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
		result = result * arr[i];
	}
	cout << endl;
	cout << "Произведение элементов = " << result << endl;
	system("pause");
	return 0;
}