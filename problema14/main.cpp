#include <iostream>

/*Elabore un programa que llene una matriz 5x5 con los números del 1 al 25 y la imprima, luego
imprima la matriz rotada 90, 180 y 270 grados.*/



using namespace std;

int fun0(int Aray[5][5]);
int fun90(int Aray[5][5]);
int fun180(int Aray[5][5]);
int fun270(int Aray[5][5]);

int main()
{
    int Aray[5][5]={1,2,3,4,5, 6,7,8,9,10, 11,12,13,14,15, 16,17,18,19,20, 21,22,23,24,25};
    int opt=0;
    cout<<"este programa rota una matris en los siguientes angulos: 0, 90, 180, 270. ingrese el grado de rotacion que desea aplicar a la matriz :";
    cin>>opt;

    switch (opt) {
        case 0: fun0(Aray);break;
        case 90: fun90(Aray);break;
        case 180: fun180(Aray);break;
        case 270: fun270(Aray);break;
        default:cout<<"el valor ingresado no es valido."<<endl;
    }
}
int fun0(int Aray[5][5]){
    for(int i=0;i<5;i++){
        for(int w=0;w<5;w++){
            cout<<Aray[i][w]<<" ";
        }
        cout<<endl;
    }
}

int fun90(int Aray[5][5]){
    for(int i=0,w=0;i<5 && w<5;i++){
        for(int w=4;w>-1;--w){
            cout<<Aray[w][i]<<" ";
        }
        cout<<endl;
    }
}

int fun180(int Aray[5][5]){
    for(int i=4;i>-1;--i){
        for(int w=4;w>-1;--w){
            cout<<Aray[i][w]<<" ";
        }
        cout<<endl;
    }
}

int fun270(int Aray[5][5]){
    for(int i=4;i>-1;i--){
        for(int w=0;w<5;w++){
            cout<<Aray[w][i]<<" ";
        }
        cout<<endl;
    }
}
