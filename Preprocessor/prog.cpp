#define INTEGER

#include "function.h"


int main() {
    const int size = 10;
    int arr[size];

    FillArray(arr, size);
    ShowArray(arr, size);

    cout << "Min: " << FindMin(arr, size) << endl;
    cout << "Max: " << FindMax(arr, size) << endl;

    SortArray(arr, size);
    ShowArray(arr, size);

    EditArray(arr, size, 0, 99);
    ShowArray(arr, size);

    return 0;
}