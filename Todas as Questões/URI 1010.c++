#include <bits/stdc++.h>

using namespace std;

int main() {
    int  num_p1, quant_p1, num_p2, quant_p2;
    double val_p1, val_p2, total_p1, total_p2, total;

    cin >> num_p1 >> quant_p1 >> val_p1;
    cin >> num_p2 >> quant_p2 >> val_p2;

    total_p1 = (quant_p1 * val_p1);
    total_p2 = (quant_p2 * val_p2);
    total = (total_p1 + total_p2);

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}