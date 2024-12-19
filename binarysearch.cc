#include <iostream>
using namespace std;

class binarysearch {
    int a[50], n, loc;
public:
    binarysearch() { loc = -1; }
    void in();
    void out();
};

void binarysearch::in() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void binarysearch::out() {
    int beg, end, mid, target;
    cout << "Enter the element to be searched: ";
    cin >> target;
    beg = 0; end = n - 1;
    while (beg <= end) {
        mid = (beg + end) / 2;
        if (target == a[mid]) { loc = mid; break; }
        else if (target < a[mid]) end = mid - 1; // target will be on the left of the mid
        else beg = mid + 1; // target will be on the right of the mid
    }
    if (loc >= 0)
        cout << "Element found at pos " << loc+1 << endl;
    else
        cout << "Element not found!" << endl;
}

int main() {
    binarysearch bs;
    bs.in();
    bs.out();

    return 0;
}
