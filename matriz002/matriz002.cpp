#include <iostream>
using namespace std;
//2) Crie um programa que receba valores do usuário para preencher uma matriz, e em seguida,
//exiba a soma dos valores dela e a soma dos valores da primeira diagonal, ou seja, diagonal principal.
#include <iostream>
using namespace std;
int main()
{
    double matriz[3][3], soma, somadiagonal;
    int lin, col;
    for (lin = 0; lin <= 2; lin++) {
        for (col = 0; col <= 2; col++) {
            cout << "digite um numero: ";
            cin >> matriz[lin][col];
        }
    }
    for (lin = 0; lin <= 2; lin++) {
        for (col = 0; col <= 2; col++) {
            if (col < 2) {
                cout << matriz[lin][col] << " ";
            }
            else {
                cout << matriz[lin][col] << endl;
            }
        }
    }
    soma = 0;
    for (lin = 0; lin <= 2; lin++) {
        for (col = 0; col <= 2; col++) {
            soma = matriz[lin][col] + soma;

        }
    }
    cout << "A soma eh: " << soma << endl;
    somadiagonal = 0;
    for (lin = 0; lin <= 2; lin++) {
        for (col = 0; col <= 2; col++) {
            if (lin == col) {
                somadiagonal = matriz[lin][col] + somadiagonal;
            }
        }
    }
    cout << "A soma na diagonal eh: " << somadiagonal;
    return(0);
}