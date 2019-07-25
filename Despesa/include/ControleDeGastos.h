#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"

#define MAX_TAM 10

class ControleDeGastos{
    public:
        ControleDeGastos();
        virtual ~ControleDeGastos();
        void setDespesa(int pos, Despesa d);
        double calculaTotalDeDespesas();
        bool existeDespesaTipo();
        void print();

    private:
        Despesa despesas[MAX_TAM];
};

#endif
