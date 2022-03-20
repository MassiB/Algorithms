#include <iostream>
#include "sort.hpp"

void print(const int * const arr, const std::size_t size){
    if (size <= 0) return;
    std::cout << "[";
    for (unsigned int i(0); i < size - 1; ++i)
        std::cout << arr[i] << " ";
    std::cout << arr[size - 1] << "]\n";    
}

int* GenerateData(const std::size_t size)
{
    int *arr = new int[size];
    for (unsigned int i(0); i < size; ++i)
        arr[i] = std::rand() % 100;
    return arr;
}

int main()
{
    const std::size_t size = 10;
    int *arr = GenerateData(size);
    print(arr,size);
    BinaryInsertionSort(arr, size);
    print(arr,size); 
    delete[] arr;

    return (0);
}