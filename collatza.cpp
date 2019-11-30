#include <iostream>

using namespace std;

int lengthCollatz(int n)
{
    int length = 1;
    while(n>1)
    {
        if (n%2 == 0)
            n/=2;
        else
            n = 3*n+1;
        length++;
    }
    return length;
}

int najwieksza(int tab[], int n)
{
    int maks = 0;
    int indeks;
    for (int i=1; i<=n; i++)
        if (maks < tab[i])
        {
            maks = tab[i];
            indeks = i;
        }

    return indeks;
}

int main()
{
    int tab[1001];

    for  (int i=1; i<=1000; i++)
        tab[i] = lengthCollatz(i);

    cout << najwieksza(tab,1000) << endl;
    cout << tab[najwieksza(tab,1000)];

    return 0;
}
