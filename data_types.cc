#include <iostream>

int main (){
    std::cout<<"El tipo de dato booleano se representa utilizando"<<sizeof(bool) << " bytes"<<std::endl;
    std::cout<<"El tipo de dato char se representa utilizando "<<sizeof(char) << " bytes"<<std::endl;
    
    std::cout<<"El tipo de dato entero se representa utilizando "<<sizeof(int) << " bytes" <<std::endl;
    
    std::cout<<"El tipo de dato float se representa utilizando "<<sizeof(float) << " bytes"<<std::endl;
    
    std::cout<<"El tipo de dato wide character se representa utilizando "<<sizeof(wchar_t) << " bytes"<<std::endl;
    std::cout<<"El tipo de dato double se representa utilizando "<<sizeof(double) << " bytes"<<std::endl;
    return 0;
}