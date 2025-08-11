#include <bits/stdc++.h>

using namespace std;

// boa prática iniciar fora da função main() - preenhce com 0s
int a[1000000+10]; // declaro um vetor de inteiros com nome "a", e tamanho 10^6 + 10

int main()
{
    int n;
    cin >> n;
    int a[n]; // declaro um vetor de inteiros com nome "a", e tamanho n
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // recebo os valores em todas as posições de 0 até n - 1
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " "; // imprimo os valores na ordem inversa (de n - 1 até 0)
    }
    cout << endl;
    // ENTRADA:
    // 3
    // 3 7 6
    // SAÍDA: 6 7 3
}