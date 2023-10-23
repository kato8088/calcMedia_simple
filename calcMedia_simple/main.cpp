#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int media = 0;
    int soma = 0;
    int numeros;
    int amount;


    cout << "amount of items: \n";
    cin >> amount;
    cout << "enter number: \n";
    for (int i = 0; i < amount; i++)
    {
      //  cout << "Enter number: \n";
        cin >> numeros;
        soma = soma + numeros;
    }
    media = soma / numeros;
    cout << "a mediana eh: " << media << endl;
    return 0;
}