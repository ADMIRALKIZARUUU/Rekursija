// Rekursija.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int uzd(int n) {
	
	if (n == 0) {
		return 0;

	}
	else {
		return n % 10 + uzd(n/10);
	}
}

int fibonaci(int n) {

	if (n==1) {
		return n;
	}

	if (n==0) {
		return n;
	}

	else {
		return fibonaci(n-1) + fibonaci(n-2);


	}
}

// void rek(int a) {	
//	for (int i = 0; i <= a; i++) {
//		cout << fibonaci(i) << " ";
//	}

//}

int main(){
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите N чисел Фибоначи:";
	cin >> a;
	//cout << fibonaci(a) << " ";
	cout << uzd(a);
	// rek(a);

}

