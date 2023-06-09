#ifndef MERGE_SORT
#define MERGE_SORT

#include <iostream>

template <typename T>
void merge(T* arr, int left, int mid, int right) 
{
    // dzielenie na dwie podtablice prawa i lewa
    T* temp = new T[right - left + 1];
    //iteratory dla tablic lewej/prawej/pomocniczej
    int l = left;
    int r = mid + 1;
    int t = 0;  

    //sortowanie
    while(l <= mid && r <= right)
        if(arr[r] < arr[l])
            temp[t++] = arr[r++];
        else
            temp[t++] = arr[l++];

    //przeppisyuwannie elementow z tablic dopoki sie nie skoncza
    if(l <= mid)
        while(l <= mid)
            temp[t++] = arr[l++];
    else
        while(r <= right)
            temp[t++] = arr[r++];

    //copy z tablicy temp do wlasciwej
    for(t = 0; t <= right - left; t++)
        arr[left + t] = temp[t];
    delete[] temp;
}

template <typename T>
void mergeSort(T* arr, int left, int right)
 {
    // dziele na 2 tablice az beda jednoelementowe
    if(left >= 0 && left < right) 
    {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // sscalanie podtablic az posortuje calosc
        merge(arr, left, mid, right);
    }
}
#endif
