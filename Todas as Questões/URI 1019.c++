#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, h, rh, m, s;

    cin >> n;
    
    h = (n / 3600);
    rh = (n % 3600);
    m = (rh / 60);
    s = (rh % 60);

    cout << h << ":" << m << ":" << s << endl;
    return 0;
}