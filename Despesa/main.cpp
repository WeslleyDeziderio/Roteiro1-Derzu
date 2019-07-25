#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"

int main(void){
    ControleDeGastos controle1 = ControleDeGastos();
    Despesa d1 = Despesa(177.90, "Livros");
    controle1.setDespesa(0, d1);
    Despesa d1 = Despesa(1959.99, "Pecas de computador");
    controle1.setDespesa(1, d1);

    ControleDeGastos *controle2 = new ControleDeGastos();
    Despesa d2 = Despesa(179, "Roupas");
    controle2.setDespesa(2, d2);

    std::cout << "Total de despesas: " << controle1.calculaTotalDeDespesas() << std::endl;
    std::cout << std::endl;

    controle1.print();

    std::cout << "Total de despesas: " << controle2->calculaTotalDeDespesas() << std::endl;
    std::cout << std::endl;

    controle2.print();

    delete controle2;

    return 0;
}
