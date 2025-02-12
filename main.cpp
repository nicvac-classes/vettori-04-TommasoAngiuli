#include <iostream>
using namespace std;
int main() 
{
    srand(time(0));
    int n, i, pari, max, min, imin, imax;
    do {
        cout << "inserisci la dimensione del vettore" << endl;
        cin >> n;
    } while (n <= 0);
    int v[n];
    for (i = 0; i <= n - 1; i++) {
        v[i] = rand() % 1001;
    }
    pari = 0;
    min = v[0];
    max = v[0];
    imin = 0;
    imax = 0;
    for (i = 0; i <= n - 1; i++) {
        if (v[i] % 2 == 0) {
            pari = pari + 1;
        }
    }
    for (i = 0; i <= n - 1; i++) {
        if (v[i] < min) {
            min = v[i];
            imin = i;
        }
    }
    for (i = 0; i <= n - 1; i++) {
        if (v[i] > max) {
            max = v[i];
            imax = i;
        }
    }
    cout << "sono stati generati " << pari << " numeri pari, il numero più piccolo è " << min << " che si trova nella cella " << imin << " e il numero più grande è " << max << " che si trova nella cella " << imax << endl;
    return 0;
}