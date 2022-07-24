#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, q;
    double p, tot;

    cin >> c >> q;
    
    if (c == 1){
        p = 4.00;
    } else if (c == 2){
        p = 4.50;
    } else if (c == 3){
        p = 5.00;
    } else if (c == 4){
        p = 2.00;
    } else if (c == 5){
        p = 1.50;
    }

    tot = p * q;
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << tot << endl;
    return 0;
}