#pragma once
#ifndef MATRIX_H
#define MATRIX_H
#include <stdexcept>
#include <iostream>

template <typename T>
class Matrix {

private:
	T** matrix;
	int rows;
	int columns;

public:
	Matrix(int rows, int columns);
	Matrix(const Matrix<T>& matrix);
	~Matrix();
	void SetElements(int row, int column, T value);
	void SetFrom(T* array);
	T& GetElement(int row, int column);
	const T& GetElement(int row, int column) const;
	template<typename R> Matrix<R>Retype() const;
	Matrix<T> Transposition() const;
	Matrix<T> Multiply(const Matrix<T>& m) const;
	Matrix<T> Multiply(T scalar) const;
	Matrix<T> Suma(const Matrix<T>& m) const;
	Matrix<T> Suma(T scalar) const;
	void CoutMatrix() const;
	bool IsEqual(const Matrix& m) const;



};
template <typename T>
Matrix<T>::Matrix(int rows, int columns) {
	this->rows = rows;
	this->columns = columns;
	matrix = new T * [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new T[columns];
	}
}
template <typename T>
Matrix<T>::Matrix(const Matrix<T>& matrix) {
	this->rows = matrix.rows;
	this->columns = matrix.columns;
	this->matrix = new T * [rows];
	for (int i = 0; i < rows; i++)
	{
		this->matrix[i] = new T[columns];
		for (int j = 0; j < columns; j++)
		{
			this->matrix[i][j] = matrix.matrix[i][j];
		}
	}

}
template <typename T>
Matrix<T>::~Matrix() {
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}
template <typename T>
void Matrix<T>::SetElements(int row, int column, T value) {
	matrix[row][column] = value;
}
template <typename T>
void Matrix<T>::SetFrom(T* array) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			matrix[i][j] = array[(i * columns) + j];
		}
	}
}
template <typename T>
T& Matrix<T>::GetElement(int row, int column) {
	if (row >= rows || column >= columns)
		throw std::out_of_range("Bad Index");
	return matrix[row][column];
}
template <typename T>
const T& Matrix<T>::GetElement(int row, int column) const {
	if (row >= rows || column >= columns)
		throw std::out_of_range("Bad Index");
	return matrix[row][column];
}
template<typename T>
inline Matrix<T> Matrix<T>::Transposition() const
{
	Matrix<T> matrixII{ columns, rows };
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			matrixII.SetElements(j, i, matrix[i][j]);
		}
	}

	return matrixII;
}
template<typename T>
inline Matrix<T> Matrix<T>::Multiply(const Matrix<T>& matrix) const {
	if (this->columns != matrix.columns) {
		throw std::length_error("Different sizes of dimensions for thi operation.");
	}
	Matrix<T> matrixII = Matrix<T>(this->rows, matrix.columns);
	T summa = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < matrix.columns; j++) {
			for (int k = 0; k < matrix.rows; k++) {
				summa += this->matrix[i][k] * matrix.matrix[k][j];
			}
			matrixII.matrix[i][j] = summa;
			summa = 0;
		}
	}
	return matrixII;
}
template<typename T>
inline Matrix<T> Matrix<T>::Multiply(T scalar) const
{
	Matrix<T> matrixII{ rows, columns };
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			matrixII.Set(i, j, matrix[i][j] * scalar);
		}
	}
	return matrixII;
}

template<typename T>
inline Matrix<T> Matrix<T>::Suma(const Matrix<T>& matrix) const
{
	if (this->columns != matrix.columns) {
		throw std::length_error("Incorrect sizes of atrixs.");
	}
	Matrix<T> matrixII = Matrix<T>(this->rows, matrix.columns);
	T sum = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < matrix.columns; j++) {
			for (int k = 0; k < matrix.rows; k++) {
				sum += this->matrix[i][k] * matrix.matrix[k][j];
			}
			matrixII.matrix[i][j] = sum;
			sum = 0;
		}
	}
	return matrixII;
}
template<typename T>
inline Matrix<T> Matrix<T>::Suma(T scalar) const
{
	Matrix<T> matrixII{ rows, columns };
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			matrixII.SetElements(i, j, matrix[i][j] + scalar);
		}
	}
	return matrixII;
}
template<typename T>
inline void Matrix<T>::CoutMatrix() const
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
template<typename T>
inline bool Matrix<T>::IsEqual(const Matrix& matrix) const
{
	if (this->rows != matrix.rows || this->columns != matrix.columns)
		return false;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (this->matrix[i][j] != matrix.matrix[i][j])
			{
				return false;
			}
		}
	}
	return true;
}
template<typename T>
template<typename R>
inline Matrix<R> Matrix<T>::Retype() const
{
	Matrix<R> matrixII{ rows,columns };
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			matrixII.SetElements(i, j, (R)this->matrix[i][j]);
		}
	}

	return matrixII;
}


#endif // MATRIX_H
