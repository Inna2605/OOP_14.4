// Напишите функтор, который умножает каждый элемент вектора 
// на определенный коэффициент (этот коэффициент должен храниться в поле функтора).


#include <iostream>
#include <vector>
#include <algorithm>
#include "multiplication.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	vector <int> vec{ 9,21,86,99,5,104,2,53,71,1290,10005,4 };
	cout << "Вывод элементов вектора:\n";
	for (int i : vec) {
		cout << i << ' ';
	}
	int K;
	cout << "\n\nВведите коэффициент, который умножает каждый элемент вектора: ";
	cin >> K;

	transform(vec.begin(), vec.end(), vec.begin(), multiplication(K));

	cout << "\nВывод умноженых на коэффициент элементов вектора:\n";
	for (int i : vec) {
		cout << i << ' ';
	}
	cout << endl;
}