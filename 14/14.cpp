#include <iostream>
#include <cmath>
using namespace std;

float Long(float x1, float x2, float y1, float y2);

int main() {
    setlocale(LC_CTYPE, "rus");
    float Ax, Ay, Bx, By, Cx, Cy;
    for (int i = 0; i < 2; i++) {
        cout << "Enter: Ax: ";
        cin >> Ax;
        cout << "Enter: Ay: ";
        cin >> Ay;
        cout << "Enter: Bx: ";
        cin >> Bx;
        cout << "Enter: By: ";
        cin >> By;
        cout << "Enter: Cx: ";
        cin >> Cx;
        cout << "Enter: Cy: ";
        cin >> Cy;

        float AB = Long(Ax, Ay, Bx, By);
        float AC = Long(Ax, Ay, Cx, Cy);
        float BC = Long(Bx, By, Cx, Cy);
        cout << AB << endl << AC << endl << BC << endl;
        float P = (AB+AC+BC)/2;

        float S = sqrt(P*((P-AB)*(P-AC)*(P-BC)));
        cout << "S = " << S << endl;
    }
}

float Long(float x1, float y1, float x2, float y2) {
    return sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));
}
