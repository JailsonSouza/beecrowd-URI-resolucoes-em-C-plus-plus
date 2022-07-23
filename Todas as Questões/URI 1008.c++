#include <bits/stdc++.h>

using namespace std;

int main() {
	int num, num_h;
    double val_h, salario;
    cout << fixed << setprecision(2);
    cin >> num;
    cin >> num_h;
    cin >> val_h;
 
    salario = (num_h * val_h);
    
    cout << "NUMBER = " << num << endl;
    cout << "SALARY = U$ " << salario << endl;
    return 0;
}