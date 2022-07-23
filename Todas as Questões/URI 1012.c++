#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c, area_tri, area_cir, area_tra, area_qua, area_ret;

    cin >> a >> b >> c;

    area_tri = ((a*c)/2);
    area_cir = (3.14159 * (pow(c,2)));
    area_tra = (((a+b)*c) / 2);
    area_qua = (pow(b, 2));
    area_ret = (a * b);
    
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << area_tri << endl;
    cout << "CIRCULO: " << area_cir << endl;
    cout << "TRAPEZIO: " << area_tra << endl;
    cout << "QUADRADO: " << area_qua << endl;
    cout << "RETANGULO: " << area_ret << endl;
    return 0;
}