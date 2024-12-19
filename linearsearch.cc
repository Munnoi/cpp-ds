#include <iostream>
using namespace std;

class linearsearch {
    int a[50], n, loc;
public:
    linearsearch() { loc = -1; }
    void in();
    void out();
};

void linearsearch::in() {
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void linearsearch::out() {
    int target;
    cout << "Enter the element to be searched: ";
    cin >> target;
    
    for (int i = 0; i < n; i++)
        if (target == a[i]) {
            loc = i;
            break;
        }
    if (loc >= 0)
        cout << "Element found at pos " << loc+1 << endl;
    else
        cout << "Element not found!" << endl;
}

int main() {
    linearsearch ls;
    ls.in();
    ls.out();

    return 0;
}
