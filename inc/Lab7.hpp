#pragma once
#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

const int N = 100;

void ArrRead(int arr[N][N], int n, int m);

    void ArrPrint(int arr[N][N], int n, int m);

    int GetMin(int arr[N][N], int n, int m);

    int GetMax(int arr[N][N], int n, int m);

    void ArrSort(int arr[N][N], int n, int m);

    int SumNum(int n);
