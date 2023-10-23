#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float media = 0;
    float soma = 0;
    float numeros;
    float amount;

    while (true) {
        cout << "amount of items: ";
        cin >> amount;
        cout << "enter numbers: \n";
        for (int i = 0; i < amount; i++)
        {
            cin >> numeros;
            soma = soma + numeros;
        }
        media = soma / amount;
        cout << "a mediana eh: " << media << endl;

        media = 0;
        soma = 0;
        amount = 0;
        numeros = 0;
    }
    return 0;
}
// versao meu mau na sua pao v1.1 - a atualizacao que refinou o codigo !!!!! :ooooooo