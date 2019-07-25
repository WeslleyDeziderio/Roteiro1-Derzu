#ifndef CONTROLDEGASTOS_H
#define CONTROLDEGASTOS_H
#include "Despesa.h"

class ControlDeGastos{
    public:
        ControlDeGastos();
        virtual ~ControlDeGastos();
        setDespesas(Despesa d, int pos);
        double calculoTotalDeDespesas();
        bool existeDespesaDoTipo();
    private:
        Despesa despesa[10];
        int despesasTotais;
};

#endif
