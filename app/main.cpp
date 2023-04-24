#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest/doctest.h"
#endif

#include <iostream>
#include "../inc/quick_sort..hh"
#include "../inc/merge_sort.hh"
#include "../inc/intro.hh"

#include <vector>

struct Film{
    float rating;
    std::string id;
    std::string title;
    bool operator <(Film compare){return (rating < compare.rating);};
    bool operator >(Film compare){return (rating > compare.rating);};
    bool operator <=(Film compare){return (rating <= compare.rating);}; 
};

int main()
{

   struct Film f[2];
   
   f[0].rating = 2;
   f[0].id = "dwa";
   f[1].rating = 1;
   f[1].id = "jeden";  
    /*
    for(int i=0; i < 2;i++){
        f[i].rating = 1;
        f[i].id = "i";
    }
*/
for(int i=0; i < 2;i++){
    std::cout <<  f[i].rating << " " << f[i].id <<std::endl;
    }

    if(f[0] > f[1]){
        std::cout << "True";
    }
    else{
        std::cout << "False";
    }

hybridIntroSort(f,0,1);


   for(int i=0; i < 2;i++){
    std::cout <<  f[i].rating << " " << f[i].id <<std::endl;
    }
   /*
int f[1000000];
for(int i=0; i < 1000000;i++){
        f[i] = rand() % 1000000 +1;
       
    }

    
    
    
    mergeSort(f,0,1000000);
    for(int i=0; i < 1000000; i++)
    {
        std::cout << f[i] << std::endl;
    }
*/
   return 0;
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
 
