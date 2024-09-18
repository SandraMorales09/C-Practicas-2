/*Este programa permitira a los usuarios registrar productos, mostrar el inventario, agrear stock y realizar ventas*/

#include<iostream>
#include<string>
#include<vector>

using namesspace std;
//Estructura para representar un producto struct Product {
string nombre;
int stock;
float precio;
};

//Vector para almacenar un producto 
void registrarProducto() {
Producto nuevoProducto;
cout <<"Ingrese el nombre del producto:";
