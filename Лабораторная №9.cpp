#include <iostream>
#include <locale.h>

using namespace std;
setlocale(LC_ALL, "Russian");

struct Matrix {
	int** data_ = nullptr;
	size_t n_ = 0u; //строки
	size_t m_ = 0u; //столбцы
};


//Создание матрицы из 0
void Construct(Matrix& out, size_t n, size_t m) {
	out.n_ = n;
	out.m_ = m;
	out.data_ = new int* [n];
	for (size_t i = 0; i < n; ++i) {
		out.data_[i] = new int[m];
	}
	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < m; ++j) {
			out.data_[i][j] = 0;
		}
	}
	return;
}

//Освобождение памяти
void Distruct(Matrix& in) {
	for (size_t i = 0; i < in.n_; ++i) {
		delete in.data_[i];
	}
	return;
}

//Создаем копию матрицы
Matrix Copy(const Matrix& matrix) {

	Matrix matrix_copy;
	Construct(matrix_copy, matrix.n_, matrix.m_);
	for (size_t i = 0; i < matrix.n_; ++i) {
		for (size_t j = 0; j < matrix.m_; ++j) {
			matrix_copy.data_[i][j] = matrix.data_[i][j];
		}
	}
	return matrix_copy;
}

//Сумма двух матриц

Matrix Add(const Matrix& a, const Matrix& b) {
	if (a.n_ == b.n_ and a.m_ == b.m_) {
		Matrix summat;
		Construct(summat, a.n_, a.m_);
		for (size_t i = 0; i < a.n_; ++i) {
			for (size_t j = 0; j < a.m_; ++j) {
				summat.data_[i][j] = a.data_[i][j] + b.data_[i][j];
			}
		}
		return summat;
	}
	else {
		return Matrix();
	}
}

//Разность матриц
Matrix Sub(const Matrix& a, const Matrix& b) {
	if (a.n_ == b.n_ and a.m_ == b.m_) {
		Matrix submat;
		Construct(submat, a.n_, a.m_);
		for (size_t i = 0; i < a.n_; ++i) {
			for (size_t j = 0; j < a.m_; ++j) {
				submat.data_[i][j] = a.data_[i][j] - b.data_[i][j];
			}
		}
		return submat;
	}
	else {
		return Matrix();
	}
}
//Произведение двух матриц (а*b)
Matrix Mult(const Matrix& a, const Matrix& b) {
	if (a.m_ == b.n_) {
		Matrix c;
		Construct(c, a.n_, b.m_);
		for (size_t i = 0; i < a.n_; ++i) {
			for (size_t j = 0; j < b.m_; j++) {
				for (size_t x = 0; x < a.m_; ++x) {
					c.data_[i][j] += a.data_[i][x] * b.data_[x][j];
				}
			}
		}
	}
}

//Транспонирование

void Transposition(Matrix& matrix) {
	Matrix mat;
	Construct(mat, mat.n_, mat.m_);
	for (size_t i = 0; i < matrix.n_; ++i) {
		for (size_t j = 0; j < matrix.m_; ++j) {
			mat.data_[j][i] = matrix.data_[i][j];
		}
	}
}
