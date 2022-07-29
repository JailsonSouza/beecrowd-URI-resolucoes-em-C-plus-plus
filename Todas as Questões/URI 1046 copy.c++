#include <bits/stdc++.h>

using namespace std;

int main() {
    int hi, hf;

    cin >> hi >> hf;

    if (hi > hf){
        cout << "O JOGO DUROU " << ((24 - hi) + hf) << " HORA(S)" << endl;    
    }else if(hi < hf) {
        cout << "O JOGO DUROU " << (hf - hi) << " HORA(S)" << endl;
    }else {
        cout << "O JOGO DUROU 24 HORA(S)" << endl; 
    }
}