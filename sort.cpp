#include "sort.hpp"

namespace 
{
    int BinarySearchIndex(const int * const arr, const int value, int from, int to){
        if (from >= to) return (arr[to] < value) ? to + 1 : to;
        int mid = (from + to) / 2;
        if (arr[mid] == value) return mid;
        if (arr[mid] > value) return BinarySearchIndex(arr, value, from, mid - 1);
        return BinarySearchIndex(arr, value, mid + 1, to);
    }
}

void SelectionSort(int * const arr, const std::size_t size){
    for (unsigned int i(0); i < size; ++i){
        for (unsigned int j(i); j < size; ++j){
            if (arr[i] > arr[j])
                std::swap(arr[i], arr[j]);
        }
    }
}

void BubbleSort(int * const arr, const std::size_t size){
    for (unsigned int i(1); i < size; ++i){
        for (unsigned int j(0); j < size - 1; ++j){
            if(arr[j] > arr[j+1])
                std::swap(arr[j], arr[j+1]);
        }
    }
}

void InsertionSort(int * const arr, const std::size_t size){
    for (unsigned int i(0); i < size; ++i){
        int j = i;
        while(j > 0){
            if (arr[j] < arr[j - 1])
                std::swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

void BinaryInsertionSort(int * const arr, const std::size_t size){
    for (unsigned int i(0); i < size; ++i){
        int val = arr[i];
        int index = BinarySearchIndex(arr, val, 0, i);
        
        for (int j = index; j < i + 1; ++j){
            int temp = arr[j];
            arr[j] = val;
            val = temp;
        }
    }
}