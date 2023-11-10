#include <iostream>
#include <locale.h>
using namespace std;

void n1() {
	setlocale(LC_ALL, "Russian");
	int x, y, z;
	cout << "Введите числа через пробел: ";
	cin >> x >> y >> z;
	if (x * y % 2 != 0) {
		cout << "condition is true" << endl;
	}
	else {
		cout << "condition is false" << endl;
	}



	if (x > 20 and y < 20 and z < 20 or x < 20 and y > 20 and z < 20 or x < 20 and y < 20 and z > 20) {
		cout << "condition is true" << endl;
	}
	else {
		cout << "condition is false" << endl;
	}



	if (x == 0 or y == 0) {
		cout << "condition is true" << endl;
	}
	else {
		cout << "condition is false" << endl;
	}



	if (x < 0 and y < 0 and z < 0) {
		cout << "condition is true" << endl;
	}
	else {
		cout << "condition is false" << endl;
	}



	if (x % 5 == 0 and y % 5 != 0 and z % 5 != 0 or x % 5 != 0 and y % 5 == 0 and z % 5 != 0 or x % 5 != 0 and y % 5 != 0 and z % 5 == 0) {
		cout << "condition is true" << endl;
	}
	else {
		cout << "condition is false" << endl;
	}



	if (x > 100 or y > 100 or z > 100) {
		cout << "condition is true" << endl;
	}
	else {
		cout << "condition is false" << endl;
	}
	return;
}

void n2() {
	setlocale(LC_ALL, "Russian");
	pair<unsigned char, unsigned char>positionA, positionB;
	cout << "Введите координаты первой клетки: ";
	cin >> positionA.first >> positionA.second;
	cout << "Введите координаты второй клетки:";
	cin >> positionB.first >> positionB.second;
	if (positionA.first == positionB.first or positionA.second == positionB.second) {
		cout << "Ладья угрожает полю positionB(c, d)" << endl;
	}
	if (abs(positionA.first - positionB.first) == abs(positionA.second - positionB.second)) {
		cout << "Слон угрожает полю positionB(c, d)" << endl;
	}
	if (abs(positionA.first - positionB.first) < 2 and abs(positionA.second - positionB.second) < 2) {
		cout << "Король одним ходом может попасть на поле positionB(c, d)" << endl;
	}
	if (positionA.first == positionB.first or positionA.second == positionB.second or abs(positionA.first - positionB.first) == abs(positionA.second - positionB.second)) {
		cout << "Ферзь угрожает полю positionB(c, d)" << endl;
	}
	if (positionA.first == positionB.first and positionB.second - positionA.second == 1) {
		cout << "Пешка одним ходом может попасть на поле positionB(c, d)" << endl;
	}
	if (abs(positionA.first - positionB.first) == 1 and positionB.second - positionA.second == 1) {
		cout << "Пешка угрожает полю positionB(c, d)" << endl;
	}
	return;
}

void n3() {
	setlocale(LC_ALL, "Russian");
	int i, n;
	for (i = 1; i < 10; i++) {
		cout << i << " * " << 7 << " = " << i * 7 << endl;
	}
	cout << "Введите число n: ";
	cin >> n;
	for (i = 1; i < 10; i++) {
		cout << i << " * " << n << " = " << i * n << endl;
	}
	return;
}

void n4() {
	setlocale(LC_ALL, "Russian");
	long long i = 8;
	long long a, d, m, l, c, b, g, s;
	for (m = 9; m <= 15; m++) {
		i = i * m;
	}
	cout <<"Произведение всех целых чисел от 1 до 9 = " << i << endl;
	cout << "Введите число a: ";
	cin >> a;
	s = a;
	for (l = a + 1; l <= 20; l++) {
		s = s * l;
	}
	cout <<"Произведение всех целых чисел от 1 до а = " << s << endl;
	cout << "Введите число b: ";
	cin >> b;
	d = 1;
	for (c = 1; c <= b; c++) {
		d = d * c;
	}
	cout << "Произведение всех целых чисел от 1 до b = " << d << endl;
	for (g = a + 1; g <= b; g++) {
		a = a * g;
	}
	cout << "Произведение всех целых чисел от a до b = " << a << endl;
	return;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите номер задачи: ";
	cin >> n;

	switch (n) {

	case 1: n1(); return 0;

	case 2: n2(); return 0;

	case 3: n3(); return 0;

	case 4: n4(); return 0;
	}
	return 0;
}