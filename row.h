#include <initializer_list>
#include <iostream>
#include <vector>

 /*
 @brief Struct row
*/  
struct Row
{
     /*
    @brief override [] operator 
    @param index of necessary element 
    @return value of element
    */  
    int& operator[](std::size_t index);

    
    std::vector<int> row;
    
    /*
    @brief function which searching minimal element in row
    */  
    int searchMinimun();
};
