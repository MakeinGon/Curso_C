#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <cstring>
#include <cstdio>  // Incluimos la cabecera para la función rename()
//Manejo de archivos txt
#include <fstream>

#include <windows.h> // Se debe incluir la librería windows.h para usar la función gotoxy()
using namespace std;

//gotoxy() es una función que se utiliza en C y C++ para mover el cursor a una posición específica en la pantalla.
// Esta función no estándar toma dos argumentos: la coordenada horizontal (x) y la coordenada vertical (y) 
// de la posición a la que se desea mover el cursor.
void gotoxy(int x, int y) {
	DWORD STD_OUTPUT_HANDLE;
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//Persona
class  Persona {
public:
	string DNI;
	string Nombre;
	string Ap_Paterno;
	string Ap_Materno;
public:
	Persona() {
		DNI = "NN";
		Nombre = "NN";
		Ap_Paterno = "NN";
		Ap_Materno = "NN";
	}
	Persona(string _DNI, string _Nombre, string _Ap_Paterno, string _Ap_Materno) {
		DNI = _DNI;
		Nombre = _Nombre;
		Ap_Paterno = _Ap_Paterno;
		Ap_Materno = Ap_Materno;
	}
	void Imprimir_Datos_Persona() {
		cout << "DNI: " << DNI << endl;
		cout << "Nombre" << Nombre << endl;
		cout << "Apellido Paterno: " << Ap_Paterno << endl;
		cout << "Apellido Maternos: " << Ap_Materno << endl;
	}
	void setDni(string _DNI) {
		DNI = _DNI;
	}
	string getDni() {
		return DNI;
	}
	void setNombre(string _Nombre) {
		Nombre = _Nombre;
	}
	string getNombre() {
		return Nombre;
	}
	void setAp_Paterno(string _Ap_Paterno) {
		Ap_Paterno = _Ap_Paterno;
	}
	string getAp_Paterno() {
		return Ap_Paterno;
	}
	void setAp_Materno(string _Ap_Materno) {
		Ap_Materno = _Ap_Materno;
	}
	string getAp_Materno() {
		return Ap_Materno;
	}
};
//Producto
class Producto {
public:
	string Id_Producto;
	string Nombre_Producto;
	float Precio;
	int Cantidad;
public:
	Producto() {
		Id_Producto = "";
		Nombre_Producto = "";
		Precio = 0;
		Cantidad = 0;
	}
	Producto(string _Id_Producto, string _Nombre_Producto, float _Precio, int _Cantidad) {
		Id_Producto = _Id_Producto;
		Nombre_Producto = _Nombre_Producto;
		Precio = _Precio;
		Cantidad = _Cantidad;
	}
	void ImprimirProducto(int y) {
		gotoxy(10, y); cout << Id_Producto;
		gotoxy(25, y); cout << Nombre_Producto;
		gotoxy(45, y); cout << Precio;
		gotoxy(55, y); cout << Cantidad;
	}
	void setId_Producto(string _Id_Producto) {
		Id_Producto = _Id_Producto;
	}
	string getId_Producto() {
		return Id_Producto;
	}

	void setNombre_Producto(string _Nombre_Producto) {
		Nombre_Producto = _Nombre_Producto;
	}
	string getNombre_Producto() {
		return Nombre_Producto;
	}

	void setPrecio(float _Precio) {
		Precio = _Precio;
	}
	float getPrecio() {
		return Precio;
	}

	void setCantidad(int _Cantidad) {
		Cantidad = _Cantidad;
	}
	int  getCantidad() {
		return Cantidad;
	}

};
//Gerente
class Gerente : public Persona {
public:
	Persona Datos_gerente;
private:
	string User;
	string Pasword;
public:
	Gerente(string _User, string _Pasword, string _DNI, string _Nombre, string _Ap_Paterno, string _Ap_Materno) :Persona(_DNI, _Nombre, _Ap_Paterno, _Ap_Materno) {
		Datos_gerente.setDni(_DNI);
		Datos_gerente.setNombre(_Nombre);
		Datos_gerente.setAp_Paterno(_Ap_Paterno);
		Datos_gerente.setAp_Materno(_Ap_Materno);
		User = _User;
		Pasword = _Pasword;
	}
	void setUser(string _User) {
		User = _User;
	}
	void setPasword(string _Pasword) {
		Pasword = _Pasword;
	}
	string getUser() {
		return User;
	}
	string getPasword() {
		return Pasword;
	}
};

//Boleta

class Boleta :public Persona, public Producto {
public:
	Persona Cliente;
	Producto Lista_Compra[10];
	float Suma_pago_Producto = 0;
	int Cantidad_Productos_Comprados=0;
public:
	Boleta() {
		Suma_pago_Producto = 0;
		Cantidad_Productos_Comprados = 0;
	}

	Boleta(string _DNI, string _Nombre, string _Ap_Paterno, string _Ap_Materno, Producto _Lista_Compra[], int _Cantidad_Productos_Comprados) :Persona(_DNI, _Nombre, _Ap_Paterno, _Ap_Materno) {
		Cliente.DNI = _DNI;
		Cliente.Nombre = _Nombre;
		Cliente.Ap_Paterno = _Ap_Paterno;
		Cliente.Ap_Materno = _Ap_Materno;
		Cantidad_Productos_Comprados = _Cantidad_Productos_Comprados;
		for (int i = 0; i < Cantidad_Productos_Comprados; i++) {
			Lista_Compra[i] = _Lista_Compra[i];
		}
	}
	void Imprimir_Boleta() {
		system("cls");
		gotoxy(15, 0); cout << "+++++++++++++++++++++++++++++++++++++++" << endl;
		gotoxy(15, 1); cout << "+" << endl;;
		gotoxy(60, 1); cout << "+" << endl;
		gotoxy(20, 1); cout << "**BOLETA*DE*VENTA**" << endl;
		gotoxy(15, 3); cout << "+DNI : " << Cliente.getDni() << endl;
		gotoxy(15, 4); cout << "+NOMBRE : " << Cliente.getNombre() << endl;
		gotoxy(15, 5); cout << "+APELLIDO PATERNO : " << Cliente.getAp_Paterno() << endl;
		gotoxy(15, 6); cout << "+APELLIDO MATERNO :" << Cliente.getAp_Materno() << endl;
		gotoxy(15, 7); cout << "+++++++++++++++++++++++++++++++++++++++" << endl;
		gotoxy(18, 8); cout << "**PRODUCTOSCOMPRADOS**" << endl;
		gotoxy(15, 8); cout << "+" << endl;
		gotoxy(60, 8); cout << "+" << endl;
		int y1 = 9, y2 = 10, y3 = 11, y4 = 12, y5 = 13;

		for (int i = 0; i < Cantidad_Productos_Comprados; i++) {
			Suma_pago_Producto = Suma_pago_Producto + (Lista_Compra[i].getPrecio() * Lista_Compra[i].getCantidad());
			gotoxy(15, i + y1); cout << "+" << endl;
			gotoxy(60, i + y1); cout << "+" << endl;
			gotoxy(15, i + y1); cout << "+Id_Producto : " << Lista_Compra[i].getId_Producto() << endl;
			gotoxy(15, i + y2); cout << "+" << endl;
			gotoxy(60, i + y2); cout << "+" << endl;
			gotoxy(15, i + y2); cout << "+Nom_Producto : " << Lista_Compra[i].getNombre_Producto() << endl;
			gotoxy(15, i + y3); cout << "+" << endl;
			gotoxy(60, i + y3); cout << "+" << endl;
			gotoxy(15, i + y3); cout << "+Precio : " << Lista_Compra[i].getPrecio() << endl;
			gotoxy(15, i + y4); cout << "+" << endl;
			gotoxy(60, i + y4); cout << "+" << endl;
			gotoxy(15, i + y4); cout << "+Cantidad :" << Lista_Compra[i].getCantidad() << endl;
			gotoxy(15, i + y5); cout << "+++++++++++++++++++++++++++++++++++++++" << endl;
			y1 += 5;
			y2 += 5;
			y3 += 5;
			y4 += 5;
			y5 += 5;
		}
		gotoxy(15, Cantidad_Productos_Comprados + 14); cout << "****TOTAL PAGAR :" << Suma_pago_Producto << endl;
		

	}
	void setCantidad_Productos_Comprados(int _Cantidad_Productos_Comprados) {
		Cantidad_Productos_Comprados = _Cantidad_Productos_Comprados;
	}

	int getCantidad_Productos_Comprados() {
		return Cantidad_Productos_Comprados;
	}
	void setpago_Producto(float _Suma_pago_Producto) {
		Suma_pago_Producto = _Suma_pago_Producto;
	}
	float getpago_Producto() {
		return Suma_pago_Producto;
	}
};


int main() {
	//inicalizamos a nuestro Administrador de la tienda
	Gerente Administrador("User", "FiisUnas", "12345678", "PEPE", "PEREZ", "RUIZ");
	//creamos nuestras variables temporales que nos ayudaran para comprobar que el user y pasword son correctos
	string user, pasword;
	//opcion para salir si es que no sabe la contraseña
	int op_Intentar_salir = 2;
	//variable para el menu en el almacen
	int op_almacen;
	//creamos nuestro almacen de tipo producto con un limite de 50, ya que un almacen no puede se infinito
	//Producto
	Producto Almacen[50];
	int Limite_Almacen = 50;//creamos una variable limite, para la pruebas si cambiamos el limita del almacen los cambios se realizan aqui 
	string Id_Producto;
	string Nombre_Producto;
	float Precio;
	int Cantidad;
	int Contador_Productos_Registrados = 0; //para llevar el conteo de productos que ya tenemos registrados
	int Id_Repetido = 0; //para controlar si el id es repetido;
	string Id_Procesar; //variable que nos ayudara para seleccionar el producto que se desea tratar(modificar/eliminar)
	int op_Si_NO = 0;//esta variable opcion usaremos en cada pregunta de si y no 


	Boleta Boletas[50];
	int cant; //cantidad del mismo producto que compra el cliente
	string Id_Comprar;
	int Contador_Cliente = 0;
	bool Existe = false;
	int Compra_Si_No;
	int indice_Eliminar = -1;//inicializamos en -1 ya que ese indice no existe
	string DNI;
	string Nombre;
	string Ap_Paterno;
	string Ap_Materno;
	int Cant_Productos_Comprados = 0;
	float pago_Compra;
	//opcion para el menu inicial
	int opcion=0;

	//Si el archivo Vehiculo existe
	ifstream Datos_Almacen;
	string Linea_Almacen;
	Datos_Almacen.open("Almacen.txt", ios::in);//abrimos el archivo
	//preguntamos si se abrio correctamente el archivo
	if (Datos_Almacen.fail()) {
		cout << "No se pudo abrir el archivo  Almacen.txt, o no existe." << endl;
	}
	else {
		cout << "se pudo abrir el archivo Almacen.txt" << endl;
	}
	//si el archivo se pudo abrir?
	if (Datos_Almacen.is_open()) {
		//copiamos toda la linea en la variable string linea
		while (getline(Datos_Almacen, Linea_Almacen)) {
			//Funcion para separar en la variable token, los caracteres hasta el separador "|"
			char* token = strtok(const_cast<char*>(Linea_Almacen.c_str()), "|");
			//copiamos los datos a la structura
			Id_Producto = token;
			token = strtok(NULL, "|");
			Nombre_Producto = token;
			token = strtok(NULL, "|");
			Precio = atoi(token);
			token = strtok(NULL, "|");
			Cantidad = atoi(token);
			Almacen[Contador_Productos_Registrados].setId_Producto(Id_Producto);
			Almacen[Contador_Productos_Registrados].setNombre_Producto(Nombre_Producto);
			Almacen[Contador_Productos_Registrados].setPrecio(Precio);
			Almacen[Contador_Productos_Registrados].setCantidad(Cantidad);
			Contador_Productos_Registrados++;
		}
	}
	Datos_Almacen.close();

    //al iniciar que cargue los datos del archivo Boletas.txt
	//Si el archivo Vehiculo existe
	ifstream Datos_Boletas;
	string Linea_Boletas;
	Datos_Boletas.open("Boletas.txt", ios::in);//abrimos el archivo
	//preguntamos si se abrio correctamente el archivo
	if (Datos_Boletas.fail()) {
		cout << "No se pudo abrir el archivo  Boletas.txt, o no existe." << endl;
	}
	else {
		cout << "se pudo abrir el archivo Boletas.txt" << endl;
	}
	//si el archivo se pudo abrir?
	if (Datos_Boletas.is_open()) {
		//copiamos toda la linea en la variable string linea
		while (getline(Datos_Boletas, Linea_Boletas)) {
			//Funcion para separar en la variable token, los caracteres hasta el separador "|"
			char* token = strtok(const_cast<char*>(Linea_Boletas.c_str()), "|");
			//copiamos los datos a la structura
			//primero los datos del cliente
			DNI = token;
			token = strtok(NULL, "|");
			Nombre = token;
			token = strtok(NULL, "|");
			Ap_Paterno = token;
			token = strtok(NULL, "|");
			Ap_Materno = token;
			token = strtok(NULL, "|");
			Cant_Productos_Comprados = atoi(token);
			Boletas[Contador_Cliente].Cliente.setDni(DNI);
			Boletas[Contador_Cliente].Cliente.setNombre(Nombre);
			Boletas[Contador_Cliente].Cliente.setAp_Paterno(Ap_Paterno);
			Boletas[Contador_Cliente].Cliente.setAp_Materno(Ap_Materno);
			Boletas[Contador_Cliente].setCantidad_Productos_Comprados(Cant_Productos_Comprados);
			for (int i = 0; i < Boletas[Contador_Cliente].getCantidad_Productos_Comprados(); i++) {
				token = strtok(NULL, "|");
				Id_Producto = token;
				token = strtok(NULL, "|");
				Nombre_Producto = token;
				token = strtok(NULL, "|");
				Precio = atoi(token);
				token = strtok(NULL, "|");
				Cantidad = atoi(token);
				Boletas[Contador_Cliente].Lista_Compra[i].setId_Producto(Id_Producto);
				Boletas[Contador_Cliente].Lista_Compra[i].setNombre_Producto(Nombre_Producto);
				Boletas[Contador_Cliente].Lista_Compra[i].setPrecio(Precio);
				Boletas[Contador_Cliente].Lista_Compra[i].setCantidad(Cantidad);
			}
			token = strtok(NULL, "|");
			pago_Compra = atoi(token);
			Boletas[Contador_Cliente].setpago_Producto(pago_Compra);
			Contador_Cliente++;
		}
	}
	Datos_Boletas.close();
	Cant_Productos_Comprados = 0;
	system("pause");
	do {
		do {
			system("cls");
			gotoxy(20, 1); cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
			gotoxy(20, 2); cout << "+             TIENDITA DE DON PEPE                 +" << endl;
			gotoxy(20, 3); cout << "+               [1]Gerente                         +" << endl;
			gotoxy(20, 4); cout << "+               [2]Cliente                         +" << endl;
			gotoxy(20, 5); cout << "+               [3]Salir                           +" << endl;
			gotoxy(20, 6); cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
			gotoxy(28, 7); cout << "Opcion: "; cin >> opcion;
		} while (opcion < 1 || opcion>3);
		switch (opcion) {
		case 1:
			//Gerente se encarga de agregar productos al almacen(comprar),modificar un productos o eliminar un producto
			//el gerente tiene su Usuario-User y su contraseña-FiisUnas
			do {

				system("cls");
				gotoxy(20, 1); cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
				gotoxy(20, 2); cout << "+                BIENVENIDO DON PEPE               +" << endl;
				gotoxy(20, 3); cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
				gotoxy(20, 6); cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
				gotoxy(20, 4); cout << "+" << endl;
				gotoxy(71, 4); cout << "+" << endl;
				gotoxy(20, 5); cout << "+" << endl;
				gotoxy(71, 5); cout << "+" << endl;
				gotoxy(21, 4); cout << "    Usuario : ";cin >> user;
				gotoxy(21, 5); cout << "    Contrasenia:"; cin >> pasword;
				if (user != Administrador.getUser() || pasword != Administrador.getPasword()) {
					do {
						system("cls");
						gotoxy(20, 1); cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
						gotoxy(20, 2); cout << "+      El usuario o contrasenia son incorrectos    +" << endl;
						gotoxy(20, 3); cout << "+[1]Volver a intentarlo                            +" << endl;
						gotoxy(20, 4); cout << "+[2]salir                                          +" << endl;
						gotoxy(20, 5); cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
						gotoxy(20, 6); cout << "Opcion: "; cin >> op_Intentar_salir;
					} while (op_Intentar_salir < 1 || op_Intentar_salir>2);
				}
				else {
					op_Intentar_salir = 2;//ponemos valor de 2 para que en caso ingresa los datos correctos, tambien pueda salir de while
										//esto controla para el caso que haya ingresado una ves mal y le dio a volver a intentar
										//en ese caso tiene el valor de uno y no salia del while, por ello hacemos esto
				}
			} while (user != Administrador.getUser() || pasword != Administrador.getPasword() || op_Intentar_salir != 2);
			if (user == Administrador.getUser() && pasword == Administrador.getPasword()) {
				do {
					do {
						system("cls");
						gotoxy(20, 1); cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
						gotoxy(20, 2); cout << "+         ALMACEN DE LA TIENDITA DE DON PEPE       +" << endl;
						gotoxy(20, 3); cout << "+[1]Agregar nuevos productos                       +" << endl;
						gotoxy(20, 4); cout << "+[2]Modificar un producto                          +" << endl;
						gotoxy(20, 5); cout << "+[3]Eliminar un productos                          +" << endl;
						gotoxy(20, 6); cout << "+[4]Ver Existencias del almacen                    +" << endl;
						gotoxy(20, 7); cout << "+[5]Ver registro de boletas                        +" << endl;
						gotoxy(20, 8); cout << "+[6]Salir                                          +" << endl;
						gotoxy(20, 9); cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
						gotoxy(20, 10); cout << "Opcion: "; cin >> op_almacen;
					} while (op_almacen < 1 || op_almacen>6);
					switch (op_almacen) {
					case 1:
						//agregamos un producto mientras no supere la capacidad del almacen
						if (Contador_Productos_Registrados < Limite_Almacen) {
							
							//controlamos que el id del producto no se repita cuando ya almeos tenemos 1 productos a mas
							if (Contador_Productos_Registrados > 0) {
								do {
									system("cls");
									gotoxy(20, 2); cout << "Registro de nuevo producto" << endl;
									Id_Repetido = 0;
									gotoxy(20, 4); cout << "id producto : ";cin >> Id_Producto;
									for (int i = 0; i < Contador_Productos_Registrados; i++) {
										if (Id_Producto == Almacen[i].getId_Producto()) {
											Id_Repetido++;
										}
									}
									if (Id_Repetido > 0) {
										gotoxy(20, 6); cout << "Id del producto ya existe " << endl;
										system("pause");
									}
									else {										
										gotoxy(20, 5); cout << "Id valido" << endl;
									}
								} while (Id_Repetido != 0);
							}
							else {
								system("cls");
								gotoxy(20, 2); cout << "Registro de nuevo producto" << endl;
								gotoxy(20, 4); cout << "id producto : "; cin >> Id_Producto;
							}
							gotoxy(20, 6); cout << "Nombre producto: ";cin >> Nombre_Producto;
							gotoxy(20, 7); cout << "Precio : ";cin >> Precio;
							gotoxy(20, 8); cout << "Cantidad Stock: ";	cin >> Cantidad;
							
							//agregamos a nuestro arreglo almacen
							Almacen[Contador_Productos_Registrados].setId_Producto(Id_Producto);
							Almacen[Contador_Productos_Registrados].setNombre_Producto(Nombre_Producto);
							Almacen[Contador_Productos_Registrados].setPrecio(Precio);
							Almacen[Contador_Productos_Registrados].setCantidad(Cantidad);


							//Guardar los productos del arreglo al txt
							ofstream Archivo;
							Archivo.open("Almacen.txt", ios::app);
							if (Archivo.fail()) {
								cout << "No se pudo abrir el archivo" << endl;
							}
							else {
								Archivo << Almacen[Contador_Productos_Registrados].getId_Producto() + "|";
								Archivo << Almacen[Contador_Productos_Registrados].getNombre_Producto() + "|";
								Archivo << Almacen[Contador_Productos_Registrados].getPrecio() << "|";
								Archivo << Almacen[Contador_Productos_Registrados].getCantidad() << "\n";
							}
							Contador_Productos_Registrados++;
						}
						else {
							gotoxy(20, 14); cout << "Almacen lleno no se puede agregar nuevo producto";
						}

						break;
					case 2:
						//decimos si existe almenos un prodcuto para poder modificar
						if (Contador_Productos_Registrados > 0) {
							//mostramos los productos que tenemos en el almacen
							system("cls");
							gotoxy(20, 1); cout << "ALMACEN DE PRODUCTOS DE LA TIENDITA DE DON PEPE " << endl;
							gotoxy(10, 3); cout << "Id_Producto ++ ";
							gotoxy(25, 3); cout << "Nombre_Producto ++ "; 
							gotoxy(45, 3); cout << "Precio ++ ";
							gotoxy(55, 3); cout << "Cantidad";
							for (int i = 0; i < Contador_Productos_Registrados; i++) {
								Almacen[i].ImprimirProducto(i+4);
							}
							gotoxy(10, (Contador_Productos_Registrados + 4)); cout << "Ingrese el ID del producto que desea modificar" << endl;
							gotoxy(10, (Contador_Productos_Registrados + 5)); cin >> Id_Procesar;
							for (int i = 0; i < Contador_Productos_Registrados; i++) {
								if (Id_Procesar == Almacen[i].getId_Producto()) {
									system("cls");
									gotoxy(10, 1); cout << "PRODUCTO A MODIFICAR" << endl;
									gotoxy(10, 3); cout << "Id_Producto ++ ";
									gotoxy(25, 3); cout << "Nombre_Producto ++ ";
									gotoxy(45, 3); cout << "Precio ++ ";
									gotoxy(55, 3); cout << "Cantidad";
									Almacen[i].ImprimirProducto(4);
									gotoxy(10, 6); cout << "Nuevo Nombre producto : ";	cin >> Nombre_Producto;
									gotoxy(10, 7); cout << "Nuevo Precio : ";	cin >> Precio;
									gotoxy(10, 8); cout << "Nueva Cantidad : ";cin >> Cantidad;
									Almacen[i].setNombre_Producto(Nombre_Producto);
									Almacen[i].setPrecio(Precio);
									Almacen[i].setCantidad(Cantidad);
									
								}
							}

							//creamos un archivo temporal con los cambios realizados y lleamos nuestro almacen alli
							ofstream Archivo_temporal;
							Archivo_temporal.open("Temporal.txt", ios::app);
							if (Archivo_temporal.fail()) {
									cout << "No se pudo abrir el archivo" << endl;
								}
							else {
								for (int i = 0; i < Contador_Productos_Registrados; i++) {
									Archivo_temporal << Almacen[i].getId_Producto() + "|";
									Archivo_temporal << Almacen[i].getNombre_Producto() + "|";
									Archivo_temporal << Almacen[i].getPrecio() << "|";
									Archivo_temporal << Almacen[i].getCantidad() << "\n";
								}
							}
														
							Archivo_temporal.close();
							//eliminamos el antiguo txt
							remove("Almacen.txt");
							//renombramos nuestro txt temporal como el antigua
							rename("Temporal.txt", "Almacen.txt");							
						}
						else {
							cout << "ALMACEN VACIO" << endl;
							system("pause");
						}

						break;
					case 3:
						//decimos si existe almenos un prodcuto para poder eliminar
						if (Contador_Productos_Registrados > 0) {
							//mostramos los productos que tenemos en el almacen
							system("cls");
							gotoxy(20, 1); cout << "ALMACEN DE PRODUCTOS DE LA TIENDITA DE DON PEPE " << endl;
							gotoxy(10, 3); cout << "Id_Producto ++ ";
							gotoxy(25, 3); cout << "Nombre_Producto ++ ";
							gotoxy(45, 3); cout << "Precio ++ ";
							gotoxy(55, 3); cout << "Cantidad";
							for (int i = 0; i < Contador_Productos_Registrados; i++) {
								Almacen[i].ImprimirProducto(i + 4);
							}
							gotoxy(10, (Contador_Productos_Registrados + 4)); cout << "Ingrese el ID del producto que desea eliminar" << endl;
							gotoxy(10, (Contador_Productos_Registrados + 5)); cin >> Id_Procesar;
							do {
								//for para encontrar el indices en que se encuentras el producto a eliminar
								for (int i = 0; i < Contador_Productos_Registrados; i++) {
									if (Id_Procesar == Almacen[i].getId_Producto()) {
										indice_Eliminar = i;
									}
								}
								gotoxy(10, (Contador_Productos_Registrados + 7)); cout << "Producto a eliminar" << endl;
								Almacen[indice_Eliminar].ImprimirProducto((Contador_Productos_Registrados + 8));
								gotoxy(10, (Contador_Productos_Registrados + 9)); cout << "ESTA SEGURO DE ELIMINAR EL PRODUCTO???" << endl;
								gotoxy(10, (Contador_Productos_Registrados + 10)); cout << "[1]Si" << endl;
								gotoxy(10, (Contador_Productos_Registrados + 11)); cout << "[2]NO" << endl;
								gotoxy(10, (Contador_Productos_Registrados + 12)); cin >> op_Si_NO;
							} while (op_Si_NO < 1 || op_Si_NO>2);
							//si desea eliminar hace el proceso
							if (op_Si_NO == 1) {
								if (Contador_Productos_Registrados > 1) {
									//hacemos el proceso de eliminado
									for (int i = indice_Eliminar; i < Contador_Productos_Registrados; i++) {
										Almacen[i] = Almacen[i + 1];
									}
									Contador_Productos_Registrados--;
									//creamos un archivo temporal con los cambios realizados y lleamos nuestro almacen alli
									ofstream Archivo_temporal;
									Archivo_temporal.open("Temporal.txt", ios::app);
									if (Archivo_temporal.fail()) {
										gotoxy(10, (Contador_Productos_Registrados + 14)); cout << "No se pudo abrir el archivo" << endl;
									}
									else {
										for (int i = 0; i < Contador_Productos_Registrados; i++) {
											Archivo_temporal << Almacen[i].getId_Producto() + "|";
											Archivo_temporal << Almacen[i].getNombre_Producto() + "|";
											Archivo_temporal << Almacen[i].getPrecio() << "|";
											Archivo_temporal << Almacen[i].getCantidad() << "\n";
										}
									}
									Archivo_temporal.close();
									//eliminamos el antiguo txt
									remove("Almacen.txt");
									//renombramos nuestro txt temporal como el antigua
									rename("Temporal.txt", "Almacen.txt");
								}
								else {
									//cuando solo existe un elemento que eliminaremos, creamos u archivo vacio 
									//lo llamamos temporal y luego lo renombramos
									ofstream Archivo_temporal;
									Archivo_temporal.open("Temporal.txt", ios::app);
									Archivo_temporal.close();
									//eliminamos el antiguo txt
									remove("Almacen.txt");
									//renombramos nuestro txt temporal como el antigua
									rename("Temporal.txt", "Almacen.txt");
								}
								gotoxy(10, (Contador_Productos_Registrados + 14)); cout << "PRODUCTO ELIMINADO" << endl;
								system("pause");
							}
							else {
								gotoxy(10, (Contador_Productos_Registrados + 14)); cout << "ELIMINACION CANCELADA" << endl;
								system("pause");
							}
						}
						else {
							gotoxy(20, 1); cout << "ALMACEN DE PRODUCTOS DE LA TIENDITA DE DON PEPE " << endl;
							gotoxy(10, 3); cout << "ALMACEN VACIO" << endl;
							system("pause");
						}
						break;
					case 4:
						//si existe productos en el almacen
						if (Contador_Productos_Registrados > 0) {
							//mostramos los productos que tenemos en el almacen
							system("cls");
							gotoxy(20, 1); cout << "ALMACEN DE PRODUCTOS DE LA TIENDITA DE DON PEPE " << endl;
							gotoxy(10, 3); cout << "Id_Producto ++ ";
							gotoxy(25, 3); cout << "Nombre_Producto ++ ";
							gotoxy(45, 3); cout << "Precio ++ ";
							gotoxy(55, 3); cout << "Cantidad";
							for (int i = 0; i < Contador_Productos_Registrados; i++) {
								Almacen[i].ImprimirProducto(i + 4);
							}
							cout << endl;
							system("pause");
						}
						else {
							gotoxy(20, 1); cout << "ALMACEN DE PRODUCTOS DE LA TIENDITA DE DON PEPE " << endl;
							gotoxy(10, 3); cout << "ALMACEN VACIO" << endl;
							system("pause");
						}
						break;
					case 5:
						system("cls");
						//pregutamos si existe almenos una boleta registrada
						if (Contador_Cliente > 0) {
							system("cls");
							gotoxy(15, 0); cout << "+++++++++++++++++++++++++++++++++++++++" << endl;
							gotoxy(15, 1); cout << "+" << endl;;
							gotoxy(53, 1); cout << "+" << endl;
							gotoxy(20, 1); cout << "REGISTRO DE VENTAS" << endl;
							gotoxy(15, 2); cout << "+++++++++++++++++++++++++++++++++++++++" << endl;
							int y1 = 3, y2 = 4, y3 = 5, y4 = 6, y5 = 7, y6 = 8, y7 = 9;
							for (int i = 0; i < Contador_Cliente; i++) {												
								gotoxy(15, i + y1); cout << "+DNI : " << Boletas[i].Cliente.getDni() << endl;
								gotoxy(53, i + y1); cout << "+" << endl;
								gotoxy(15, i + y2); cout << "+NOMBRE : " << Boletas[i].Cliente.getNombre() << endl;
								gotoxy(53, i + y2); cout << "+" << endl;
								gotoxy(15, i + y3); cout << "+APELLIDO PATERNO : " << Boletas[i].Cliente.getAp_Paterno() << endl;
								gotoxy(53, i + y3); cout << "+";
								gotoxy(15, i + y4); cout << "+APELLIDO MATERNO :" << Boletas[i].Cliente.getAp_Materno() << endl;
								gotoxy(53, i + y4); cout << "+" << endl;
								gotoxy(15, i + y5); cout << "+MONTO COMPRADO :" << Boletas[i].getpago_Producto() << endl;
								gotoxy(53, i + y5); cout << "+" << endl;
								gotoxy(15, i + y6); cout << "+++++++++++++++++++++++++++++++++++++++";
								y1 += 5;
								y2 += 5;
								y3 += 5;
								y4 += 5;
								y5 += 5;
								y6 += 5;
							}
							cout << endl;
							system("pause");
						}
						else {
							cout << "No hay registros disponibles" << endl;
							system("pause");
						}
						break;
					}
				} while (op_almacen != 6);
			}
			break;
		case 2:
			//
			bool Comprando = false;
			int cont; //contadorpara ver si encontro el id del producto
			//controlamos que pueda realizar compras si hay productos disponibles
			if (Contador_Productos_Registrados > 0) {
				system("cls");
				gotoxy(20, 1); cout << "Datos del cliente" << endl;
				gotoxy(20, 3); cout << "DNI: ";	cin >> DNI;
				gotoxy(20, 4); cout << "Nombre:";cin >> Nombre;
				gotoxy(20, 5); cout << "Apellido paterno: ";cin >> Ap_Paterno;
				gotoxy(20, 6); cout << "Apellido Materno : ";cin >> Ap_Materno;

				//bucle para las compras
				do {
					//ver lista de productos al ingresar a la tienda
					system("cls");
					gotoxy(20, 1); cout << "ALMACEN DE PRODUCTOS DE LA TIENDITA DE DON PEPE " << endl;
					gotoxy(10, 3); cout << "Id_Producto ++ ";
					gotoxy(25, 3); cout << "Nombre_Producto ++ ";
					gotoxy(45, 3); cout << "Precio ++ ";
					gotoxy(55, 3); cout << "Cantidad";
					for (int i = 0; i < Contador_Productos_Registrados; i++) {
						Almacen[i].ImprimirProducto(i + 4);
					}
					cout << endl;
					do {
						cout << "Realizar nueva comprar??" << endl;
						cout << "[1]SI" << endl;
						cout << "[2]NO" << endl;
						cin >> op_Si_NO;
					} while (op_Si_NO < 1 || op_Si_NO>2);
					switch (op_Si_NO) {
					case 1:
						cont = 0;
						cout << "Ingrese id de producto a comprar  : ";
						cin >> Id_Comprar;
						//para buscar si existe el id_producto en el almacen
						for (int i = 0; i < Contador_Productos_Registrados; i++) {
							if (Id_Comprar == Almacen[i].getId_Producto()) {
								Comprando = true;
								do {
									cout << "cantidad de producto a comprar : ";
									cin >> cant;
								} while (cant > Almacen[i].Cantidad);
								do {
									cout << "Realizar la compra??" << endl;
									cout << "[1]Si" << endl;
									cout << "[2]No,Salir" << endl;
									cin >> Compra_Si_No;
								} while (Compra_Si_No < 1 || Compra_Si_No>2);
								if (Compra_Si_No == 1) {
									Boletas[Contador_Cliente].Cliente.setDni(DNI);
									Boletas[Contador_Cliente].Cliente.setNombre(Nombre);
									Boletas[Contador_Cliente].Cliente.setAp_Paterno(Ap_Paterno);
									Boletas[Contador_Cliente].Cliente.setAp_Materno(Ap_Materno);
									Boletas[Contador_Cliente].Lista_Compra[Cant_Productos_Comprados].setId_Producto(Almacen[i].getId_Producto());
									Boletas[Contador_Cliente].Lista_Compra[Cant_Productos_Comprados].setNombre_Producto(Almacen[i].getNombre_Producto());
									Boletas[Contador_Cliente].Lista_Compra[Cant_Productos_Comprados].setPrecio(Almacen[i].getPrecio());
									Boletas[Contador_Cliente].Lista_Compra[Cant_Productos_Comprados].setCantidad(cant);
									Cant_Productos_Comprados++;

									//debemos eliminar el producto del Almacen
									//for para encontrar el indices en que se encuentras el producto a eliminar
									for (int i = 0; i < Contador_Productos_Registrados; i++) {
										if (Id_Comprar == Almacen[i].getId_Producto()) {
											indice_Eliminar = i;
										}
									}
									//procedemos a quitar la cantidad de articulos del mismo tipo que compro
									// si hubo 6 de una producto y compro 3, quedan 3
									// si hubi 6 y compra 6 se elimina
									if (cant < Almacen[indice_Eliminar].Cantidad) {
										Almacen[indice_Eliminar].Cantidad = Almacen[indice_Eliminar].Cantidad - cant;
									}
									else {
										//caso de que no es menor al total de existencias, quiere decir que se compro todo
										//hacemos el proceso de eliminado
										for (int i = indice_Eliminar; i < Contador_Productos_Registrados; i++) {
											Almacen[i] = Almacen[i + 1];
										}
										Contador_Productos_Registrados--;
										cont--;
									}

								}

							}
							else {
								cont++;
							}
						}
						if (cont == Contador_Productos_Registrados) {
							cout << "El ID del producto ingresado no esta registrado" << endl;
							system("pause");

						}
						break;
					}
				} while (op_Si_NO != 2);
				//una vez que sale del bucle de compra y la variable Comprando=true, quiere decir que hay elemento en la boleta para guardar a Boletas.txt
				if (Comprando == true) {
					//procedemos a actualizar el Almacen.txt
					//creamos un archivo temporal con los cambios realizados y lleamos nuestro almacen alli
					ofstream Archivo_temporal;
					Archivo_temporal.open("Temporal.txt", ios::app);
					if (Archivo_temporal.fail()) {
						cout << "No se pudo abrir el archivo" << endl;
					}
					else {
						for (int i = 0; i < Contador_Productos_Registrados; i++) {
							Archivo_temporal << Almacen[i].getId_Producto() + "|";
							Archivo_temporal << Almacen[i].getNombre_Producto() + "|";
							Archivo_temporal << Almacen[i].getPrecio() << "|";
							Archivo_temporal << Almacen[i].getCantidad() << "\n";
						}
					}
					Archivo_temporal.close();
					//eliminamos el antiguo txt
					remove("Almacen.txt");
					//renombramos nuestro txt temporal como el antigua
					rename("Temporal.txt", "Almacen.txt");

					Boletas[Contador_Cliente].setCantidad_Productos_Comprados(Cant_Productos_Comprados);
					Boletas[Contador_Cliente].Imprimir_Boleta();
					system("pause");

					Contador_Cliente++;
					ofstream Archivo_Boletas;
					Archivo_Boletas.open("Boletas_temporal.txt", ios::app);
					if (Archivo_Boletas.fail()) {
						cout << "No se pudo abrir el archivo" << endl;
					}
					else {
						for (int i = 0; i < Contador_Cliente; i++) {
							Archivo_Boletas << Boletas[i].Cliente.getDni() + "|";
							Archivo_Boletas << Boletas[i].Cliente.getNombre() + "|";;
							Archivo_Boletas << Boletas[i].Cliente.getAp_Paterno() + "|";
							Archivo_Boletas << Boletas[i].Cliente.getAp_Materno() + "|";
							Archivo_Boletas << Boletas[i].getCantidad_Productos_Comprados() << +"|";
							for (int j = 0; j < Cant_Productos_Comprados; j++) {
								Archivo_Boletas << Boletas[i].Lista_Compra[j].getId_Producto() + "|";
								Archivo_Boletas << Boletas[i].Lista_Compra[j].getNombre_Producto() + "|";
								Archivo_Boletas << Boletas[i].Lista_Compra[j].getPrecio() << "|";
								Archivo_Boletas <<Boletas[i].Lista_Compra[j].getCantidad()<< + "|";
							}
							
							Archivo_Boletas <<  Boletas[i].getpago_Producto() << +"\n";
						}
					}
					Archivo_Boletas.close();
					//eliminamos el antiguo txt
					remove("Boletas.txt");
					//renombramos nuestro txt temporal como el antigua
					rename("Boletas_temporal.txt", "Boletas.txt");
					
				}
			}
			else {
				cout << "ALMACEN VACIO" << endl;
				system("pause");
			}
			break;

		}
	} while (opcion != 3);

	return 0;
}