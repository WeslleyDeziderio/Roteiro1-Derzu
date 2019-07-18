#include "Empregadp.h"

Empregadp::Empregadp(std::string nome, std::string sobrenome, double salario){
    this->nome = nome;
    this->sobrenome = sobrenome;
}

Empregadp::~Empregadp(){

}

std::string Empregadp::getNome(){
    return nome;
}

std::string Empregadp::getSobrenome(){
    return sobrenome;
}

double Empregadp::getSalario(){
    return salario;
}

void Empregadp::setNome(std::string nome){
    this->nome = nome;
}

void Empregadp::setSobrenome(std::string sobrenome){
    this->sobrenome = sobrenome;

void Empregadp::setSalario(double salario){
    this->salario = salario;
}
