#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");
    int x;
    cin >> x;
    for (int i = 100; i < 1000; i++) {
        int columnOne = i / 100;
        int columnTwo = i % 100 / 10;
        int columnThree = i % 100 % 10;

        if (x >= (columnOne * columnTwo * columnThree)) {
            cout << i << endl;
        }
    }   
}