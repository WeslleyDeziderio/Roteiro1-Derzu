#include "Data.h"

Data::Data(){

}

Data::Data(int dia, int mes, int ano){
    this->ano = ((ano >= 0001) && (ano <= 2019)) ? ano: 0001;
    this->dia = ((dia >= 1) && (dia <= 31)) ? dia: 1;
    this->mes = ((mes >= 1) && (mes <= 12)) ? mes: 1;
}

Data::~Data(){

}

int Data::avancarDia(){
    dia++;
    if(dia > 31){
        dia = 1;
        mes++;
    }
    if(mes > 12){
        mes = 1;
        ano++;
    }
}

void Data::setDia(int dia){
    this->dia = ((dia <= 31 && dia >= 01)) ?dia: 01;
}

void Data::setMes(int mes){
    this->mes = ((mes <= 12 && mes >= 01)) ?mes: 01;
}

void Data::setAno(int ano){
    this->ano = ((ano <= 2019 && ano >= 0001)) ?ano :01;
}

int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}
