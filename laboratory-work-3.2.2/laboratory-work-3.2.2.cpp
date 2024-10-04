#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int m, n, el;
	int ma = 0;
	cout << "Введите число m: ";
	cin >> m;
	cout << "Введите число n: ";
	cin >> n;
	int** matrix = new int* [m];
	double** result_matrix = new double* [m];
	for (int i = 0; i < m; i++)
	{
		matrix[i] = new int[n];
		result_matrix[i] = new double[n];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			el = rand() % 100;
			if (rand() % 2 == 0)
			{
				el = -el;
			}
			matrix[i][j] = el;
			if (fabs(el) > fabs(ma))
			{
				ma = el;
			}
		}
	}
	cout << endl << "Исходная матрица: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(7) << matrix[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			result_matrix[i][j] = double(matrix[i][j]) / ma;
		}
	}
	cout << endl << "Результирующая матрица: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << fixed << setprecision(3) << setw(7) << result_matrix[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < m; i++)
	{
		delete[] matrix[i];
		delete[] result_matrix[i];
	}
	delete[] matrix;
	delete[] result_matrix;
	system("pause");
	return 0;
}