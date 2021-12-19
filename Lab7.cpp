#include "Lab7.hpp"
#include <iostream>
#include <climits>
#include <algorithm>


using namespace std;




int main() {
    int n;
    cin >> n;
    int arr[N][N];
    ArrRead(arr, n, n);
    if (SumNum(GetMin(arr, n, n)) == SumNum(GetMax(arr, n, n)))ArrSort(arr, n, n);
    ArrPrint(arr, n, n);
    return 0;
}