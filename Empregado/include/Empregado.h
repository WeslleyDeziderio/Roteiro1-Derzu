#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>

class Empregado{
    public:
        Empregado();
        Empregado(std::string nome, std::string sobrenome, double salario);
        virtual ~Empregado();
        std::string getNome();
        std::string getSobrenome();
        double getSalario();

        void setNome(std::string nome);
        void setSobrenome(std::string sobrenome);
        void setSalario(double salario);
    private:
        std::string nome, sobrenome;
        double salario;
};

#endif
