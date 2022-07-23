#include <bits/stdc++.h>

using namespace std;

int main() {
    string nome;
    double sal_f, mont_v, sal_m, total;

    cin >> nome;
    cin >> sal_f;
    cin >> mont_v;

    sal_m = ((mont_v * 15) / 100);
    total = (sal_f + sal_m);

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << total << endl;

    return 0;
}