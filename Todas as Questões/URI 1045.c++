#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, aux;

    cin >> a >> b >> c;
    if ((b>a)&&(b>c)){
      aux = b;
      b = a;
      a = aux;
    }
    if ((c>a)and(c>b)){
      aux = c;
      c = a;
      a = aux;
    }

    if (a >= (b+c)){
        cout << "NAO FORMA TRIANGULO" << endl;
    } else if ((a*a) == ((b*b)+(c*c))){
        cout << "TRIANGULO RETANGULO" << endl;
    }else if ((a*a) > ((b*b)+(c*c))){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    if ((a*a) < ((b*b)+(c*c))){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if ((a == b) and (b == c) and(c == a)){
        cout << "TRIANGULO EQUILATERO" << endl;
    }else if (((a == b) and (b == a)) or ((b == c) and (c == b)) or ((c == a) and (a == c))){
        cout << "TRIANGULO ISOSCELES" << endl;
    }
}