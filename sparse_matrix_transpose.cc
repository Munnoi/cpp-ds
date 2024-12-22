#include <iostream>
using namespace std;

void display(int s[][3], int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < 3; j++)
			cout << s[i][j] << " ";
		cout << endl;
	}
}

void transposeSparse(int s[][3], int t[][3], int n, int k, int m) {
	int q = 1;
	for (int i = 1; i < n; i++)
		for (int j = 1; j < k; j++) {
			t[q][0] = s[j][1];
			t[q][1] = s[j][0];
			t[q][2] = s[j][2];
			q++;
		}
	t[0][0] = n;
	t[0][1] = m;
	t[0][2] = k - 1;
}

int main() {
	int a[20][20], s[20][3], t[20][3];
	int m, n, k = 1;

	cout << "Enter the size: ";
	cin >> m >> n;

	cout << "Enter the elements:" << endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			if (a[i][j] != 0) {
				s[k][0] = i;
				s[k][1] = j;
				s[k][2] = a[i][j];
				k++;
			}
		}
	s[0][0] = m;
	s[0][1] = n;
	s[0][2] = k - 1;

	cout << "Sparse matrix:" << endl;
	display(s, k);

	transposeSparse(s, t, n, k, m);
	cout << "Transpose of sparse matrix: " << endl;
	display(t, k);
	
	return 0;
}
