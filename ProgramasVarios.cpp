/* Desarrollar en C++ los siguientes programas:

    1.	Hacer un programa en C++ para un bazar que tiene una promo de descuento para vender al por mayor. Esta dependerá del número 
        de productos que se compren. Si son más de diez, se les dará un 12% de descuento sobre el total de la compra; si el número 
        de productos es mayor de veinte, pero menor de treinta, se le otorga un 25% de descuento; y si son más treinta productos de 
        le otorgará un 40% de descuento. El precio de cada producto es de $80.

    2.	Hacer un programa en C++ para ayudar a un trabajador a saber cuál será su salario semanal, se sabe que, si trabaja 40 horas 
        o menos, se le pagará $200 por hora, pero si trabaja más de 40 horas entonces las horas extras se le pagarán a $250 por hora.

    3.	Hacer un programa en C++ para determinar el promedio de tres notas y determinar si el estudiante aprobó o no.

    4.	Hacer un programa en C++ que pida números hasta que el usuario introduzca 99, luego mostrar los números y el promedio.

    5.	Hacer un programa en C++ que pida un número y calcule la suma desde 1 hasta ese número, en incrementos de uno.

    6.	Hacer un programa en C++ para calcular la suma de los números pares e impares comprendidos entre 1 y n (n lo introduce el usuario).

    7.	Hacer un programa en C++ que pida dos números enteros. El programa pedirá de nuevo el segundo número mientras no sea mayor que 
        el primero. El programa terminará escribiendo los dos números.

    8.	Hacer un programa en C++ que pida números mientras no se escriba un número negativo. El programa terminará escribiendo la suma 
        de los números introducidos. */



// ProgramasVarios.cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void bazarDescuento();
void salarioSemanal();
void promedioNotas();
void numerosHasta99();
void sumaHastaN();
void sumaParesImpares();
void dosNumerosMayor();
void sumaHastaNegativo();
void menu();

int main() 
    {
        menu();
        return 0;
    }

void menu() 
    {
        int opcion = 0;
        do 
            {
                cout << "\n--------------" << "\nMENU PRINCIPAL\n" << "--------------" << endl;
                cout << "1. Bazar Descuento" << endl;
                cout << "2. Salario Semanal" << endl;
                cout << "3. Promedio Notas" << endl;
                cout << "4. Numeros hasta 99" << endl;
                cout << "5. Suma hasta N" << endl;
                cout << "6. Suma Pares e Impares" << endl;
                cout << "7. Dos Numeros Mayor" << endl;
                cout << "8. Suma hasta Negativo" << endl;
                cout << "0. Salir\n" << endl;
                cout << "Selecciona una opcion: ";
                cin >> opcion;

                cout << endl;

                switch (opcion) 
                    {
                        case 1: bazarDescuento(); 
                                break;
                        case 2: salarioSemanal(); 
                                break;
                        case 3: promedioNotas(); 
                                break;
                        case 4: numerosHasta99(); 
                                break;
                        case 5: sumaHastaN(); 
                                break;
                        case 6: sumaParesImpares(); 
                                break;
                        case 7: dosNumerosMayor();  
                                break;
                        case 8: sumaHastaNegativo(); 
                                break;
                        case 0: cout << "Saliendo del programa." << endl; 
                                break;
                        default: cout << "Opcion invalida. Intenta de nuevo." << endl;
                    }

            } while (opcion != 0);
    }

void bazarDescuento() 
    {
        int subOpcion = 0, cantidadProductos = 0;
        double precioProducto = 80.0, totalCompra = 0.0, descuento = 0.0, totalConDescuento = 0.0;

        do 
            {
                cout << "BAZAR DESCUENTO\n" << "---------------" << endl;
                cout << "1. Calcular descuento" << endl;
                cout << "0. Volver al menu principal" << endl;
                cout << "\nSelecciona una opcion: ";
                cin >> subOpcion;

                if (subOpcion == 1) 
                    {
                        cout << "Ingresa la cantidad de productos comprados: ";
                        cin >> cantidadProductos;

                        totalCompra = cantidadProductos * precioProducto;

                        if (cantidadProductos > 10) 
                            {
                                descuento = 0.12;
                            }

                        if (cantidadProductos > 20 && cantidadProductos < 30) 
                            {
                                descuento = 0.25;
                            }

                        if (cantidadProductos >= 30) 
                            {
                                descuento = 0.40;
                            }

                        totalConDescuento = totalCompra * (1 - descuento);

                        cout << fixed << setprecision(2);
                        cout << setw(20) << left << "Total de la compra:" << "$ " << totalCompra << endl;
                        cout << setw(20) << left << "Descuento aplicado:" << static_cast<int>(descuento * 100) << "%" << endl;
                        cout << setw(20) << left << "Total a pagar:" << "$ " << totalConDescuento << endl;

                    } else if (subOpcion != 0) 
                        {
                            cout << "Opcion invalida. Intenta de nuevo." << endl;
                        }

                cout << endl;

            } while (subOpcion != 0);
    }

