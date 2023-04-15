#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest/doctest.h"
#endif

#include <iostream>
#include "../inc/quick_sort..hh"
#include "../inc/merge_sort.hh"
#include "../inc/intro.hh"

int main()

{
    /*
    int x[] = {7,2,1,6,8,5,3,4};
    int end = (sizeof(x)/sizeof(int)) - 1;
    
    Quicksort(x,0,end);
    for(int i=0; i < 7; i++)
    {
        std::cout << x[i] << std::endl;
    }
    */

    int a[] = {4,6,1,2,7};
    
    int last = (sizeof(a)/sizeof(int));
    
    mergeSort(a,0,last);
    for(int i=0; i < last; i++)
    {
        std::cout << a[i] << std::endl;
    }

    int x[] = {4,6,1,2,7};
    hybridIntroSort(x,0,4);
    for(int i=0; i < last; i++)
    {
        std::cout << x[i] << std::endl;
    }

/*
     float arr[]
        = { 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bucketSort(arr, n);
  
    std::cout << "Sorted array is \n";

    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
   */


    return 0;
}
