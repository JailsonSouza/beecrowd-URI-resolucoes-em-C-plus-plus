#include <bits/stdc++.h>

using namespace std;

int main() {
    int n1, n2;

    cin >> n1 >> n2;
    
    if ((n2 % n1 == 0) || (n1 % n2 == 0)){
        cout << "Sao Multiplos" << endl;

    } else{
        cout << "Nao sao Multiplos" << endl;
    }

}