#include "Empregado.h"

Empregado::Empregado(){

}

Empregado::Empregado(std::string nome, std::string sobrenome, double salario){
    this->nome = nome;
    this->sobrenome = sobrenome;
    this-> salario = salario;
}

Empregado::~Empregado(){

}

std::string Empregado::getNome(){
    return nome;
}

std::string Empregado::getSobrenome(){
    return sobrenome;
}

double Empregado::getSalario(){
    return salario;
}

void Empregado::setNome(std::string nome){
    this->nome = nome;
}

void Empregado::setSobrenome(std::string sobrenome){
    this->sobrenome = sobrenome;
}

void Empregado::setSalario(double salario){
    this->salario = (salario > 0) ?salario :0;
}
