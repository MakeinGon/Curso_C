// librerias
#include <iostream>
#include <cstdlib> //Libreria para usar el system("cls");
#include <fstream> //libreria de archivos
#include <math.h>  //Para operaciones matematicas
#include "Tienda.cpp"
using namespace std;
int main()
{
    // declaracion de variables
    int op_Si_NO = 0; // esta variable opcion usaremos en cada pregunta de si y no
    int opcion = 0;   // variable para el menu
    string salir;     // variable para salir al switch

    ////////////////////////// CREACION DE OBJETOS/////////////////////////////

    // Declaramos tienda
    Tienda tienda("Motorin", "Av. Las Americas", "954-548-741");
    /////////////Declaramos Empleados/////////////////////
    Empleado Empleado1("Jose", "Rojas", "Cambio de llanta", "1 hora");
    Empleado Empleado2("Luis", "Sifuentes", "Electricista", "30 minutos");
    Empleado Empleado3("Carlos", "Gonzalez", "Mecanico", "2 horas");
    Empleado Empleado4("Ana", "Vazques", "Tecnicos de repuestos", "45 minutos");
    Empleado Empleado5("Jose", "Sanchez", "Pintor", "4 hora");
    ///////////////////////////////// Arreglo para los empleados////////////////////////////
    Empleado Empleados[] = {Empleado1, Empleado2, Empleado3, Empleado4, Empleado5};
    int valor_Empleado = sizeof(Empleados) / sizeof(Empleados[0]); // determinamos el tamanio del arreglo

    /////////////////////////Declaramos Clientes////////////////////////
    Cliente Cliente1("Felipe", "Reyes", "Av. Amazonas 586", "988-412-457", 20, "04/10/22");
    Cliente Cliente2("Daniel", "Fernandez", "Av. Venezuela 547 ", "987-451-572", 50, "01/04/22");
    Cliente Cliente3("Sara", "Gomez", "Calle 24 de Mayo", "985-765-123", 25, "12/11/21");
    Cliente Cliente4("Laura", "Lopez", "Av. Libertad 123", "988-123-456", 6, "05/20/22");
    Cliente Cliente5("Pedro", "Ramirez", "Av. Independencia 789", "987-789-012", 12, "03/15/22");
    // Arreglo para los Clientes
    Cliente Clientes[] = {Cliente1, Cliente2, Cliente3, Cliente4, Cliente5};
    int valor_Cliente = sizeof(Clientes) / sizeof(Clientes[0]); // determinamos el tamanio del arreglo

    ///////////////////////declaramos Motos//////////////////////////
    Moto Moto1("Honda", "01/2/21", 50, "4", 14, 5500);
    Moto Moto2("Yamaha", "05/25/19", 50, "10", 14, 5500);
    Moto Moto3("Velorex", "04/24/20", 50, "1", 14, 5500);
    Moto Moto4("Italika", "02/2/20", 50, "2", 14, 5500);
    Moto Moto5("Susuki", "10/12/21", 50, "10", 14, 5500);
    // Arreglo para las Motos
    Moto Motos[] = {Moto1, Moto2, Moto3, Moto4, Moto5};
    int valor_Moto = sizeof(Motos) / sizeof(Motos[0]); // determinamos el tamanio del arreglo

    // Declaramos Repuestos
    Repuesto Repuesto1("Llanta", "04/05/20", 100, "2", 22, 50);
    Repuesto Repuesto2("Bujia", "03/10/21", 40, "1", 14, 100);
    Repuesto Repuesto3("Aceite", "06/25/22", 15, "3", 10, 200);
    Repuesto Repuesto4("Embragues", "07/10/22", 200, "2", 35, 150);
    Repuesto Repuesto5("Baterias", "01/12/22", 50, "6", 2, 140);
    // Arreglo para los Repuestos
    Repuesto Repuestos[] = {Repuesto1, Repuesto2, Repuesto3, Repuesto4, Repuesto5};
    int valor_Repuestos = sizeof(Repuestos) / sizeof(Repuestos[0]); // determinamos el tamanio del arreglo

    do
    {
        system("cls");
        cout << "-----------------------------------------------------------" << endl;
        cout << tienda.infoTienda() << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "\n";
        cout << "|*********************************************************|" << endl;
        cout << "|                      MENU DINAMICO                      |" << endl;
        cout << "|*********************************************************|" << endl;
        cout << "|               [1]Ver Stock de productos                 |" << endl;
        cout << "|               [2]Servicios del taller                   |" << endl;
        cout << "|               [3]Repuestos vendidos                     |" << endl;
        cout << "|               [4]Clientes Comunes                       |" << endl;
        cout << "|               [5]Salir                                  |" << endl;
        cout << "|*********************************************************|" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        system("cls"); // limpiamos el terminal
        switch (opcion)
        {
        case 1: // Mostramos en pantalla el stock de motos y repuestos luego preguntamos si la empresa desea hacer un reporte
            cout << "STOCK DE PRODUCTOS" << endl;
            cout << "----------------------------" << endl;
            cout << "MOTOS" << endl;
            cout << "----------------------------" << endl;
            for (int i = 0; i < valor_Moto; i++)
            {
                cout << "-" << Motos[i].getMarca() << endl;
            }
            cout << "----------------------------" << endl;
            cout << "REPUESTOS" << endl;
            cout << "----------------------------" << endl;
            for (int i = 0; i < valor_Repuestos; i++)
            {
                cout << "-" << Repuestos[i].getNombreRepuesto() << endl;
            }
            cout << "\n";
            do
            {
                cout << "Realizar Reporte en txt del stock productos por fecha de registro, cantidad y categoria? " << endl;
                cout << "[1]SI" << endl;
                cout << "[2]NO" << endl;
                cin >> op_Si_NO;
            } while (op_Si_NO < 1 || op_Si_NO > 2);
            if (op_Si_NO == 1)
            {
                // declaramos
                ofstream archivo("1.ReporteStock.txt");

                // Verificamos si el archivo se abrio correctamente
                if (!archivo.is_open())
                {
                    cout << "Error al abrir el archivo" << endl;
                    return 1;
                }

                archivo << "******STOCK DE PRODUCTOS******\n";
                // Guardamos el reporte en txt de las motos
                archivo << "----------------------------" << endl;
                archivo << "MOTOS" << endl;
                archivo << "----------------------------" << endl;
                for (int i = 0; i < valor_Moto; i++)
                {
                    archivo << Motos[i].InfoMoto() << "\n";
                }
                // Guardamos el reporte en txt de los repuestos
                archivo << "----------------------------" << endl;
                archivo << "REPUESTOS" << endl;
                archivo << "----------------------------" << endl;
                for (int i = 0; i < valor_Repuestos; i++)
                {
                    archivo << Repuestos[i].InfoRepuesto() << "\n";
                }
                cout << "REPORTE HECHO!\n";
                cout << "Presiones una tecla para continuar..." << endl;
                cin >> salir;
                archivo.close();
                break;
            }
            else if (op_Si_NO == 2)
            {
                break; // Salir del switch case
            }

        case 2: // Muestra en pantalla los servicios realizados por los empleados del taller. Luego, pregunta al usuario si
            // desea generar un informe en formato de archivo de texto.
            cout << "****************SERVICIOS DEL TALLER****************" << endl;
            for (int i = 0; i < valor_Empleado; i++)
            {
                cout << "*" << Empleados[i].getCargo() << "\n";
            }
            cout << endl;
            do
            {
                cout << "Realizar Reporte en txt de los servicios realizados por el taller, quien lo realiza y que tiempo le toma? " << endl;
                cout << "[1]SI" << endl;
                cout << "[2]NO" << endl;
                cin >> op_Si_NO;
            } while (op_Si_NO < 1 || op_Si_NO > 2); // El buble se ejecutara mientras que  op_Si_NO  sea menor que 1 o mayor que 2
            //
            if (op_Si_NO == 1) // Si elige "SI", se crea un archivo llamado "2.ReporteServicios.txt" y se guardan los detalles de los servicios en el archivo.
            {
                // declaramos
                ofstream archivo("2.ReporteServicios.txt");

                // Verificamos si el archivo se abrio correctamente
                if (!archivo.is_open())
                {
                    cout << "Error al abrir el archivo" << endl;
                    return 1;
                }
                archivo << "**********Servicios del taller y el tiempo que se demora en relizarse por el empleado**********\n";
                for (int i = 0; i < valor_Empleado; i++)
                {
                    archivo << i + 1 << "." << Empleados[i].InfoEmpleado() << "\n";
                }
                cout << "REPORTE HECHO!\n";
                cout << "Presiones una tecla para continuar..." << endl;
                cin >> salir;
                archivo.close();
                break;
            }
            else if (op_Si_NO == 2) // Si elige "NO", se sale del caso y regresa al menú principal.
            {
                break; // Salir del switch case
            }
        case 3: // Muestra en pantalla los repuestos disponibles en la tienda. Luego, pregunta al usuario si desea generar un informe en formato de archivo de texto.

            cout << "****************Repuestos de la tienda****************" << endl;
            for (int i = 0; i < valor_Repuestos; i++)
            {
                cout << "-" << Repuestos[i].getNombreRepuesto() << endl;
            }
            cout << "\n";
            do
            {
                cout << "Desea relizar un reporte en txt de los repuesto que usted vendio en txt?" << endl;
                cout << "[1]SI" << endl;
                cout << "[2]NO" << endl;
                cin >> op_Si_NO;
            } while (op_Si_NO < 1 || op_Si_NO > 2); // El buble se ejecutara mientras que  op_Si_NO  sea menor que 1 o mayor que 2
            //
            if (op_Si_NO == 1) // Si elige "SI", se crea un archivo llamado "3.ReporteVendidos.txt" y se guardan los detalles de los repuestos vendidos en el archivo.
            {
                // declaramos
                ofstream archivo("3.ReporteVendidos.txt");

                // Verificamos si el archivo se abrió correctamente
                if (!archivo.is_open())
                {
                    cout << "Error al abrir el archivo" << endl;
                    return 1;
                }

                archivo << "**********VENTAS RELIZADAS**********" << endl;
                for (int i = 0; i < valor_Repuestos; i++)
                {
                    archivo << "-" << Repuestos[i].getNombreRepuesto() << "\t "
                            << "\t Cantidad:" << Repuestos[i].getCantidad() << "\t Vendidos:" << Repuestos[i].getVendido() << "\t Quedan:" << Repuestos[i].getCantidad() - Repuestos[i].getVendido() << "\t"
                            << "\tPrecio:" << Repuestos[i].getPrecio() << "\t Total: S/." << (Repuestos[i].getPrecio() * Repuestos[i].getVendido()) << endl;
                }
                cout << "REPORTE HECHO!\n";
                cout << "Presiones una tecla para continuar..." << endl;
                cin >> salir;
                archivo.close();
                break;
            }
            else if (op_Si_NO == 2) // Si elige "NO", se sale del caso y regresa al menu principal.
            {
                break; // Salir del switch case
            }
        case 4: // Muestra en pantalla los clientes de la tienda. Luego, pregunta al usuario si desea generar un informe en formato de archivo de texto.

            cout << "****************Clientes de la tienda****************" << endl;
            for (int i = 0; i < valor_Cliente; i++)
            {
                cout << i + 1 << "." << Clientes[i].getNombre() << " " << Clientes[i].getApellido() << endl;
            }
            cout << "\n";
            do
            {
                cout << "Desea realizar un reporte en TXT de los clientes comunes y el consumo por fecha??" << endl;
                cout << "[1]SI" << endl;
                cout << "[2]NO" << endl;
                cin >> op_Si_NO;
            } while (op_Si_NO < 1 || op_Si_NO > 2); // El buble se ejecutara mientras que  op_Si_NO  sea menor que 1 o mayor que 2
            //
            if (op_Si_NO == 1) // Si elige "SI", se crea un archivo llamado "4.ReporteClientesComunes.txt" y se guardan los detalles de los clientes comunes en el archivo.
            {
                // declaramos
                ofstream archivo("4.ReporteClientesComunes.txt");
                // Verificamos si el archivo se abrió correctamente
                if (!archivo.is_open())
                {
                    cout << "Error al abrir el archivo" << endl;
                    return 1;
                }
                archivo << "**********CLIENTES COMUNES**********" << endl;
                for (int i = 0; i < valor_Cliente; i++)
                {
                    archivo << i + 1 << "." << Clientes[i].InfoCliente() << endl;
                }
                archivo << endl;
                archivo << "**********CLIENTES con mayores compras**********" << endl;

                // Ordenamiento de mayor a menor del numero de compras de los clientes
                for (int i = 0; i < valor_Cliente - 1; i++)
                {
                    for (int j = i + 1; j < valor_Cliente; j++)
                    {
                        if (Clientes[j].getCompras() > Clientes[i].getCompras())
                        {
                            Cliente temp = Clientes[i];
                            Clientes[i] = Clientes[j];
                            Clientes[j] = temp;
                        }
                    }
                }

                for (int i = 0; i < valor_Cliente; i++)
                {
                    archivo << i + 1 << "." << Clientes[i].InfoCliente() << endl;
                }

                cout << "REPORTE HECHO!\n";
                cout << "Presione una tecla para continuar..." << endl;
                cin >> salir;
                archivo.close();
            }
            else if (op_Si_NO == 2) // Si elige "NO", se sale del caso y regresa al menu principal.
            {
                break; // Salir del switch case
            }
        default:
            break;
        }
    } while (opcion != 5);
    return 0;
}