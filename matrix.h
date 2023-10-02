#include "row.h"
#include <initializer_list>
#include <sstream>
#include <string>
#include <vector>
/*
@brief Class Matrix
*/
class Matrix {
public:
  Matrix(std::initializer_list<int> list, int rows, int columns);

  /*
 @brief Override of [] operator
 @param index of necessary element
 @return value of element (row)
 */
  Row &operator[](size_t index);

  /*
 @brief Override of << operator
 @param os output stream
 @param matrix object to be put in stream
 @return output stream contains matrix
 */
  friend std::ostream &operator<<(std::ostream &os, Matrix &matrix);

  /*
  @brief function which transpose a matrix
  */
  void transpose();

  /*
  @brief function which delete column in matrix
  @param index of deleted colunm
  */
  void deleteColumn(size_t index);

  /*
 @brief function which delete row in matrix
 @param index of deleted row
 */
  void deleteRow(size_t index);

  /*
 @brief function which replace the minimal modulus element with zero in every
 column
 */
  void task1();

  /*
 @brief function which delete columns where first element more than last
 */
  void task2();

  /*
  @brief function which convert matrix into std::string
  @return string which contains matrix
  */  
  std::string toString();

private:
  std::vector<Row> matrix;
};