#include "Lab7.hpp"
#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;



void ArrRead(int arr[N][N], int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }
}

void ArrPrint(int arr[N][N], int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

int GetMin(int arr[N][N], int n, int m) {
    int mn = INT_MAX;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            mn = min(arr[i][j], mn);
        }
    }
    return mn;
}

int GetMax(int arr[N][N], int n, int m) {
    int mx = INT_MIN;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            mx = max(arr[i][j], mx);
        }
    }
    return mx;
}

void ArrSort(int arr[N][N], int n, int m) {
    for (int i = 0; i < n; ++i) {
        sort(arr[i], arr[i] + m);
    }
}

int SumNum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
