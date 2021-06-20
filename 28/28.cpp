#include <iostream>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");
    srand(time(NULL));

    int n;
    cin >> n;
    int* arr = new int[n]; //int arr[n]; // g++
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n-1; i++) {
        for (int x = 0; x < n-i-1; x++) {
            if (arr[x] > arr[x+1]) {
                int buffer = arr[x+1];
                arr[x+1] = arr[x];
                arr[x] = buffer;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
