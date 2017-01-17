#include <iostream>
#include <assert.h>
#include <cstring>
using namespace std;
const int iN=9;



int iMatPrueba[iN][iN]= {{4,3,5,2,6,9,7,2,1},
    {6,8,2,5,7,1,4,9,3},
    {1,9,7,8,3,4,5,6,2},
    {8,2,6,1,9,5,3,4,7},
    {3,7,4,6,8,2,9,1,5},
    {9,5,1,7,4,3,6,2,8},
    {5,1,9,3,2,6,8,7,4},
    {2,4,8,9,5,7,1,3,6},
    {7,6,3,4,1,8,2,5,9}
};

string stemen="ABCDEFGHI";

void imprimeMatriz(const int iMatriz[][iN])
{
    cout<<"  1  2  3 4  5  6 7  8  9"<<endl;
    cout<<"  _  _  _ _  _  _ _  _  _  "<<endl;
    for(int i=0; i<iN; i++)
    {
        cout <<stemen[i]<<"|";
        for(int j=0; j<iN; j++)
        {
            if(j==8)
            cout<< iMatriz[i][j];
            else if(j<9)
            {
            if(j==2||j==5)
            cout<< iMatriz[i][j];
            else
            cout<< iMatriz[i][j]<<"  ";
            }

            if((j+1)%3==0)
                cout<<"|";
        }

            cout<<endl;
        if((i+1)%3==0)
            cout<<"  _  _  _ _  _  _ _  _  _  "<<endl;
    }
}

