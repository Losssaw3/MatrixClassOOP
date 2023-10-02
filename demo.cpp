#include "matrix.h"

int main()
{
    Matrix m1{{98,46,86,235,100,6,7,945},2,4};
    std::cout<<m1 << "\n" << "----------------------------------------"<<std::endl;
    std::cout<< m1.toString();
}