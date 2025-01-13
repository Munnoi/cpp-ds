#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int target) {
    int i = 0;
    int low = 0;
    int high = n - 1;
    int mid;
    
    while (low <= high) {
        mid = (low + high) / 2;
        
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else if (arr[mid] > target) high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << binarysearch(arr, n, 2) << endl;

    return 0;
}
