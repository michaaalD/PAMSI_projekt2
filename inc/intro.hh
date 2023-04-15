#pragma once

#include <algorithm>
#include <cmath>

#include "../inc/quick_sort..hh"



void insertionSort(int* arr, int start, int end) 
{
    int key;  
    int i, j;
    for(i = start + 1; i < end; i++) 
    {
        key = arr[i]; 
        j = i - 1;
        
        while (j >= start && key < arr[j]) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}



void heapify(int* arr, int heap_size, int i) 
{
    int temp;
    int largest, l = 2 * i, r = (2 * i) + 1;
    if(l <= heap_size && arr[l] > arr[i])
        largest = l;
    else
        largest = i;
    if(r <= heap_size && arr[r] > arr[largest])
        largest = r;
    if(largest != i) 
    {
        temp = arr[largest];
        arr[largest] = arr[i];
        arr[i] = temp;
        heapify(arr, heap_size, largest);
    }
}



void heapSort(int* arr, int heap_size) 
{
    int temp;
    for(int i = heap_size / 2; i > 0; i--)
       {
        heapify(arr, heap_size, i);
       }
    for(int i = heap_size; i > 1; i--) 
    {
        temp = arr[i];
        arr[i] = arr[1];
        arr[1] = temp;
        heap_size--;
        heapify(arr, heap_size, 1);
    }
}

void introSort(int* arr, int start, int end, int maxdepth) 
{
    if(maxdepth <= 0) 
    {
        heapSort(arr, end - start);
        return;
    }
    int i = Partition(arr, start, end);
    if(i > 9)
    {
        introSort(arr, start, i, maxdepth - 1);
    }
    if(end - i > 9)
    {
        introSort(arr, i + 1, end, maxdepth - 1);
    }
}

void hybridIntroSort(int* arr, int start, int end) 
{
    introSort(arr, start, end, (2 * log(end - start)));
    insertionSort(arr, start, end);
}



