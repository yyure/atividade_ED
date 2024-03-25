#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int pow(int, int);
int fatorial(int);
float progressao(float, float, int);

int main()
{
    int iBase, iExpoente, iFatorial, iQtdTermos;
    float fPrimeiroTermo, fRazao;
    
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

    cout << "Insira o primeiro termo da P.A.: ";
    cin >> fPrimeiroTermo;
    
    cout << "Insira a razão da P.A.: ";
    cin >> fRazao;
    
    cout << "Insira a quantidade de termos: ";
    cin >> iQtdTermos;

    float fResultado3 = progressao(fPrimeiroTermo, fRazao, iQtdTermos);
    
    cout << "Soma dos termos: " << fResultado3 << endl;
    
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


float progressao(float fPrimeiroTermo, float fRazao, int iQtdTermos)
{
    float fTermoAtual = 0, fSoma = 0;
    
    for(int i = 1; i <= iQtdTermos; i++)
    {
        fTermoAtual += fRazao;
        fSoma += fTermoAtual;
    }
    
    return fSoma;
}
