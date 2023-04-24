#ifndef QUICK_SORT
#define QUICK_SORT


#include <iostream>




/**
 * @brief funkcja dzielaca tablice na dwie czesci, mniejsza i wieksza od pivota
 * 
 * @param array tablica do posortowania
 * @param start indeks od ktorego zaczynamy sortowac, poczatkowo 0
 * @param end indeks ostatniego elementu, poczatkowo koniec tablicy
 * @return int indeks podzielnika tablicy
 */
template<typename T>
int Partition(T *array,int start,int end)
{
    T pivot = array[end];        // pivot na ostatni element tablicy
    int indexPartition = start;    // indeks pomocniczy startuje od 0

    for(int i=start; i < end;i++)  // iteracja po kazdym elemencie az dojdzie do pivota
    {
        if(array[i] <= pivot){     // sprawdzenie czy jest mniejsze od pivota
                                 // jezeli tak to zamiana miejscami z elementem poprzendim
            T temp = array[i];
            array[i] = array[indexPartition];
            array[indexPartition] = temp;
            indexPartition++;                           // indeks przechodzi na kolejny element
        }
    }
   
    T temp = array[indexPartition];
    array[indexPartition] = array[end];
    array[end] = temp;
    return indexPartition;                              //zwracanie indeksu podzielenia

}

/**
 * @brief funkcja rekurencji quicksorta
 * 
 * @param array tablica ktora chcemy posortowac
 * @param start indeks od ktorego zaczynamy sortowac, poczatkowo 0
 * @param end indeks ostatniego elementu, poczatkowo koniec tablicy
 */
template<typename T>
void Quicksort(T *array, int start, int end)
{
    if(start < end)
    {
        int partitionIndex = Partition(array,start,end);
        Quicksort(array,start,partitionIndex-1);
        Quicksort(array, partitionIndex+1, end);
    }
}


#endif