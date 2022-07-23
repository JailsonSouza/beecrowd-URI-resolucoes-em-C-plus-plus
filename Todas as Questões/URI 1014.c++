#include <bits/stdc++.h>

using namespace std;

int main() {
    int dist;
    double tot_comb, cons_med;

    cin >> dist;

    cin >> tot_comb;
    
    cons_med = (dist / tot_comb);
    
    cout << fixed << setprecision(3);
    cout << cons_med << " km/l" << endl;
    return 0;
}