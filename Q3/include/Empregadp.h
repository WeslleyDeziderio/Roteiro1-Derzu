#ifndef EMPREGADP_H
#define EMPREGADP_H
#include <string>

class Empregadp{
    public:
        Empregadp(std::string nome, std::string sobrenome, double salario);
        virtual ~Empregadp();
        std::string getNome();
        std::string getSobrenome();
        double getSalario();

        void setNome(std::string nome);
        void setSobrenome(std::string sobrenome);
        void setSalario(double salario);
    private:
        std::string nome, sobrenomw;
        double salario;
};

#endif
