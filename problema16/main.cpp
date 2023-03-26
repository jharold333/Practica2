#include <iostream>


/*En una malla de 2x2, realizando únicamente movimientos hacia la derecha y hacia abajo hay 6
posibles caminos para llegar de la esquina superior izquierda a la inferior derecha como se observa en la Figura 7.*/

using namespace std;

int factorial(int);
int formula(int);
int main()
{
    int num=0;
    cout<<"Ingrese un numero entero positivo para la matriz cuadrada.:";
    cin>>num;
    cout<<"Para una malla de "<<num<<"x"<<num<<" puntos hay "<<formula(num)<<" caminos."<<endl;
    return 0;
}

int factorial(int num_mop){
    int num_fac=num_mop;
    for(int w=num_mop-1;w>1;w--){
        num_fac*=w;
    }
    return num_fac;
}
int formula(int num){
    int num_k=num*2;
    int combin=((factorial(num_k))/(factorial(num)*factorial(num_k-num)));
    return combin;


}
