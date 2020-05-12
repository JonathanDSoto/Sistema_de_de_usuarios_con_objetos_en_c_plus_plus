//
// Created by jsoto on 11/05/2020.
//

#ifndef UNTITLED_PERSONA_H
#define UNTITLED_PERSONA_H


class Persona {
    private:
        char nombres[100];
        char apellidos[100];
        int edad;
        char genero[100];
        char domicilio[100];
        int peso;
        float altura;
    public:
       Persona();
       Persona(char [],char [],int,char [],char [],int,float);
       int calcularIMC();
       void esMayorDeEdad();
       void toString();
};


#endif //UNTITLED_PERSONA_H