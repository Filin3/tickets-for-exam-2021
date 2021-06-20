#include <iostream>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	srand(time(0));
	int N;
	int max = 0;
	int min = 100;
	cin >> N;
	int** matrix = new int*[N];
	for (int i = 0; i < N; i++) {
		matrix[i] = new int[N];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			string space;
			matrix[i][j] = rand() % 100;
			if (matrix[i][j] > max) max = matrix[i][j];
			if (matrix[i][j] < min) min = matrix[i][j];
			if (matrix[i][j] < 10) {
				space = "  ";
			}
			else {
				space = " ";
			}
			cout << matrix[i][j] << space;
		}
		cout << endl;
	}
	cout << "min: " << min << endl << "max: " << max;
}