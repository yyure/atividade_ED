#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int pow(int, int);

int main()
{
    int iBase, iExpoente;
    
    cout << "Insira a base: ";
    cin >> iBase;
    
    cout << "Insira o expoente: ";
    cin >> iExpoente;
    
    int iResultado = pow(iBase, iExpoente);
    
    cout << "Resultado da exponenciação: " << iResultado << endl;
    
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