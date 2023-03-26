#include <iostream>
#include <conio.h>

/*
Un cuadrado mágico es una matriz de números enteros sin repetir, en la que la suma de los números
en cada columna, cada fila y cada diagonal principal tienen como resultado la misma constante. Escriba un programa
que permita al usuario ingresar una matriz cuadrada, imprima la matriz y verifique si la matriz es un cuadrado
mágico.
Nota: un ejemplo de cuadrado mágico es el siguiente:
4 9 2
3 5 7
8 1 6
*/

using namespace std;

int main()
{
    int grado, i, j, suma, aux;
    cout<<"CUADRADO MAGICO"<<endl;
    cout<<"A continuacion se le iran dando los pasos pasos para desarrollar un cuadrado magico y verificarlo"<<endl;
    cout<<"Para que el cuadrado magico sea valido, la suma de sus filas, columnas y diagnales deben de ser iguales"<<endl;
    cout<<"Ingrese el grado del cuadrado magico: ";
    cin>>grado;
    if(grado<3){
        cout<<"El grado del cuadrado magico debe ser mayor a 3"<<endl;
        return 0;
    }
    int matrix[grado][grado], comp[grado], compb[grado];
    cout<<"A continuacion comience a rellenar su cuadrado magico"<<endl;
    suma = ((grado*(grado*grado+1))/2);
    cout<<"Recuerde que la suma de cada fila/columna es: "<<suma<<endl;
    for(i=0;i<grado;i++)
    {
        for(j=0;j<grado;j++)
        {
            matrix[i][j]=0;
        }
    }
    for(i=0;i<grado;i++)
    {
        comp[i]=0;
    }
    for(i=0;i<grado;i++)
    {
        compb[i]=0;
    }
    for(i=0; i<grado; i++)
    {
        for(j=0;j<grado;j++)
        {
            aux=0;
            cout<<"Ingrese el valor ["<<i<<"]["<<j<<"]:";
            cin>>aux;
            matrix[i][j]=aux;
        }
    }
    for(i=0;i<grado;i++)
    {
        for(j=0;j<grado;j++)
        {
            comp[i] = comp[i]+matrix[i][j];
        }
    }
    for(i=0;i<grado;i++)
    {
        for(j=0;j<grado;j++)
        {
            compb[i]=compb[i]+matrix[j][i];
        }
    }
    for(i=0;i<grado;i++)
    {
        if(comp[i]!=suma)
        {
            cout<<"Su cuadrado magico no es valido"<<endl;
            getch();
        }
        for(i=0;i<grado;i++)
        {
            for(j=0;j<grado;j++)
            {
                cout<<"\t"<<matrix[i][j];
            }
            cout<<endl<<endl;
        }
        return 0;
    }
    for(i=0;i<grado;i++)
    {
        if(compb[i]!=suma)
        {
            cout<<"Su cuadrado magico no es valido"<<endl;
            getch();

        }
        for(i=0;i<grado;i++)
        {
            for(j=0;j<grado;j++)
            {
                cout<<"\t"<<matrix[i][j];
            }
            cout<<endl<<endl;
        }
        return 0;
    }
    cout<<"\nFelicitaciones"<<endl;
    cout<<"Su cuadrado magico es valido"<<endl;
    getch();
    for(i=0;i<grado;i++)
    {
        for(j=0;j<grado;j++)
        {
            cout<<"\t"<<matrix[i][j];
        }
        cout<<endl<<endl;
    }
    getch();
}