void salarioSemanal() 
    {
        int subOpcion = 0, horasTrabajadas = 0;
        double salario = 0.0;

        do 
            {
                cout << "SALARIO SEMANAL\n" << "---------------" << endl;
                cout << "1. Calcular salario" << endl;
                cout << "0. Volver al menu principal" << endl;
                cout << "\nSelecciona una opcion: ";
                cin >> subOpcion;

                if (subOpcion == 1) 
                    {
                        cout << "Ingresa las horas trabajadas en la semana: ";
                        cin >> horasTrabajadas;

                        if (horasTrabajadas <= 40) 
                            {
                                salario = horasTrabajadas * 200.0;

                            } else 
                                {
                                    salario = 40 * 200.0 + (horasTrabajadas - 40) * 250.0;
                                }

                        cout << fixed << setprecision(2);
                        cout << "El salario semanal es: $ " << salario << endl;

                    } else if (subOpcion != 0) 
                        {
                            cout << "Opcion invalida. Intenta de nuevo." << endl;
                        }
                        
                cout << endl;
                
            } while (subOpcion != 0);
    }

void promedioNotas() 
    {
        int subOpcion = 0;
        double nota1 = 0.0, nota2 = 0.0, nota3 = 0.0, promedio = 0.0;

        do 
            {
                cout << "PROMEDIO NOTAS\n" << "--------------" << endl;
                cout << "1. Calcular promedio" << endl;
                cout << "0. Volver al menu principal" << endl;
                cout << "\nSelecciona una opcion: ";
                cin >> subOpcion;

                if (subOpcion == 1) 
                    {
                        cout << "Ingresa la primera nota: ";
                        cin >> nota1;
                        cout << "Ingresa la segunda nota: ";
                        cin >> nota2;
                        cout << "Ingresa la tercera nota: ";
                        cin >> nota3;

                        promedio = (nota1 + nota2 + nota3) / 3.0;

                        cout << fixed << setprecision(2);
                        cout << "El promedio de las notas es: " << promedio << endl;

                        if (promedio >= 6.0) 
                            {
                                cout << "El estudiante Aprobo." << endl;
                            } else 
                                {
                                    cout << "El estudiante Reprobo." << endl;
                                }

                    } else if (subOpcion != 0) 
                        {
                            cout << "Opcion invalida. Intenta de nuevo." << endl;
                        }

                    cout << endl;

            } while (subOpcion != 0);
    }

void numerosHasta99() 
    {
        int subOpcion = 0, indice = 0, cantidadNumeros = 0, numero = 0;
        double suma = 0.0, promedio = 0.0;
        const int MAX_NUMEROS = 100;
        int numeros[MAX_NUMEROS] = {0};
        
        do 
            {
                cout << "NUMEROS HASTA 99\n" << "----------------"<< endl;
                cout << "1. Ingresar numeros y calcular promedio" << endl;
                cout << "0. Volver al menu principal" << endl;
                cout << "\nSelecciona una opcion: ";
                cin >> subOpcion;

                if (subOpcion == 1) 
                    {
                        cout << "Ingresa numeros (99 para terminar):" << endl;
                        
                        while (cin >> numero && numero != 99 && indice < MAX_NUMEROS) 
                            {
                                numeros[indice++] = numero;
                                suma += numero;
                                cantidadNumeros++;
                            }

                        cout << "\nNumeros ingresados:" << endl;

                        for (int i = 0; i < cantidadNumeros; ++i) 
                            {
                                cout << numeros[i] << " ";
                            }

                        cout << endl;

                        if (cantidadNumeros > 0) 
                            {
                                cout << fixed << setprecision(2);
                                promedio = suma / cantidadNumeros;
                                cout << "Promedio: " << promedio << endl;

                            } else 
                                {
                                    cout << "No se ingresaron numeros." << endl;
                                }

                    } else if (subOpcion != 0) 
                        {
                            cout << "Opcion invalida. Intenta de nuevo." << endl;
                        }

                cout << endl;
                
            } while (subOpcion != 0);
    }

