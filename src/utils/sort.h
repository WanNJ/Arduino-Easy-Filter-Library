/**
 * Created by Jack Wan on 5/7/18.
 */

#ifndef ARDUINO_EASY_FILTER_LIBRARY_SORT_H
#define ARDUINO_EASY_FILTER_LIBRARY_SORT_H

template<typename T>
void selectSort(T arr[], int n) {
    int iMin;
    // A temporary variable used to sort the array.
    T temp;

    for (int i=0;i<n-1;i++){
        iMin = i;
        for (int j=i+1;j<n;j++) {
            if (arr[j] < arr[iMin]) {
                iMin = j;
            }
        }
        if (iMin != i) {
            // The smallest item is somewhere else in the array so move it to this position
            temp = arr[i];
            arr[i] = arr[iMin];
            arr[iMin] = temp;
        }
    }
}

#endif //ARDUINO_EASY_FILTER_LIBRARY_SORT_H
