#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    for (int i = 100; i < 1000; i++) {
        int columnOne = i/100;
        int columnTwo = (i - (columnOne * 100)) / 10;
        int columnThree = i - (columnOne * 100) - (columnTwo * 10);
        
        if (columnOne % 2 == 0 && columnTwo % 2 == 0 && columnThree % 2 == 0) {
            cout << i << endl;
        }
    }
}