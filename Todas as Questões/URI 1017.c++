#include <bits/stdc++.h>

using namespace std;

int main() {
    int temp, vel_med;
    double quant_list;

    cin >> temp;
    cin >> vel_med;
    
    quant_list = ((vel_med / 12.0) * temp);

    cout << fixed << setprecision(3);
    cout << quant_list << endl;
    return 0;
}