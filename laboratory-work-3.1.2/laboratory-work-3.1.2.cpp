#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int lenght;
	long long int result = 1;
	cout << "������� ����� �������: ";
	cin >> lenght;
	int* arr = new int[lenght];
	for (int i = 0; i < lenght; i++)
	{
		arr[i] = rand() % 100;
	}
	cout << "�������� ������: ";
	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << " ";
		result *= arr[i];
	}
	cout << endl;
	cout << "������������ ��������� = " << result << endl;
	system("pause");
	return 0;
}