void sumaHastaN() 
    {
        int subOpcion = 0, n = 0, suma = 0;

        do 
            {
                cout << "SUMA HASTA N\n" << "------------" << endl;
                cout << "1. Calcular suma" << endl;
                cout << "0. Volver al menu principal" << endl;
                cout << "\nSelecciona una opcion: ";
                cin >> subOpcion;

                if (subOpcion == 1) 
                    {
                        cout << "Ingresa un numero entero positivo: ";
                        cin >> n;

                        for (int i = 1; i <= n; ++i) 
                                {
                                    suma += i;
                                }

                        cout << "La suma desde 1 hasta " << n << " es: " << suma << endl;
                    } else if (subOpcion != 0) 
                        {
                            cout << "Opcion invalida. Intenta de nuevo." << endl;
                        }
                cout << endl;
            } while (subOpcion != 0);
    }

void sumaParesImpares() 
    {
        int subOpcion = 0, n = 0, sumaPares = 0, sumaImpares = 0;

        do 
            {
                cout << "SUMA PARES E IMPARES\n" << "--------------------" << endl;
                cout << "1. Calcular sumas" << endl;
                cout << "0. Volver al menu principal" << endl;
                cout << "\nSelecciona una opcion: ";
                cin >> subOpcion;

                if (subOpcion == 1) 
                    {
                        cout << "Ingresa un numero entero positivo: ";
                        cin >> n;

                        for (int i = 1; i <= n; ++i) 
                            {
                                if (i % 2 == 0) 
                                    {
                                        sumaPares += i;

                                    } else 
                                        {
                                            sumaImpares += i;
                                        }
                            }

                        cout << "Suma de los numeros pares entre 1 y " << n << ": " << sumaPares << endl;
                        cout << "Suma de los numeros impares entre 1 y " << n << ": " << sumaImpares << endl;

                    } else if (subOpcion != 0) 
                        {
                            cout << "Opcion invalida. Intenta de nuevo." << endl;
                        }

                cout << endl;

            } while (subOpcion != 0);
    }

void dosNumerosMayor() 
    {
        int subOpcion = 0, num1 = 0, num2 = 0;
        bool valido = false;

        do 
            {
                cout << "DOS NUMEROS MAYOR\n" << "-----------------" << endl;
                cout << "1. Ingresar y comparar numeros" << endl;
                cout << "0. Volver al menu principal" << endl;
                cout << "\nSelecciona una opcion: ";
                cin >> subOpcion;

                if (subOpcion == 1) 
                    {
                        cout << "Ingresa el primer numero entero: ";
                        cin >> num1;

                        valido = false;
                        do 
                            {
                                cout << "Ingresa el segundo numero entero (debe ser mayor que el primero): ";
                                cin >> num2;

                                if (num2 > num1) 
                                    {
                                        valido = true;
                                    } else 
                                        {
                                            cout << "Error: El segundo numero debe ser mayor que el primero. Intenta de nuevo." << endl;
                                        }

                            } while (!valido);

                        cout << "Primer numero: " << num1 << endl;
                        cout << "Segundo numero: " << num2 << endl;

                    } else if (subOpcion != 0) 
                        {
                            cout << "Opcion invalida. Intenta de nuevo." << endl;
                        }

                    cout << endl;

            } while (subOpcion != 0);
    }

void sumaHastaNegativo() 
    {
        int numero = 0, suma = 0, subOpcion = 0;

        do 
            {
                cout << "SUMA HASTA NEGATIVO\n" << "-------------------" << endl;
                cout << "1. Ingresar numeros y calcular suma" << endl;
                cout << "0. Volver al menu principal" << endl;
                cout << "\nSelecciona una opcion: ";
                cin >> subOpcion;

                if (subOpcion == 1) 
                    {
                        suma = 0;
                        cout << "Ingresa numeros (un numero negativo para terminar):" << endl;

                        while (cin >> numero && numero >= 0) 
                            {
                                suma += numero;
                            }

                        cout << "La suma de los numeros ingresados es: " << suma << endl;

                    } else if (subOpcion != 0) 
                        {
                            cout << "Opcion invalida. Intenta de nuevo." << endl;
                        }

                cout << endl;
                
            } while (subOpcion != 0);
    }