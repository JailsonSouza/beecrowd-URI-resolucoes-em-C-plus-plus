#include <bits/stdc++.h>

using namespace std;

int main()
{
    int hi, hf, mi, mf, hr=25, he=0;

    cin >> hi >> hf >> mi >> mf;

    if ((hi > hf) and (mi == mf)) {
        cout << "O JOGO DUROU " << ((hr - hi) + hf) << " HORA(S) E " << he << " MINUTO(S)" << endl;
    } else if ((hi > hf) and (mi > mf)) {
        cout << "O JOGO DUROU " << (((hr - hi) + hf)-1) << " HORA(S) E " << ((60 - mi) + mf) << " MINUTO(S)" << endl;
    } else if ((hi > hf) and (mi < mf)) {
        cout << "O JOGO DUROU',((hr - hi) + hf),'HORA(S) E',(mf-mi),'MINUTO(S)" << endl;
    }
    else if ((hi < hf) and (mi == mf))
    {
        cout << "O JOGO DUROU',(hf-hi),'HORA(S) E',(he),'MINUTO(S)" << endl;
    }
    else if ((hi < hf) and (mi > mf))
    {
        print('O JOGO DUROU',((hf-hi)-1),'HORA(S) E',((60 - mi) + mf),'MINUTO(S)'
    }
    else if ((hi < hf) and (mi < mf))
    {
        print('O JOGO DUROU', (hf - hi), 'HORA(S) E', (mf - mi), 'MINUTO(S)')
    }
    elif ((hi == hf) and (mi == mf)) : print('O JOGO DUROU', (hr), 'HORA(S) E', (he), 'MINUTO(S)')
                                           elif ((hi == hf) and (mi > mf)) : print('O JOGO DUROU', ((hr)-1), 'HORA(S) E', ((60 - mi) + mf), 'MINUTO(S)')
                                                                                 elif ((hi == hf) and (mi < mf)) : print('O JOGO DUROU 0 HORA(S) E', (mf - mi), 'MINUTO(S)')
}