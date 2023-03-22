#include <iostream>
#include <array>
// Merges two subarrays of array[].

// First subarray is arr[begin..mid]

// Second subarray is arr[mid+1..end]

void merge(int array[], int const left, int const mid, int const right)
{
    int const subarrayone = mid - left + 1;
    int const subarraytwo = right - mid;

    // Create temp arrays

    int *leftarray = new int[subarrayone],
    *rightarray = new int[subarraytwo];

    // Copy data to temp arrays leftarray[] and rightarray[]
    for (int i = 0; i < subarrayone; i++)
        leftarray[i] = array[left + i];
    for (int j = 0; j < subarraytwo; j++)
        rightarray[j] = array[mid + 1 + j];
    int indexofsubarrayone = 0, // Initial index of first sub-array
    indexofsubarraytwo = 0; // Initial index of second sub-array
    int indexofmergedarray = left; // Initial index of merged array

    // Merge the temp arrays back into array[left..right]

    while (indexofsubarrayone < subarrayone && indexofsubarraytwo < subarraytwo) {
        if (leftarray[indexofsubarrayone] <= rightarray[indexofsubarraytwo]) {
            array[indexofmergedarray] = leftarray[indexofsubarrayone];
            indexofsubarrayone++;
        }
        else {
            array[indexofmergedarray] = rightarray[indexofsubarraytwo];
            indexofsubarraytwo++;
        }
    indexofmergedarray++;
}

// Copy the remaining elements of

// left[], if there are any
    while (indexofsubarrayone < subarrayone) {

        array[indexofmergedarray] = leftarray[indexofsubarrayone];
        indexofsubarrayone++;
        indexofmergedarray++;
    }

// Copy the remaining elements of

// right[], if there are any
    while (indexofsubarraytwo < subarraytwo) {
        array[indexofmergedarray] = rightarray[indexofsubarraytwo];
        indexofsubarraytwo++;
        indexofmergedarray++;
    }
}

// beg is for left index and end is

// right index of the sub-array

// of arr to be sorted */

void mergesort(int array[], int const beg, int const end)
{
    if (beg >= end)
        return; // Returns recursivly

    int mid = beg + (end - beg) / 2;

    mergesort(array, beg, mid);
    mergesort(array, mid + 1, end);
    merge(array, beg, mid, end);
}

// Function to print an array

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
}

int main()
{
    int arr[] = { 15, 9, 12, 2, 11, 18 };
    int arrsize = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Array before sorting \n";
    printarray(arr, arrsize);
    mergesort(arr, 0, arrsize - 1);
    std::cout << "\nArray after sorting \n";
    printarray(arr, arrsize);
    return 0;

}