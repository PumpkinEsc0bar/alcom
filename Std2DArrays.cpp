#include "Std2DArrays.h"

#include <iostream>
#include <ostream>

void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
    if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
        throw std::out_of_range("Array size is out of range");
    }
    int startValue = 1;
    for (int col = 0; col < columns; ++col) {
        if (col % 2 == 0) {
            // even down
            for (int row = 0; row < rows; ++row) {
                arr[row][col] = startValue++;
            }
        } else {
            // odd up
            for (int row = rows - 1; row >= 0; --row) {
                arr[row][col] = startValue++;
            }
        }
    }
}

void printArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
    if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
        throw std::out_of_range("Array size is out of range");
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
