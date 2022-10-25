// шаблон
#include<iostream>
#include"functions.h" // подключение файла заголовочника с прототипами функций
#include"structures.h"// подключение файла заголовочника с описанием структуры
#include"data.h"// подключение с доп переменными
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	// Библиотека с функциями
	/*cout << sum_AB(5, 4) << '\n';

	const int size = 5;
	int arr[size]{ 1,2,3,4,5 };
	show_arr(arr, size);

	cout << "\nвведите число:";
	cin >> n;
	cout << absolute(n) << '\n';*/
	// библиотека со структурой
	/*person tom{"Tom Smith", 18, "Manager", 45000};
	show_person(tom);*/

	cout << "PI = " << _PI << '\n';
	_N = 10;
	cout << "N = " << _N << '\n';
	return 0;
}