#include <cstddef>
#include <gtest/gtest.h>
#include "matrix.h"
#include "matrix.cpp"

TEST(MatrixTest, TransposeTest) {
    Matrix matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, 3, 3};

    matrix.transpose();

    // Check the transposed matrix
    EXPECT_EQ(matrix[0][0], 1);
    EXPECT_EQ(matrix[0][1], 4);
    EXPECT_EQ(matrix[0][2], 7);
    EXPECT_EQ(matrix[1][0], 2);
    EXPECT_EQ(matrix[1][1], 5);
    EXPECT_EQ(matrix[1][2], 8);
    EXPECT_EQ(matrix[2][0], 3);
    EXPECT_EQ(matrix[2][1], 6);
    EXPECT_EQ(matrix[2][2], 9);
}

TEST(MatrixTest, DeleteColumnTest) {
    Matrix matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, 3, 3};

    matrix.deleteColumn(1);

    // Check the matrix after deleting a column
    EXPECT_EQ(matrix[0][0], 1);
    EXPECT_EQ(matrix[0][1], 3);
    EXPECT_EQ(matrix[1][0], 4);
    EXPECT_EQ(matrix[1][1], 6);
    EXPECT_EQ(matrix[2][0], 7);
    EXPECT_EQ(matrix[2][1], 9);
}

TEST(MatrixTest, DeleteRowTest) {
    Matrix matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, 3, 3};

    matrix.deleteRow(1);

    // Check the matrix after deleting a row
    EXPECT_EQ(matrix[0][0], 1);
    EXPECT_EQ(matrix[0][1], 2);
    EXPECT_EQ(matrix[1][0], 7);
    EXPECT_EQ(matrix[1][1], 8);
    EXPECT_EQ(matrix[2][0], 3);
    EXPECT_EQ(matrix[2][1], 9);
}

TEST(TasksTest, Task1Test) {
    Matrix inputMatrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, 3, 3};
    Tasks tasks(inputMatrix);

    Matrix result = tasks.task1();

    // Check the result after Task 1
    EXPECT_EQ(result[0][0], 0);
    EXPECT_EQ(result[0][1], 2);
    EXPECT_EQ(result[0][2], 0);
    EXPECT_EQ(result[1][0], 0);
    EXPECT_EQ(result[1][1], 5);
    EXPECT_EQ(result[1][2], 0);
    EXPECT_EQ(result[2][0], 0);
    EXPECT_EQ(result[2][1], 8);
    EXPECT_EQ(result[2][2], 0);
}

TEST(TasksTest, Task2Test) {
    Matrix inputMatrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, 3, 3};
    Tasks tasks(inputMatrix);

    Matrix result = tasks.task2();

    // Check the result after Task 2
    EXPECT_EQ(result.getSize(), 2);  // Assuming two rows meet the condition
    EXPECT_EQ(result[0][0], 1);
    EXPECT_EQ(result[0][1], 2);
    EXPECT_EQ(result[0][2], 3);
    EXPECT_EQ(result[1][0], 7);
    EXPECT_EQ(result[1][1], 8);
    EXPECT_EQ(result[1][2], 9);
}



int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
