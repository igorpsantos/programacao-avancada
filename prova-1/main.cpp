/*
# Autor: Igor Pereira dos Santos
# Disciplina: Programação Avançada
# Curso: Ciência da Computação
# Atividade: Prova 1 º Bimestre
*/

#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

class Imprimivel {
 public:
        Imprimivel();
        virtual ~Imprimivel();

        virtual void imprime() = 0;
};

class VetorInt: public Imprimivel{
public:
    int _tamanho = 0;
    int *_vetor;

    VetorInt(int tamanho){
        if (tamanho > 0){
            _tamanho = tamanho;
            _vetor = new int[tamanho];
        }
    }

    VetorInt(){};

    void insere(int valor, int posicao){
        if(posicao <= _tamanho){
            _vetor[posicao++] = valor;
        }
    }

    // soma entre dois vetores - retorna um novo vetor
    VetorInt& operator + (const VetorInt& s)
    {
        // realiza o calculo da quantidade de inteiros que contem no vetor de cada classe VetorInt
        int aux_tam = ((_tamanho + s._tamanho) * sizeof(int) / 4);
        VetorInt * novo(aux_tam);

        // percorre o vetor de inteiros e atribui os valores no novo vetor
        int i = 0;
        for(i = 0; i < _tamanho; i++){
            novo._vetor[i] = _vetor[i];
        }
        // percorre o outro vetor aonde o ultimo indice tenha sido preenchido
        for(int j = i, int k = 0; k < s._tamanho; k++){
            novo._vetor[j++] = s._vetor[k];
        }

        return *novo;
    }

    // subtrai entre dois vetores - retorna um novo vetor
    VetorInt& operator - (const VetorInt& s)
    {
        // realiza o calculo da quantidade de inteiros que contem no vetor de cada classe VetorInt
        int aux_tam = ((_tamanho - s._tamanho) * sizeof(int) / 4);
        VetorInt * novo(aux_tam);

        // percorre o vetor de inteiros e atribui os valores no novo vetor
        int i = 0;
        for(i = 0; i < _tamanho; i++){
            *novo._vetor[i] = _vetor[i];
        }
        // percorre o outro vetor aonde o ultimo indice tenha sido preenchido
        for(int j = i, int k = 0; k < s._tamanho; k++){
            *novo._vetor[j++] = s._vetor[k];
        }

        return *novo;
    }

    // operador de produto entre os valores internos dos vetores
    int operator * (const VetorInt& s)
    {
        int somatorio_v1 = 0;
        int somatorio_v2 = 0;

        VetorInt novo(1);

        // percorre o vetor de inteiros
        int i = 0;
        for(i = 0; i < _tamanho; i++){
            somatorio_v1 = somatorio_v1 + _vetor[i];
        }
        // percorre o vetor de inteiros
        for(int k = 0; k < s._tamanho; k++){
            somatorio_v2 = s._vetor[k];
        }

        return somatorio_v1 * somatorio_v2;
    }

    // operador de produto multiplacação por numero real
    VetorInt& operator*(const float num)
    {
        VetorInt * novo(_tamanho);
        for(int i = 0; i < _tamanho; i++){
           novo._vetor[i] =  _vetor[i] * num;
        }
        return *novo;
    }

    // soma entre dois vetores - atribui a soma no primeiro vetor
    void operator +=(const VetorInt& s)
    {
        for(int i = 0; i < _tamanho;i++){
           _vetor[i] = _vetor[i] + s._vetor[i];
        }
    }
    // subtração entre dois vetores - atribui a soma no primeiro
     void operator -=(const VetorInt& s)
    {
        for(int i = 0; i < _tamanho; i++){
           _vetor[i] = _vetor[i] + s._vetor[i];
        }
    }

    // multiplicação por numero real e atribui no primeiro
    void operator*=(const int num)
    {
        VetorInt novo(_tamanho);

        for(int i = 0; i < _tamanho; i++){
           novo._vetor[i] =  _vetor[i] * num;
        }

    }
    // compara se dois vetores são iguais
   int operator==(const VetorInt &s) {

        for(int i = 0; i < _tamanho; i++){
           if(_vetor[i] != s._vetor[i]){
                return 0;
           }
        }
        return 1;
    }
    // compara se dois vetores são diferentes
    int operator!=(const VetorInt &s) {

        for(int i = 0; i < _tamanho; i++){
           if(!(_vetor[i] ==  s._vetor[i])){
            return 1;
           }
        }
        return 0;
    }

    // acessa a i-esima posição do vetor
    int operator[](int i) {
        if(i >= 0 && i < _tamanho){
            return _vetor[i];
        }

        return -1;
    }
    // acessa a i-esima posição do vetor
    int operator()(int i) {
        if(i >= 0 && i < _tamanho){
            return _vetor[i];
        }

        return -1;
    }

};

class Data: virtual class VetorInt {
public:
    Data(int dia,int mes,int ano): VetorInt(3){

        _vetor[0] = dia;
        _vetor[1] = mes;
        _vetor[2] = ano;
    }
    virtual ~Data();

    void imprime(){
        cout<< setfill('0') << setw(2)<< _vetor[0] << "/" ;
        cout << setfill('0') << setw(2)<< _vetor[1] << "/";
        cout << setfill('0') << setw(4)<< _vetor[2] << endl;
    }

    int operator[](int i) {
        if( i >= 0 && i < 3){
            return _vetor[i];
        }

        return -1;
    }
    int operator()(int i) {
        if(i >= 0 && i < 3 ){
            return _vetor[i];
        }

        return -1;
    }
};

int main() {

    VetorInt v1(2);
    VetorInt v2(2);

    v1._vetor[0] = 2;
    v1._vetor[1] = 2;

    v2._vetor[0] = 3;
    v2._vetor[1] = 3;

    VetorInt v3(2);
    //soma dois vetores
    v3 = v1 + v2;
    v3.imprime();
    //multiplica por um escalar real
    v3 = v1 * 3.2;
    v3.imprime();

    //multiplica um pelo outro
    v3 = v1 * v2;
    v3.imprime();

    //soma dois vetores e armazena no primeiro
    v1 += v2;
    v1.imprime();
    //subtrai dois vetores e armazena no primeiro
    v1 -= v2;
    v1.imprime();

    // multiplica um vetor por escalar e armazena no primeiro

    v1 *= 9;
    v1.imprime();
    // compara se os dois vetores são iguais
    if(v1 == v2){
        cout << "Os valores internos do vetor são iguais." << endl;
    }

    if (v1 != v2 ) {
        cout << "Os valores internos do vetor são diferentes." << endl;
    }
    //acessar indice
    cout << v1(0) << endl;
    //acessar indice
    cout << v2[1] << endl;
    //====================================================

    // data
    Data d1(30,07,1990);

    d1.imprime();
    Data* datas[1000];
    int j =1;
    for(int i = 0; i < 29; i++){

    datas[i] = new Data(j,02,2020);
        j++;
    }

    for(int i = 0; i < 29; i++)
    {
        datas[i]->imprime();
    }

    /*
    *
    * Professor houve alguns erros de compilação pois o formato que criei a estrutura do VetorInt
    * Como Ponteiro acabou dificultando um pouco a alocação e também a criação de novos ponteiros
    * Para retornar na função de cada sobrecarga, mas a ideia e objetivo central da prova está quase 100%
    * Faltando apenas compilar, deixei um pouco para ultima hora então não tive a oportunidade de ajustar todos os erros
    * e fazer compilar a prova.
    */

    return 0;
}
