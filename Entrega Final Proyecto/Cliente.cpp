#include "Cliente.h"

Cliente::Cliente(string _nombre, string _telefono, string _direccion){
    nombre = _nombre;
    telefono = _telefono;
    direccion = _direccion;
}

void Cliente::setNombre(string _nombre){
    nombre = _nombre;
}

void Cliente::setTelefono(string _telefono){
    telefono = _telefono;
}

void Cliente::setDireccion(string _direccion){
    direccion = _direccion;
}

string Cliente::getNombre(){
    return nombre;
}

string Cliente::getTelefono(){
    return telefono;
}

string Cliente::getDireccion(){
    return direccion;
}