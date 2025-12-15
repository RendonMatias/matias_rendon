#include<stdio.h>
#include "rojas.h"

int main()
{

    struct Producto productos[MAX_PRODUCTOS];
   ingresarProductos(productos,MAX_PRODUCTOS);
   mostrarProducto(productos,MAX_PRODUCTOS);

   printf("\nTotal: %.2f",totalInventario(productos,MAX_PRODUCTOS));
    





    return 0;
}