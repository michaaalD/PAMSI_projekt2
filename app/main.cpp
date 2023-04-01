#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest/doctest.h"
#endif

#include <iostream>
#include "../inc/quick_sort..hh"

int main()

{

    int a[] = {7,2,1,6,8,5,3,4};
    int end = (sizeof(a)/sizeof(int)) - 1;
    
    Quicksort(a,0,end);
    for(int i=0; i < 7; i++)
    {
        std::cout << a[i] << std::endl;
    }

  
    
    return 0;
}
