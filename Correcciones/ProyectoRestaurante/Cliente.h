#ifndef Cliente_H
#define Cliente_H
#include <string.h>

class Cliente{
    private:
        string nombre;
        string telefono;
        string direccion;
    public:
        Cliente(string, string, string);
        void setNombre(string);
        void setTelefono(string);
        void setDireccion(string);
        string getNombre();
        string getTelefono();
        string getDireccion();
};

#endif // Cliente_H