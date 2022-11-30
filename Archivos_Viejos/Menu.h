#ifndef Menu_H
#define Menu_H
#include <string.h>

using namespace std;

class Menu{
    private:
        string nombre;
        string precio;
        string descripcion;
        string cantidad;
    public:
        Menu(string, string, string, string);
        void setNombre(string);
        void setPrecio(string);
        void setDescripcion(string);
        void setCantidad(string);
        string getNombre();
        string getPrecio();
        string getDescripcion();
        string getCantidad();
};
#endif // Menu_H
