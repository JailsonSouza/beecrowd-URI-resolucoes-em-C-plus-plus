#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, ra, m, d;

    cin >> n;
    
    a = (n / 365);
    ra = (n % 365);
    m = (ra / 30);
    d = (ra % 30);

    cout << a << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;
    return 0;
}