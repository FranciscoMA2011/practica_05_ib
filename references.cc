#include <iostream>

int main (){
    //int integro;
    int integro=0;
    /*int integro(0);
    int integro{0};
    int integro= {0}*/
    //float flotante;
    float flotante=0.0;
    /*float flotante(0.0);
    float flotante= {0}
    bool booleano;*/
    bool booleano=true;
    /*bool booleano(true);
    bool booleano{true};
    bool booleano={true}*/
    //char caracter;
    /*char caracter='a';
    char caracter={'a'};*/
    char caracter {'a'};
    int &integro_referencia=integro;
    bool &booleano_referencia=booleano;
    float &flotante_referencia=flotante;
    char &caracter_referencia=caracter;
    std::cout<<"El valor de las referencias son los siguientes: "<<std::endl;
    std::cout<<integro_referencia<<std::endl;
    std::cout<<flotante_referencia<<std::endl;
    std::cout<<booleano_referencia<<std::endl;
    std::cout<<caracter_referencia<<std::endl;
    return 0;
}