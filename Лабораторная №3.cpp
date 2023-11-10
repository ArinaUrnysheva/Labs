#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

void n1() {
	setlocale(LC_ALL, "Russian");
	int n;
	int a;
	cout << "Введите длину массива ";
	cin >> n;
	cout << endl;
	cout << "Массив: ";
	float* arr = new float[n];
	srand(time(NULL));
	for (int i = 0; i < n; ++i) {
		arr[i] = rand();
		cout << arr[i] << " ";
	}

	cout << endl;
	cout << "Массив, элементы которого умножены на 2: ";

	for (int i = 0; i < n; ++i) {
		cout << arr[i] * 2 << " ";
	}

	cout << endl;
	cout << "Ведите число а ";
	cin >> a;
	cout << endl;
	cout << "Массив, элементы которого уменьшены на число а: ";

	for (int i = 0; i < n; ++i) {
		cout << arr[i] - a << " ";
	}

	cout << endl;
	cout << "Массив, элементы которго разделены на первый элемент массива:";

	for (int i = 0; i < n; ++i) {
		cout << arr[i] / arr[0] << " ";
	}

	cout << endl;
	cout << endl;

	delete[]arr;
	return;
}

void n2() {
	setlocale(LC_ALL, "Russian");
	int n;
	float k = 0;
	int m = 0;
	cout << "Введите длину массива ";
	cin >> n;
	cout << endl;
	int* arr = new int[n];
	srand(time(NULL));
	cout << "Массив: ";
	for (int i = 0; i < n; ++i) {
		arr[i] = rand();
		cout << arr[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < n; ++i) {
		k += arr[i];
	}

	cout << "Сумма элементов массива равна " << k << endl;
	long long int c = 0;

	for (int i = 0; i < n; ++i) {
		c += pow(arr[i], 2);
	}

	cout << "Сумма квадратов элементов массива равна " << c << endl;

	int b = 0;
	if (n >= 6) {
		for (int i = 0; i < 7; ++i) {
			b += arr[i];
		}
		cout << "Сумма первых шести элементов массива равна " << b << endl;
	}
	else {
		cout << "В массиве меньше шести элементов" << endl;
	}
	int k1, k2;
	cout << "Введите число k1: ";
	cin >> k1;
	cout << endl;
	cout << "Введите число k2: ";
	cin >> k2;
	cout << endl;
	int sumk = 0;
	for (int i = k1 - 1; i < k2; ++i) {
		sumk += arr[i];
	}
	cout << "Сумма элементов с k1-го по k2-й равна " << sumk << endl;

	cout << "Среднее арифметическое элементов массива равно " << k / n << endl;

	int s1, s2;
	cout << "Введите число s1: ";
	cin >> s1;
	cout << endl;
	cout << "Введите число s2: ";
	cin >> s2;

	float sums = 0;

	for (int i = s1 - 1; i < s2; ++i) {
		sums += arr[i];
	}

	cout << "Среднее арифметическое элементов массива с s1-го по s2-й равно " << sums / (s2 - s1 + 1) << endl;

	delete[] arr;
	return;
}

void n3() {
	setlocale(LC_ALL, "Russian");
	int n = 20;
	vector <int> vector1(n);
	srand(time(NULL));
	cout << "Начальный массив: ";
	for (int i = 0; i < n; ++i) {
		vector1[i] = rand();
		cout << vector1[i] << " ";
	}
	cout << endl;
	int a = vector1[0];
	int b = vector1[1];
	int c = vector1[2];
	int x = vector1[17];
	int y = vector1[18];
	int z = vector1[19];
	vector1.erase(vector1.begin());
	vector1.erase(vector1.begin());
	vector1.erase(vector1.begin());
	vector1.insert(vector1.begin(), z);
	vector1.insert(vector1.begin(), y);
	vector1.insert(vector1.begin(), x);
	vector1.pop_back();
	vector1.pop_back();
	vector1.pop_back();
	vector1.insert(vector1.end(), a);
	vector1.insert(vector1.end(), b);
	vector1.insert(vector1.end(), c);
	cout << endl;
	cout << "Получившийся массив: ";
	for (int i = 0; i < n; ++i) {
		cout << vector1[i] << " ";
	}
	cout << endl;
	return;
}

void n4() {
	setlocale(LC_ALL, "Russian");
	int n;
	int k = 1;
	int u = 1;
	cout << "Введите длину массива: ";
	cin >> n;
	cout << endl;
	vector <int> vector1(n);
	vector <int> vector2(n);
	cout << "Массив: ";
	for (int i = 0; i < size(vector1); ++i) {
		vector1[i] = rand();
		cout << vector1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < size(vector1); ++i) {
		vector2[i] = vector1[i];
	}

	for (int i = 0; i < size(vector1); ++i) {
		if (vector1[i] < 0) {
			vector1.erase(vector1.begin() + i);
			k *= 0;
			break;
		}
	}
	if (k == 0) {
		cout << "Массив без первого отрицательного числа: ";
		for (int i = 0; i < size(vector1); ++i) {
			cout << vector1[i] << " ";
		}
		cout << endl;
	}
	else {
		cout << "В массиве нет отрицательных чисел" << endl;
	}

	reverse(vector2.begin(), vector2.end());

	for (int i = 0; size(vector2); ++i) {
		if (vector2[i] % 2 == 0) {
			vector2.erase(vector2.begin() + i);
			u *= 0;
			break;
		}
	}

	reverse(vector2.begin(), vector2.end());

	if (u == 0) {
		cout << "Массив без последнего чётного числа: ";

		for (int i = 0; i < size(vector2); ++i) {
			cout << vector2[i] << " ";
		}
		cout << endl;
	}

	else {
		cout << "В массиве нет чётных чисел" << endl;
	}

	return;
}

void n5() {
	setlocale(LC_ALL, "Russian");
	string city;
	cout << "Введите название города: ";
	cin >> city;
	cout << endl;
	if (city.length() % 2 == 0) {
		cout << "Количество букв в названии города чётно" << endl;
	}
	else {
		cout << "Количество букв в названии города нечётно" << endl;
	}
	return;
}

void n6() {
	setlocale(LC_ALL, "Russian");
	string surname1, surname2;
	cout << "Введите фамилию 1: ";
	cin >> surname1;
	cout << endl;
	cout << "Введите фамилию 2: ";
	cin >> surname2;
	cout << endl;
	int a = surname1.length();
	int b = surname2.length();
	if (a > b) {
		cout << "True" << endl;
	}
	return;
}

void n7() {
	setlocale(LC_ALL, "Russian");
	string city1, city2, city3, the_longest, the_shortest;
	cout << "Введите название первого города: ";
	cin >> city1;
	cout << endl;
	cout << "Введите название второго города: ";
	cin >> city2;
	cout << endl;
	cout << "Введите название третьего города: ";
	cin >> city3;
	cout << endl;
	int c1 = city1.length();
	int c2 = city2.length();
	int c3 = city3.length();
	if (c1 > c2 and c1 > c3) {
		the_longest = city1;
		if (c2 > c3) {
			the_shortest = city3;
		}
		else {
			the_shortest = city2;
		}
	}
	if (c2 > c3 and c2 > c1) {
		the_longest = city2;
		if (c1 > c3) {
			the_shortest = city3;
		}
		else {
			the_shortest = city1;
		}
	}
	if (c3 > c1 and c3 > c2) {
		the_longest = city3;
		if (c1 > c2) {
			the_shortest = city2;
		}
		else {
			the_shortest = city1;
		}
	}
	cout << "Город с самым длинным названием: " << the_longest << endl;
	cout << "Город с самым коротким названием: " << the_shortest << endl;
	return;
}

void n8() {
	setlocale(LC_ALL, "Russian");
	string word;
	cout << "Введите слово: ";
	cin >> word;
	cout << endl;
	int s = word.size();
	for (int i = 0; i < s; ++i) {
		word = '*' + word + '*';
	}
	cout << "Получившееся слово: " << word << endl;
	return;
}

void n9() {
	setlocale(LC_ALL, "Russian");
	string sent;
	cout << "Введите предложение: ";
	getline(cin, sent);
	float c = 0;
	float pr = 0;
	float a = 0;
	for (int i = 0; i < sent.size(); ++i) {
		if (sent[i] == ' ') {
			pr++;
		}
		if (sent[i] == 'a') {
			a++;
		}
		c++;
	}
	cout << "Доля буквы 'a' в %: " << a * 100 / (c - pr) << "%" << endl;
	return;
}

void n10() {
	setlocale(LC_ALL, "Russian");
	vector <string> vec1 = { "Can", "you", "can", "a", "can", "as", "a", "canner", "can", "can", "a", "can" };
	string new_word;
	cout << "Введите новое слово: ";
	cin >> new_word;
	cout << endl;
	for (int i = 0; i < vec1.size(); ++i) {
		if (vec1[i] == "can" or vec1[i] == "Can") {
			vec1[i] = new_word;
		}
		cout << vec1[i] << " ";
	}
	cout << endl;
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

	case 5: n5(); return 0;

	case 6: n6(); return 0;

	case 7: n7(); return 0;

	case 8: n8(); return 0;

	case 9: n9(); return 0;
	}
	return 0;
}