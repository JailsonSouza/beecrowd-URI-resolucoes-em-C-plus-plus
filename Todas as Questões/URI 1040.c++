#include <bits/stdc++.h>

using namespace std;

int main() {
    double n1, n2, n3, n4, media, noEx, medFinal;

    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;

    cout << fixed << setprecision(1);

    media = (((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10);
    cout << "Media: " << media << endl;

    if (media >= 7.0){
        cout << "Aluno aprovado." << endl;
    } else if (media < 5.0){
        cout << "Aluno reprovado." << endl;
    } else if ((media >= 5.0) && (media <= 6.9)){
        cout << "Aluno em exame." << endl;
        cin >> noEx;
        cout << "Nota do exame: " << noEx << endl;

        medFinal = ((media + noEx) / 2);
        if (medFinal >= 5.0){
            cout << "Aluno aprovado." << endl;
        } else if (medFinal <= 4.9){
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << medFinal << endl;
    }
    return 0;
}