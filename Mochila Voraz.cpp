
#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }

int Mochila(int M, int p[], int b[], int n)
{
    if (n == 0 || M == 0)
    {
        return 0;
    }

    if (p[n - 1] > M)
    {
        return Mochila(M, p, b, n - 1);
    }

    else
        return max(b[n - 1] + Mochila(M - p[n - 1], p, b, n - 1), Mochila(M, p, b, n - 1));

}

int main()
{
    int M = 10;
    

    int p[4] = {10,3,3,4};
    int b[4] = {10,1,1,1};

    int n = sizeof(b) / sizeof(b[0]);

    cout<< "EL Maximo Beneficio es " << Mochila(M, p, b, n);

}

