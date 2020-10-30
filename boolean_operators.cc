#include <iostream>

int main(){
    std::cout<<"TABLA DE LA VERDAD a=falso b=falso"<<std::endl;
    bool a_falso=false;
    bool b_falso=false;
    std::cout<<"Operación AND: ";
    std::cout<<(a_falso and b_falso)<<std::endl;
    std::cout<<"Operación OR: ";
    std::cout<<(a_falso or b_falso)<<std::endl;
    std::cout<<"Operación NOT de a AND b: ";
    std::cout<<not(a_falso and b_falso)<<std::endl<<std::endl;

    std::cout<<"TABLA DE LA VERDAD a=falso b=verdadero"<<std::endl;
    bool c_falso=false;
    bool d_verdadero=true;
    std::cout<<"Operación AND: ";
    std::cout<<(c_falso and d_verdadero)<<std::endl;
    std::cout<<"Operación OR: ";
    std::cout<<(c_falso or d_verdadero)<<std::endl;
    std::cout<<"Operación NOT de a AND b: ";
    std::cout<<not(c_falso and d_verdadero)<<std::endl<<std::endl;

    std::cout<<"TABLA DE LA VERDAD a=verdadero b=falso"<<std::endl;
    bool verdadero_e=true;
    bool f_falso=false;
    std::cout<<"Operación AND: ";
    std::cout<<(verdadero_e and f_falso)<<std::endl;
    std::cout<<"Operación OR: ";
    std::cout<<(verdadero_e or f_falso)<<std::endl;
    std::cout<<"Operación NOT de a AND b: ";
    std::cout<<not(verdadero_e and f_falso)<<std::endl<<std::endl;

    std::cout<<"TABLA DE LA VERDAD a=verdadero b=verdadero"<<std::endl;
    bool g_verdadero=true;
    bool h_verdadero=true;
    std::cout<<"Operación AND: ";
    std::cout<<(g_verdadero and h_verdadero)<<std::endl;
    std::cout<<"Operación OR: ";
    std::cout<<(g_verdadero or h_verdadero)<<std::endl;
    std::cout<<"Operación NOT de a AND b: ";
    std::cout<<not(g_verdadero and h_verdadero)<<std::endl;
    return 0;
}