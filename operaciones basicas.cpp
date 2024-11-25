#include <iostream>

int main(){
    float num1 ,num2;
    char conti;

do{
    std::cout <<"ingrese un numero:"<<std::endl;
    std::cin >> num1;
    std::cout <<"ingrese el segundo numero:"<<std::endl;
    std::cin >> num2;

    float suma = num1 + num2; 
    float resta = num1 - num2; 
    float multiplicacion = num1 * num2; 
    float division = num1 / num2; 

    std::cout <<"La suma es:" << suma <<std::endl;
    std::cout <<"La resta es:" <<resta <<std::endl;
    std::cout <<"La multiplicacion es:" <<multiplicacion <<std::endl;
    std::cout <<"La division es:" <<division <<std::endl;

   std::cout << "¿Desea continuar? (y/n): ";
    std::cin >> conti;
    }  while (conti != 'n' && conti != 'N');
    return 0;
}
