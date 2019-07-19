#ifndef DATA_H
#define DATA_H

class Data{
    public:
        Data();
        Data(int dia, int mes, int ano);
        virtual ~Data();

        int avancarDia();
        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);
        int getDia();
        int getMes();
        int getAno();
    private:
        int dia, mes, ano;
};

#endif
