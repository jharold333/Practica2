#include <iostream>
#include <algorithm>
/*
Las permutaciones lexicográficas son permutaciones ordenadas numérica o alfabéticamente, por
7
ejemplo las permutaciones lexicográficas de 0,1 y 2 son: 012, 021, 102, 120, 201, 210. Escribir un programa que
reciba un número n y halle la enésima permutación lexicográfica de los números entre 0 y 9.
Ejemplo: para n= 1000000, la permutación lexicográfica es 2783915460.
Nota: la salida del programa debe ser:
La permutacion numero 1000000 es: 2783915460.
*/

using namespace std;



int main()
{   int a[10]={0,1,2,3,4,5,6,7,8,9},k=1;
    int n=0;
    cout<<"Ingrese el valor de n: ";cin>>n;

    while(k!=n) {next_permutation(a,a+10);k++;}
    cout<<"La permutacion numero: "<<n<<" es: ";
    for(int i=0;i<10;i++){
        cout<<a[i];}
    cout<<endl;
    return 0;
}
