#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int opc,a;
char nombre[50];
int main(){
    do
    {
    	system("cls");
        cout<<"Nacimiento de alan turing	";
        cin>>a;

        if(a != 1912){
            cout<<"Incorrecto, adios";
            exit(0);
        }
        else{
            cout<<"Correcto";
            
        }
        cout<<"\nIngresa tu nombre: ";
        cin.getline(nombre,50,'\n');
        cout<<"\nIngresa donde estudias:    ";
        cin.getline(nombre,50,'\n');
        cout<<"\nIngresa que carrera te gustaria estudiar:   ";
        cin.getline(nombre,50,'\n');
        do{
            system("cls");
            cout<<"quieres conitnuar?\n";
            cout<<"\n   1-SI";
            cout<<"\n   2-NO";
            cout<<"\nRespuesta: ";
            cin>>opc;
        }
        while(opc >= 3);
        

    }
    while(opc==1);
    return 0;
}
