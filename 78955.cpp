#include <iostream>
#include <ctime>
using namespace std;
int main() {
	/*Array3.Дано целое число N(> 1), а также первый член A и разность D арифметической прогрессии.Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии :
	A, A + D, A + 2·D, A + 3·D, . . . .*/
	/*const int n = 10;
	int a, d;
	cin >> a >> d;
	int mass[n];
	mass[0] = a;
	for (int i = 1; i < n; i++) {
		mass[i] = mass[i - 1] + d;
	}

	for (int i = 0; i < n; i++) {
		cout << mass[i] << " ";
	}
	cout << endl;
*/
/*Array4.Дано целое число N(> 1), а также первый член A и знаменатель D
	геометрической прогрессии.Сформировать и вывести массив размера N,
	содержащий N первых членов данной прогрессии :
A, A·D, A·D
	2
	, A·D
	3
	, . . . .*/
	/*const int n = 10;
	int a, d;
	cin >> a >> d;
	int mass[n];
	mass[0] = a;
	for (int i = 1; i < n; i++) {
		mass[i] = mass[i - 1] * d;
	}

	for (int i = 0; i < n; i++) {
		cout << mass[i] << " ";
	}
	cout << endl;
*/
/*Array5.Дано целое число N(> 2).Сформировать и вывести целочисленный
	массив размера N, содержащий N первых элементов последовательности
	чисел Фибоначчи FK :
F1 = 1, F2 = 1, FK = FK−2 + FK−1, K = 3, 4, . . . .*/
/*int const n = 10;
int mass[n];
mass[0] = 1;
mass[1] = 1;
for (int i = 2; i < n; i++) {
	mass[i] = mass[i - 2]+mass[i-1] ;
}

for (int i = 0; i < n; i++) {
	cout << mass[i] << " ";
}
cout << endl;*/
	

	
		/*Array6.Даны целые числа N(> 2), A и B.Сформировать и вывести целочисленный массив размера N, первый элемент которого равен A, второй
			равен B, а каждый последующий элемент равен сумме всех предыдущих.*/

		/*int const n = 10;
	int a, b;
	cin >> a >> b;
	int mass[n];
	 mass[0] = a;
	 mass[1] = b;
	 for (int i = 2; i < n; i++) {
		 int sum = 0;
		 for (int j = 0; j < i; j++) {
			 sum =sum+ mass[j];
		}
		 mass[i] = sum;
	 }
	 for (int i = 0; i < n; i++) {
		 cout << mass[i] << " ";
	 }
	 cout << endl;*/
	/*Array12.Дан массив A размера N(N — четное число).Вывести его элементы
		с четными номерами в порядке возрастания номеров : A2, A4, A6, . . ., AN .
		Условный оператор не использовать*/
	const int n = 10;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 2; i < n; i += 2) {
		cout <<a[i] <<" ";
	}



















}