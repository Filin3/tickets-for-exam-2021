#include <iostream>
using namespace std;

void drawLine(int lineIndex);

int main() {
    setlocale(LC_CTYPE, "rus");

    for (int i = 2; i < 10; i++) {
        drawLine(i);
    } 
}

void drawLine(int lineIndex) {
    for (int i = 2; i < 10; i++) {
        string space;
        if (i*lineIndex >= 10) {
            space = " ";
        } else {
            space = "  ";
        }
        cout << i*lineIndex << space;
    }
    cout << endl;
}