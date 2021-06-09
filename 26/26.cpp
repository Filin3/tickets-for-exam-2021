#include <iostream>
using namespace std;

int Fib(int n);

int main() {
    setlocale(LC_CTYPE, "rus");
    int n;
    int *linker; 
    cin >> n;
    linker = &n;
    cout << Fib(*linker);
}

int Fib(int n) {
    if (n == 1 || n == 2) return 1;
    return Fib(n - 1) + Fib(n - 2);
} 