bool validarSudoku (const int iMatriz[][iN])
{
    int valor;
    bool t=true;
    ///Revisa en horizontal
    for(int i=0; i<iN; i++)
    {
        int Cantidad [9]= {0,0,0,0,0,0,0,0,0};
        valor=0;
        for(int j=0; j<iN; j++)
        {
            switch(iMatriz[i][j])
            {

            case 1:
                Cantidad [0]++;
                if (Cantidad[0]>>1)
                {

                    t=false;
                    cout<<"El sudoku es Incorrecto"<<endl;
                    cout<<"Error en posicion " <<stemen[i]<<","<<j+1<<" de manera horizontal "<<endl;
                    cout<<"Numero repetido "<<iMatriz[i][j]<<endl;
                    return t;
                }
                break;

            case 2:
                Cantidad [1]++;
                if (Cantidad[1]>>1)
                {
                    t=false;
                    cout<<"El sudoku es Incorrecto"<<endl;
                    cout<<"Error en posicion " <<stemen[i]<<","<<j+1<< " de manera horizontal "<<endl;
                    cout<<"Numero repetido "<<iMatriz[i][j]<<endl;
                    return t;
                }
                break;

            case 3:
                Cantidad [2]++;
                if (Cantidad[2]>>1)
                {
                    t=false;
                    cout<<"El sudoku es Incorrecto"<<endl;
                    cout<<"Error en posicion " <<stemen[i]<<","<<j+1 <<" de manera horizontal "<<endl;
                    cout<<"Numero repetido "<<iMatriz[i][j]<<endl;
                    return t;
                }
                break;

            case 4:
                Cantidad [3]++;
                if (Cantidad[3]>>1)
                {
                    t=false;
                    cout<<"El sudoku es Incorrecto"<<endl;
                    cout<<"Error en posicion " <<stemen[i]<<","<<j+1 <<" de manera horizontal "<<endl;
                    cout<<"Numero repetido "<<iMatriz[i][j]<<endl;
                    return t;
                }
                break;

            case 5:
                Cantidad [4]++;
                if (Cantidad[4]>>1)
                {
                    t=false;
                    cout<<"El sudoku es Incorrecto"<<endl;
                    cout<<"Error en posicion " <<stemen[i]<<","<<j+1<< " de manera horizontal "<<endl;
                    cout<<"Numero repetido "<<iMatriz[i][j]<<endl;
                    return t;
                }
                break;

            case 6:
                Cantidad [5]++;
                if (Cantidad[5]>>1)
                {
                    t=false;
                    cout<<"El sudoku es Incorrecto"<<endl;
                    cout<<"Error en posicion " <<stemen[i]<<","<<j+1 <<" de manera horizontal "<<endl;
                    cout<<"Numero repetido "<<iMatriz[i][j]<<endl;
                    return t;
                }
                break;

            case 7:
                Cantidad [6]++;
                if (Cantidad[6]>>1)
                {
                    t=false;
                    cout<<"El sudoku es Incorrecto"<<endl;
                    cout<<"Error en posicion " <<stemen[i]<<","<<j+1<< " de manera horizontal "<<endl;
                    cout<<"Numero repetido "<<iMatriz[i][j]<<endl;
                    return t;
                }
                break;

            case 8:
                Cantidad [7]++;
                if (Cantidad[7]>>1)
                {
                    t=false;
                    cout<<"El sudoku es Incorrecto"<<endl;
                    cout<<"Error en posicion " <<stemen[i]<<","<<j+1<< " de manera horizontal "<<endl;
                    cout<<"Numero repetido "<<iMatriz[i][j]<<endl;
                    return t;
                }
                break;

            case 9:
                Cantidad [8]++;
                if (Cantidad[8]>>1)
                {
                    t=false;
                    cout<<"El sudoku es Incorrecto"<<endl;
                    cout<<"Error en posicion " <<stemen[i]<<","<<j+1<< " de manera horizontal "<<endl;
                    cout<<"Numero repetido "<<iMatriz[i][j]<<endl;
                    return t;
                }
                break;
            }
        }
    }

    ///Revisa en vertical
    for(int i=0; i<iN; i++)
    {
        int Cantidad [9]= {0,0,0,0,0,0,0,0,0};
        valor=0;
        {
            for(int j=0; j<iN; j++)
                switch(iMatriz[j][i])
                {

                case 1:
                    Cantidad [0]++;
                    if (Cantidad[0]>>1)
                    {
                        t=false;
                        cout<<"El sudoku es Incorrecto"<<endl;
                        cout<<"Error en posicion " <<j+1<<","<<i+1<<" de manera Vertical "<<endl;
                        cout<<"Numero repetido "<<iMatriz[j][i]<<endl;
                        return t;
                    }
                    break;

                case 2:
                    Cantidad [1]++;
                    if (Cantidad[1]>>1)
                    {
                        t=false;
                        cout<<"El sudoku es Incorrecto"<<endl;
                        cout<<"Error en posicion " <<j+1<<","<<i+1<<" de manera Vertical "<<endl;
                        cout<<"Numero repetido "<<iMatriz[j][i]<<endl;
                        return t;
                    }
                    break;

                case 3:
                    Cantidad [2]++;
                    if (Cantidad[2]>>1)
                    {
                        t=false;
                        cout<<"El sudoku es Incorrecto"<<endl;
                        cout<<"Error en posicion " <<j+1<<","<<i+1<<" de manera Vertical "<<endl;
                        cout<<"Numero repetido "<<iMatriz[j][i]<<endl;
                        return t;
                    }
                    break;

                case 4:
                    Cantidad [3]++;
                    if (Cantidad[3]>>1)
                    {
                        t=false;
                        cout<<"El sudoku es Incorrecto"<<endl;
                        cout<<"Error en posicion " <<j+1<<","<<i+1<<" de manera Vertical "<<endl;
                        cout<<"Numero repetido "<<iMatriz[j][i]<<endl;
                        return t;
                    }
                    break;

                case 5:
                    Cantidad [4]++;
                    if (Cantidad[4]>>1)
                    {
                        t=false;
                        cout<<"El sudoku es Incorrecto"<<endl;
                        cout<<"Error en posicion " <<j+1<<","<<i+1<<" de manera Vertical "<<endl;
                        cout<<"Numero repetido "<<iMatriz[j][i]<<endl;
                        return t;
                    }
                    break;

                case 6:
                    Cantidad [5]++;
                    if (Cantidad[5]>>1)
                    {
                        t=false;
                        cout<<"El sudoku es Incorrecto"<<endl;
                        cout<<"Error en posicion " <<j+1<<","<<i+1<<" de manera Vertical "<<endl;
                        cout<<"Numero repetido "<<iMatriz[j][i]<<endl;
                        return t;
                    }
                    break;

                case 7:
                    Cantidad [6]++;
                    if (Cantidad[6]>>1)
                    {
                        t=false;
                        cout<<"El sudoku es Incorrecto"<<endl;
                        cout<<"Error en posicion " <<j+1<<","<<i+1<<" de manera Vertical "<<endl;
                        cout<<"Numero repetido "<<iMatriz[j][i]<<endl;
                        return t;
                    }
                    break;

                case 8:
                    Cantidad [7]++;
                    if (Cantidad[7]>>1)
                    {
                        t=false;
                        cout<<"El sudoku es Incorrecto"<<endl;
                        cout<<"Error en posicion " <<j+1<<","<<i+1<<" de manera Vertical "<<endl;
                        cout<<"Numero repetido "<<iMatriz[j][i]<<endl;
                        return t;
                    }
                    break;

                case 9:
                    Cantidad [8]++;
                    if (Cantidad[8]>>1)
                    {
                        t=false;
                        cout<<"El sudoku es Incorrecto"<<endl;
                        cout<<"Error en posicion " <<j+1<<","<<i+1<<" de manera Vertical "<<endl;
                        cout<<"Numero repetido "<<iMatriz[j][i]<<endl;
                        return t;
                    }
                    break;
                }

        }
    }
}

int main()
{
    imprimeMatriz(iMatPrueba);
    validarSudoku(iMatPrueba);
    return 0;
}
