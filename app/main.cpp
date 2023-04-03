#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest/doctest.h"
#endif

#include <iostream>
#include "../inc/quick_sort..hh"
#include "../inc/merge_sort.hh"

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
    
    return 0;
}
