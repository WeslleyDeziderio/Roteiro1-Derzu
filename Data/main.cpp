#include <iostream>
#include "Data.h"

int main(void){
    Data data1 = Data();

    int dia, mes, ano;
    char sel;

    std::cout << "Digite o dia: ";
    std::cin >> dia;
    std::cout << "Digite o mes: ";
    std::cin >> mes;
    std::cout << "Digite o ano: ";
    std::cin >> ano;

    data1.setDia(dia);
    data1.setMes(mes);
    data1.setAno(ano);

    std::cout << data1.getDia() << "/" << data1.getMes() << "/" << data1.getAno() << std::endl;

    for(int i = 0; ;i++){
        std::cout << "Deseja avancar a data? (S/N)" << std::endl;
        std::cin >> sel;
        if(sel == 'S' || sel == 's'){
            data1.avancarDia();
            std::cout << "Data atualizada: " << data1.getDia() << "/" << data1.getMes() << "/" << data1.getAno() << std::endl;
        }
        if(sel == 'N' || sel == 'n'){
            break;
        }
    }

    return 0;
}
