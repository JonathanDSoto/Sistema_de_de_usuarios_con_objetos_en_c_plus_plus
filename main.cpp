#include <iostream>
#include <math.h>
#include <cstring>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include<time.h>
#include "Persona.h"

using namespace std;

Persona registrar(){
    /*DATOS NECESARIO PARA CREAR USUARIO*/
    char nombres[100];char apellidos[100];
    int edad;
    char genero[100];char domicilio[100];
    int peso;float altura;
    /*DATOS NECESARIO PARA CREAR USUARIO*/

    cout << "Ingrese su nombre"<<endl;
    cin >> nombres;
    cout << "Ingrese su apellido"<<endl;
    cin >> apellidos;
    cout << "Ingrese su edad"<<endl;
    cin >> edad;
    cout << "Ingrese su genero"<<endl;
    cin >> genero;
    cout << "Ingrese su domicilio"<<endl;
    cin >> domicilio;
    cout << "Ingrese su peso"<<endl;
    cin >> peso;
    cout << "Ingrese su altura"<<endl;
    cin >> altura;

    return Persona(nombres,apellidos,edad,genero,domicilio,peso,altura);
}

void IMC(int imc){
    if(imc <= 18){
        cout << "Bajo peso"<<endl;

    }else if(imc > 18 && imc <= 24){

        cout << "Normal"<<endl;
    }else if(imc >= 25 && imc <= 29){

        cout << "Sobrepeso"<<endl;
    }else if(imc >= 30){

        cout << "Obesoooooo"<<endl;
    }
}

void menu(){
    cout << "<========= MENU ==============>"<<endl;
    cout << "<=== 1.- Registrar usuario ===>"<<endl;
    cout << "<=== 2.- Calcular IMC ========>"<<endl;
    cout << "<=== 3.- Consultar Data ======>"<<endl;
    cout << "<=============================>"<<endl;
}

int main(){
    Persona personas[10];
    bool power = true;
    int op = 0, personaC = 0, noUser = 0, imc;

    while (power){
        menu();
        cin >> op;

        switch (op) {
            case 1:

                personas[personaC] = registrar();
                personaC++;

                break;
            case 2:
                cout << "Ingrese el numero de usuario"<<endl;
                cin >> noUser;

                imc = personas[noUser].calcularIMC();
                IMC(imc);

                break;
            case 3:
                cout << "Ingrese el numero de usuario"<<endl;
                cin >> noUser;

                personas[noUser].toString();
                break;
            default:
                power = false;
                break;
        }
    }

    return 0;
}