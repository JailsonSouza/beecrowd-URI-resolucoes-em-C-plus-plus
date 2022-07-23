#include <bits/stdc++.h>

using namespace std;

int main() {
    double volume, raio;

    cin >> raio;

    raio = pow(raio, 3);
    volume = ((4/3.0) * 3.14159 * raio);

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl;
    return 0;
}