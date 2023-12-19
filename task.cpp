#include "task.h"
#include "algorithm"


Tasks::Tasks(Matrix matrix)
	:matrix(matrix)
{
}

Matrix Tasks::task1()
{
	Matrix result{this->matrix};
	result.transpose();
    for (size_t i = 0; i < result.getSize(); i++) 
    {
        std::replace (matrix[i].row.begin(), matrix[i].row.end(), matrix[i].searchMinimun(), 0);
    }
    result.transpose();
	return result;
}

Matrix Tasks::task2()
{
	Matrix result {this->matrix};
	result.transpose();
    for(auto it = result.getMatrix().cbegin(); it !=result.getMatrix().cend(); it++)
    {
        if (it->row[0] > it->row[matrix.getSize()])
            {
                result.getMatrix().erase(it);
            }
    }
    result.transpose();
	return result;
}