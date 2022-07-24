#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, n100, n50, n20, n10, n5, n2, n1, rest100, rest50, rest20, rest10, rest5,rest2, 
    rest1, mrest100, mrest50, mrest25, mrest10, mrest5, m100, m50, m25, m10, m5, m1, B, m;
    double valor, D, E;

    cin >> valor;

    n = valor;
    n100 = n / 100;
    rest100 = n % 100;
    n50 = rest100 / 50;
    rest50 = rest100 % 50;
    n20 = rest50 / 20;
    rest20 = rest50 % 20;
    n10 = rest20 / 10;
    rest10 = rest20 % 10;
    n5 = rest10 / 5;
    rest5 = rest10 % 5;
    n2 = rest5 / 2;
    m100 = rest5 % 2;

    E = valor * 100;

    B = (int) E;

    m = B%100;

    m50 = m / 50;
    mrest50 = m % 50;
    m25 = mrest50 / 25;
    mrest25 = mrest50 % 25;
    m10 = mrest25 / 10;
    mrest10 = mrest25 % 10;
    m5 = mrest10 / 5;
    m1 = mrest10 % 5;

    cout << "NOTAS:" << endl;
    cout << n100 << " nota(s) de R$ 100.00" << endl;
    cout << n50 << " nota(s) de R$ 50.00" << endl;
    cout << n20 << " nota(s) de R$ 20.00" << endl;
    cout << n10 << " nota(s) de R$ 10.00" << endl;
    cout << n5 << " nota(s) de R$ 5.00" << endl;
    cout << n2 << " nota(s) de R$ 2.00" << endl;
    
    cout << "MOEDAS:" << endl;
    cout << m100 << " moeda(s) de R$ 1.00" << endl;
    cout << m50 << " moeda(s) de R$ 0.50" << endl;
    cout << m25 << " moeda(s) de R$ 0.25" << endl;
    cout << m10 << " moeda(s) de R$ 0.10" << endl;
    cout << m5 << " moeda(s) de R$ 0.05" << endl;
    cout << m1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}