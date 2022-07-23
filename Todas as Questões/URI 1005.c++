#include <bits/stdc++.h>

using namespace std;

int main() {
	double a, b, m;

    cin >> a;
    cin >> b;

    m = (((a * 3.5) + (b * 7.5)) / 11);
    cout << fixed << setprecision(5); 
    cout << "MEDIA = " << m << endl;
    return 0;
}