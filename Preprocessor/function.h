#pragma once
#include <iostream>
using namespace std;

void FillArrayInt(int* arr, int size);
void ShowArrayInt(const int* arr, int size);
int FindMinInt(const int* arr, int size);
int FindMaxInt(const int* arr, int size);
void SortArrayInt(int* arr, int size);
void EditArrayInt(int* arr, int size, int index, int value);

void FillArrayChar(char* arr, int size);
void ShowArrayChar(const char* arr, int size);
char FindMinChar(const char* arr, int size);
char FindMaxChar(const char* arr, int size);
void SortArrayChar(char* arr, int size);
void EditArrayChar(char* arr, int size, int index, char value);

void FillArrayDouble(double* arr, int size);
void ShowArrayDouble(const double* arr, int size);
double FindMinDouble(const double* arr, int size);
double FindMaxDouble(const double* arr, int size);
void SortArrayDouble(double* arr, int size);
void EditArrayDouble(double* arr, int size, int index, double value);

#ifdef INTEGER
#define FillArray FillArrayInt
#define ShowArray ShowArrayInt
#define FindMin FindMinInt
#define FindMax FindMaxInt
#define SortArray SortArrayInt
#define EditArray EditArrayInt
#elif defined(CHAR)
#define FillArray FillArrayChar
#define ShowArray ShowArrayChar
#define FindMin FindMinChar
#define FindMax FindMaxChar
#define SortArray SortArrayChar
#define EditArray EditArrayChar
#elif defined(DOUBLE)
#define FillArray FillArrayDouble
#define ShowArray ShowArrayDouble
#define FindMin FindMinDouble
#define FindMax FindMaxDouble
#define SortArray SortArrayDouble
#define EditArray EditArrayDouble
#endif