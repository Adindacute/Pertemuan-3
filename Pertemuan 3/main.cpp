#include <iostream>

using namespace std;

int Minimum(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

int main() {
    int x, y;
    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai y: ";
    cin >> y;


    int Minimum(x, y);
    cout << "Nilai terkecil adalah: " << Minimum << endl;

    return 0;
}

