#include "function.h"

void FillArrayInt(int* arr, int size) {
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100;
    }
}

void ShowArrayInt(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int FindMinInt(const int* arr, int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

int FindMaxInt(const int* arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

void SortArrayInt(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] > arr[j]) swap(arr[i], arr[j]);
        }
    }
}

void EditArrayInt(int* arr, int size, int index, int value) {
    if (index >= 0 && index < size) {
        arr[index] = value;
    }
}

void FillArrayChar(char* arr, int size) {
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        arr[i] = 'A' + rand() % 26;
    }
}

void ShowArrayChar(const char* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

char FindMinChar(const char* arr, int size) {
    char min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

char FindMaxChar(const char* arr, int size) {
    char max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

void SortArrayChar(char* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] > arr[j]) swap(arr[i], arr[j]);
        }
    }
}

void EditArrayChar(char* arr, int size, int index, char value) {
    if (index >= 0 && index < size) {
        arr[index] = value;
    }
}

void FillArrayDouble(double* arr, int size) {
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        arr[i] = static_cast<double>(rand() % 100) / 10.0;
    }
}

void ShowArrayDouble(const double* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

double FindMinDouble(const double* arr, int size) {
    double min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

double FindMaxDouble(const double* arr, int size) {
    double max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

void SortArrayDouble(double* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] > arr[j]) swap(arr[i], arr[j]);
        }
    }
}

void EditArrayDouble(double* arr, int size, int index, double value) {
    if (index >= 0 && index < size) {
        arr[index] = value;
    }
}