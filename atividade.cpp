#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int pow(int, int);
int fatorial(int);

int main()
{
    int iBase, iExpoente, iFatorial;
    
    cout << "Insira a base: ";
    cin >> iBase;
    
    cout << "Insira o expoente: ";
    cin >> iExpoente;
    
    int iResultado1 = pow(iBase, iExpoente);
    
    cout << "Resultado da exponenciação: " << iResultado1 << endl;
    
    cout << "===============================================" << endl;

    cout << "Insira o número (para o fatorial): ";
    cin >> iFatorial;

    int iResultado2 = fatorial(iFatorial);

    cout << "Resultado do fatorial: " << iResultado2 << endl;

    cout << "===============================================" << endl;

    return 0;
}

int pow(int iBase, int iExpoente)
{
    int iResultado = 1;
    
    for(int i = 1; i <= iExpoente; i++)
    {
        iResultado *= iBase;
    }
    
    return iResultado;
}


int fatorial(int iNum)
{

    if (iNum == 0) return 1;

    int iFatorial = 1;

    for (int i = 1; i <= iNum; i++)
    {
        iFatorial *= i;
    }

    return iFatorial;

}