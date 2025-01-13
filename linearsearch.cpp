#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++)
        if (arr[i] == target) return i;
    return -1;
}

int main() {
    int arr[] = {1, 3, 4, 8, 7, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << linearsearch(arr, n, 9) << endl;

    return 0;
}
