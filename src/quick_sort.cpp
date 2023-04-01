#include "../inc/quick_sort..hh"


int Partition(int *array,int start,int end)
{
    int pivot = array[end];        // pivot na ostatni element tablicy
    int indexPartition = start;    // indeks pomocniczy startuje od 0

    for(int i=start; i < end;i++)  // iteracja po kazdym elemencie az dojdzie do pivota
    {
        if(array[i] <= pivot){     // sprawdzenie czy jest mniejsze od pivota
                                 // jezeli tak to zamiana miejscami z elementem poprzendim
            int temp = array[i];
            array[i] = array[indexPartition];
            array[indexPartition] = temp;
            indexPartition++;                           // indeks przechodzi na kolejny element
        }
    }
    //std::swap(array[indexPartition],array[end]);
    int temp = array[indexPartition];
    array[indexPartition] = array[end];
    array[end] = temp;
    return indexPartition;

}

void Quicksort(int *array, int start, int end)
{
    if(start < end)
    {
        int partitionIndex = Partition(array,start,end);
        Quicksort(array,start,partitionIndex-1);
        Quicksort(array, partitionIndex+1, end);
    }
}