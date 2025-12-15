#ifndef ROJAS_H

#define MAX_PRODUCTOS 5

struct Producto
{
    char nombre[30];
    float precio;
    int cantidad;

};

void ingresarProductos(struct Producto[],int n);
void mostrarProducto(struct Producto[],int n);
float totalInventario(struct Producto[],int n);



#endif // !1