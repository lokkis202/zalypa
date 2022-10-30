#include "Array.h"
#include <iostream>
using namespace std;

int main() // хаха твоя прога не оч 
// пфф, а ты попробуй лучше написать
{
    double array[7] = { 5, 3, 7, 9, 0, 1, 7 };
    int length = size(array);

    cout << "Array after bubble sorting:\n";
    printArray(array, length);

    sortArray(array, length);

    cout << "Array before bubble sorting:\n";
    printArray(array, length);
}

double* sortArray(double* array, int length)
{
    double element;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                element = array[j];
                array[j] = array[j + 1];
                array[j + 1] = element;
            }
        }
    }
    return array;
}

void printArray(double* array, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << ' ';
    }
    cout << endl;
}