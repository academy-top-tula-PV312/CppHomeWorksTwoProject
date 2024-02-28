#include <iostream>

int* ArrayCreate(int size);
void ArrayInit(int* array, int size);
void ArrayPrint(int* array, int size);
int ArrayMinValue(int* array, int size);
int ArrayMaxValue(int* array, int size);

void MatrixExample();

int main()
{
    MatrixExample();

    

}

int* ArrayCreate(int size)
{
    //int* array{ new int[size] };
    //return array;
    return new int[size];
}

// int array[] <-> const int* array
void ArrayInit(int* array, int size)
{
    for (int i{}; i < size; i++)
        std::cout << *(array + i) << " ";
    std::cout << "\n";
}

void MatrixExample()
{
    const int rows{ 4 };
    const int columns{ 5 };

    int matrix[rows][columns]{};

    int count{};

    for (int i{}; i < rows; i++)
        for (int j{}; j < columns; j++)
            *(*(matrix + i) + j) = ++count;

    for (int i{}; i < rows; i++)
    {
        for (int j{}; j < columns; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << "\n";
    }
        

}
