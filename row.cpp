#include "row.h"
#include <algorithm>
#include <cstddef>
#include <vector>

int Row::searchMinimun()
{
    std::vector<int>::iterator it = std::min_element(row.begin(), row.end());
    return *it;
}

int& Row::operator[](size_t index)
{
    return row[index];
}