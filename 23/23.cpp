#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    int count = 0;
    for (int i = 100; i < 1000; i++) {
        int columnOne = i/100;
        int columnThree = i%100%10;
        
        if (columnOne == columnThree) {
            cout << i << endl;
            count++;
        }
    }
    cout << count;
}