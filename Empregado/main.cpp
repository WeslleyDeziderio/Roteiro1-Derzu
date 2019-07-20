#include <iostream>
#include "Empregado.h"

int main(void){
    std::string nome, sobrenome;
    double salario;

    Empregado empregado1 = Empregado();
    //Empregado *empregado2 = new Empregado();

    std::cout << "Insira nome e sobrenome do primeiro empregado: " << std::endl;
    std::cin >> nome >> sobrenome;
    std::cout << "Insira o salario mensal do primeiro empregado: " << std::endl;
    std::cin >> salario;

    empregado1.setNome(nome);
    empregado1.setSobrenome(sobrenome);
    empregado1.setSalario(salario);

    std::cout << "O nome completo do primeiro empregado eh: " << empregado1.getNome() << " " << empregado1.getSobrenome() << std::endl;
    std::cout << "Salario do primeiro empregado: " << empregado1.getSalario() << "R$" << std::endl;

    std::cout << "O salario anual do empregado 1 eh: " << empregado1.getSalario()*12 << "R$" << std::endl;

    return 0;
}
