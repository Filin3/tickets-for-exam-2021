#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");
    int A = 185/16;
    int B = 185/17;
    int C = 185/21;
    for (int x = 0; x <= A; x++) {
        for (int y = 0; y <= B; y++){
            for (int z = 0; z <= C; z++) {
                if (16*x+17*y+21*z == 185) {
                    cout << "16 кг: " << x << " 17 кг: " << y << " 21 кг: " << z << endl;
                }
            }
        }
    }
}