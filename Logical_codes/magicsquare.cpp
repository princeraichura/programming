#include <bits/stdc++.h>
using namespace std;

int magic_sqare[50][50];      // Gobal array declaration initialized with all 0's

int main() {
    int n, r, c, magic_sum;
    cout << "Please enter odd dimension number for the matrix: ";
    cin >> n;

    r = 0; c = (n / 2); magic_sum = 0;
    
    cout << "So the pre-calculated magic sum is " << n * (n * n + 1) / 2 << endl;
    cout << endl << "Initializing the content of the magic square: " << endl;
    for (int i = 1; i <= n * n; i++) {
        magic_sqare[r][c] = i;
        if (r == c) magic_sum += magic_sqare[r][c];
        r--; c++;
        if (r == -1 && c == n) {r += 2; c--;}  // corner logic
        else if (r == -1) {r = (n - 1);}       // row-wise folding
        else if (c == n) {c = 0;}              // col-wise folding
        else if (magic_sqare[r][c] != 0) {r += 2; c--;}  // pre-occupied logic
    }

    cout << endl << "Displaying the content of the magic square: " << endl;
    
    for (r = 0; r < n; r++) {
        for (c = 0; c < n; c++) {
            cout << setw(5);
            cout << magic_sqare[r][c];
        }
        cout << endl;
    }

    cout << endl << "So the calculated magic sum is " << magic_sum << endl;
    cout << endl << "End of the program...";
}
