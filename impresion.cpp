#include <iostream> //libreria que almacena los comandos de impresion y captura de datos

main () { //inicio del bloque principal
     /*10 un numero entero
     entero similar en c++ -> int (integer)
     Formato general para declarar la variable es [tipo de dato][nombre de la variable];
     */
    int numero; //declara el nombre de la variable con su tipo
    //10.8 un numero decimal el similar en c++ -> float (flotante)
    float numerodecimal;
    //'X' un caracter el similar de c++ -> char (character)
    char caracter; //se almacena un caracter
    //Programacion es un conjunto de caracteres similar de c++ char [numero de caracteres]
    char cadena [15]; 
    //Booleano (False ,Verdadero ) tipo de dato logico similar a c++ bool (Boolean)
    //Ingresen false->0 true->1 o mayor a 0 
    bool opcion;
    //imprimir en pantalla (salida de datos))
    std::cout << "Dame una opcion (false/true): ";
    //capturar datos (entrada de datos)
    std::cin >> opcion ; 
    //impresion de la captura de datos
    std::cout << "Este es la opcion que ingresaste: ";
    std::cout << opcion; 
}//fin del bloque principal