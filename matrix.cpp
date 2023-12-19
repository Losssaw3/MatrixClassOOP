#include "matrix.h"
#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>

Matrix::Matrix(std::initializer_list<int> list, int rows, int columns)
{
    
    std::vector<int> list1;
    for (auto& i: list)
    {
        list1.push_back(i);
    }

    for (size_t i = 0; i < rows; i++)
    {
        Row initRow {};
        matrix.push_back(initRow);
        for(size_t j = 0; j < columns; j++)
        {
            matrix[i].row.push_back(list1[columns*i + j]);    
        }
    }
}

std::ostream& operator<< (std::ostream& os, Matrix& matrix)
{
    for (size_t i = 0; i < matrix.matrix.size(); i++) 
    {
        for (size_t j = 0; j < matrix.matrix[i].row.size(); j++)
        {
            os << matrix.matrix[i].row[j] << ' ';
        }
        os << '\n';
    }
    return os;
}

void Matrix::transpose()
{
    std::vector<Row> newMatrix;
    for (size_t j = 0; j < this->matrix[0].row.size(); j++)
    {
        Row newRow{};
        for (size_t i = 0; i < this->matrix.size(); i++)
        {
            newRow.row.push_back(this->matrix[i][j]);
        }
        newMatrix.push_back(newRow);
    }
    this->matrix = newMatrix;
}

void Matrix::deleteColumn(size_t index)
{
    this->transpose();
    deleteRow(index);
    this->transpose();
}

void Matrix::deleteRow(size_t index)
{
    matrix.erase(matrix.begin() + index);
}

Row& Matrix::operator[](size_t index)
{
    return matrix[index];
}

std::string Matrix::toString()
{
	std::stringstream buffer;
    for(auto it = matrix.begin(); it != matrix.end(); it++)
    {
        for (auto subIt = it->row.begin(); subIt != it->row.end(); subIt++) 
        {
            buffer << *subIt;
        }
    }
    return buffer.str();

}
size_t Matrix::getSize() const
{
    return this->matrix.size();
}

const std::vector<Row> Matrix::getMatrix() const
{
    return this->matrix;
}