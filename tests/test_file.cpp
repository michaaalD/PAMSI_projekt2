
#include "doctest/doctest.h"
#include "quick_sort..hh"
#include "merge_sort.hh"

// This is all that is needed to compile a test-runner executable.
// More tests can be added here, or in a new tests/*.cpp file.

TEST_CASE("Sortowanie quick_sort")
{
    int a[] = {10,6,4,2,8,5,9,2,5};
    int c[] = {2,2,4,5,5,6,8,9,10}; 
    int end = (sizeof(a)/sizeof(int)) - 1;
    
    Quicksort(a,0,end);
    for(int i=0; i < end; i++)
    {
       CHECK(a[i] == c[i]);
    }
}

TEST_CASE("Sortowanie przez scalanie")
{
    int a[] = {3,5,0,1,6};
    int c[] = {0,1,3,5,6};
    
    int last = (sizeof(a)/sizeof(int));
    
    mergeSort(a,0,last);
    for(int i=0; i < last; i++)
    {
        CHECK(a[i] == c[i]);
    }
    
}