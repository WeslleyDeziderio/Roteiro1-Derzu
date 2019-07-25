#ifndef DESPESA_H
#define DESPESA_H
#include <string>

class Despesa{
    public:
        Despesa(double valor, std::string tipoDeGasto);
        virtual ~Despesa();
        int getValor();
        void setValor(double valor);
        std::string getTipoDeGasto();
        void setTipoDeGasto(std::string tipoDeGasto);

    private:
        double valor;
        std::string tipoDeGasto;
};

#endif
