#include<iostream>

main () {
    int x=6;
    int a, b, suma, resta, producto, division, modulo;

    std::cout<<"dame el valor de a = " << std::endl;
    std::cin >> a;
    std::cout<<"dame el valor de b = " << std::endl;
    std::cin >> b;
    suma = a + b;
    std::cout<<"El valor de la suma es = " << suma << std::endl;
    resta = a - b;
    std::cout<<"El valor de la resta es = " << resta << std::endl;
    producto = a * b;
    std::cout<<"El valor del producto es = " << producto << std::endl;
    division = a / b;
    std::cout<<"El valor de la division es = " << division << std::endl;
    modulo = a % b;
    std::cout<<"El valor del modulo es = " << modulo << std::endl;

    x++;//x=x+1
    std::cout <<"Asignacion incremento "<< x <<std::endl;
    x--;//x=x-1
    std::cout <<"Asignacion decremento "<< x <<std::endl;



    std::cout <<"Asignacion es "<< x <<std::endl;
    x*=5; //x=x*5
    std::cout <<"Asignacion Producto "<< x <<std::endl;
    x/=2;//x=x/2
    std::cout <<"Asignacion Division "<< x <<std::endl;
    x+=4;//x=x+4
    std::cout <<"Asignacion Suma "<< x <<std::endl;
    x-=1;//x=x-1
    std::cout <<"Asignacion Resta "<< x <<std::endl;
    x%=5; //x=x%5
    std::cout <<"Asignacion Modulo "<< x <<std::endl;


    

}