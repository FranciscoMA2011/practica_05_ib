#include <iostream>
#include <cmath>
bool compare_float(float x, float y, float epsilon = 0.01f){
   if(fabs(x - y) < epsilon)
      return true; //son iguales
      return false; //no son iguales
}
int main (){
    float flotante_1{3.001};
    float flotante_2{2.20};
    int integro_1{3};
    int integro_2{2};
    
    //En las comparaciones, el valor 0 indica falso y el valor 1 verdadero

    std::cout<<"El resultado de operar "<<integro_1<<"%"<<integro_2<<" es "<<integro_1%integro_2<<std::endl;
    std::cout<<"El resultado de operar "<<integro_1<<"+"<<integro_2<<" es "<<integro_1+integro_2<<std::endl;
    std::cout<<"El resultado de operar "<<integro_1<<"-"<<integro_2<<" es "<<integro_1-integro_2<<std::endl;
    std::cout<<"El resultado de operar "<<integro_1<<"/"<<integro_2<<" es "<<integro_1/integro_2<<std::endl;
    std::cout<<"El resultado de operar "<<integro_1<<"*"<<integro_2<<" es "<<integro_1*integro_2<<std::endl;
    std::cout<<"El resultado de comparar "<<integro_1<<"^"<<integro_2<<" es "<<(integro_1^integro_2)<<std::endl;
    std::cout<<"El resultado de comparar "<<integro_1<<"&"<<integro_2<<" es "<<(integro_1 &integro_2)<<std::endl;
    std::cout<<"El resultado de comparar "<<integro_1<<"|"<<integro_2<<" es "<<(integro_1 |integro_2)<<std::endl;
    std::cout<<"El resultado de comparar "<<integro_1<<"=="<<integro_2<<" es "<<(integro_1==integro_2)<<std::endl;
    std::cout<<"El resultado de comparar "<<integro_1<<">="<<integro_2<<" es "<<(integro_1>=integro_2)<<std::endl;
    std::cout<<"El resultado de comparar "<<integro_1<<"<="<<integro_2<<" es "<<(integro_1<=integro_2)<<std::endl;
    std::cout<<"El resultado de comparar "<<integro_1<<"<"<<integro_2<<" es "<<(integro_1<integro_2)<<std::endl;
    std::cout<<"El resultado de comparar "<<integro_1<<">"<<integro_2<<" es "<<(integro_1>integro_2)<<std::endl;
    std::cout<<"El resultado de comparar "<<flotante_1<<"=="<<flotante_2<<" es "<<compare_float(flotante_1,flotante_2)<<std::endl;

    return 0;
}