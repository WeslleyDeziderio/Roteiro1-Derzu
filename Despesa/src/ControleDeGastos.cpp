#include "ControleDeGastos.h"
#include "Despesa.h"

ControleDeGastos::ControleDeGastos(){

}

ControleDeGastos::~ControleDeGastos(){

}

void ControleDeGastos::setDespesa(int pos, Despesa d){
    despesas[pos] = d;
}

double ControleDeGastos::calculaTotalDeDespesas(){
    double flag = 0;

    for(int i = 0; i < MAX_TAM; i++){
        flag += despesas[i].getValor();
    }

    return flag;
}

bool ControleDeGastos::existeDespesaTipo(){
    for(int i = 0; i < MAX_TAM; i++){
        if(despesas[i].getTipoDeGasto() == tipoDeGasto)
            return true;
    }

    return 0;
}

void ControleDeGastos::print(){
    for(int i = 0; i < MAX_TAM; i++){
        if(despesas[i].getValor() > 0){
            std::cout << "Indice: " << i << "\n" << "Valor da despesa: " << despesas[i].getValor() << "\n" <<
            "Tipo de despesa: " << despesas[i].getTipoDeGasto() << std::endl;
            std::cout << std::endl;
        }
    }
}
