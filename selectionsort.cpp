#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int arr[] = {7, 6, 5, 4, 3, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n - 1; i++) {
        int minidx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[minidx] > arr[j])
                minidx = j;    
            swap(arr[minidx], arr[i]);
        }
    }
    
    for (int i  = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}
