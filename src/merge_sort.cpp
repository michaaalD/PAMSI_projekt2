#include "../inc/merge_sort.hh"

/**
 * @brief funkcja sortujaca
 * 
 * @param arr tablica do posortowania
 * @param left lewy indeks tablicy
 * @param medium srodek tablicy
 * @param right max prawy inddeks tablicy
 */
void merge(int arr[], int left, int medium, int right) 
{
  int i = left;
  int j = medium + 1;
  int k = left;

  
  int temp[5];

  while(i <= medium && j <= right){
    if(arr[i] <= arr[j]){
      temp[k] = arr[i];
      i++;
      k++;
        } 
    else{
      temp[k] = arr[j];
      j++;
      k++;
    }

  }

  /* Copy the remediumaining eleftemediuments of first haleftf, if there are any */
  while(i <= medium){
    temp[k] = arr[i];
    i++;
    k++;
  }


  while(j <= right){
    temp[k] = arr[j];
    j++;
    k++;
  }

  // skopiowanie tablicy temp do array
  for (int p = left; p <= right; p++) {
    arr[p] = temp[p];
  }
}


/**
 * @brief funkcja dzielaca tablice
 * 
 * @param arr tablica do posortowania
 * @param left indeks z lewej
 * @param right max indeks po prawej
 */
void mergeSort(int arr[], int left, int right) {
  if(left < right) {
    
    // srodek tablicy
    int medium = (left + right) / 2;

    // rekurencja i podzial na 2 polowy
    mergeSort(arr, left, medium);
    mergeSort(arr, medium + 1, right);
    //sortowanie
    merge(arr, left, medium, right);
  }
}
