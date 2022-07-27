#include <bits/stdc++.h>

using namespace std;

int main() {
    double n1, n2, n3;

    cin >> n1 >> n2 >> n3;
    
    cout << fixed << setprecision(1);
    if (((n1+n2) > n3) && ((n2+n3) > n1) && ((n1+n3)> n2)){
        float per;
        per = (n1+n2+n3);
        cout << "Perimetro = " << per << endl;
    } else{
        float are;
        are = (((n1+n2)*n3)/2);
        cout << "Area = " << are << endl;
    }
}