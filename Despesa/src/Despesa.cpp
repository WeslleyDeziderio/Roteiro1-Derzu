#include "Despesa.h"

Despesa::Despesa(double valor, std::string tipoDeGasto){
    this->valor = (valor >= 0) ?valor :0;
    this->tipoDeGasto = tipoDeGasto;
}

Despesa::~Despesa(){

}


int Despesa::getValor(){
    return valor;
}

void Despesa::setValor(valor){
    this->valor = valor;
}

std::string Despesa::getTipoDeGasto(){
    return tipoDeGasto;
}

void Despesa::setTipoDeGasto(){
    this->tipoDeGasto = tipoDeGasto;
}
