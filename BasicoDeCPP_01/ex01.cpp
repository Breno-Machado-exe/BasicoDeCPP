//Enunciado no Readme
/*
Volume de um copo:
    V = Area da base × altura
    Area da base = π × R²
    π ≅ 3,14
*/
#include <iostream>
#define PI 3.14
using namespace std;

int main ()
{
    int r, h; // variável para raio e altura 
    float v; // variável para volume
    r = 6/2 ;
    h = 12 ;
    v = ( ( r * r) * PI ) * h;
    cout << "O volume eh " << v <<endl;
    
    return 0;
}
/* 
Notas de execução:
    - Tinha esquecido de declarar v como float. Ele vai receber um valor decimal, então não pode ser int
    - No define eu tinha escrito 3,14 , o que não existe. Deve ser 3.14
*/