#ifndef SORT_HPP_
#define SORT_HPP_

#include <algorithm>

void SelectionSort(int * const arr, const std::size_t size);
void BubbleSort(int * const arr, const std::size_t size);
void InsertionSort(int * const arr, const std::size_t size);
void BinaryInsertionSort(int * const arr, const std::size_t size);
void MergeSort(int * const arr, const std::size_t size);

#endif