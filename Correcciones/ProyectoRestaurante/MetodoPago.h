#ifndef MetodoPago_H
#define MetodoPago_H
#include<string>

using namespace std;

class MetodoPago{
    protected:
        string direccion;
        string ciudad;
        string telefono;
    public:
        MetodoPago(string, string, string);
        float pagar(int);
        void mostrarDatos();
};

#endif // MetodoPago_H
