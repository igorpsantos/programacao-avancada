/*
# Autor: Igor Pereira dos Santos
# Disciplina: Programação Avançada
# Curso: Ciência da Computação
# Atividade: Trabalho - 03
*/

#include <iostream>
#include "contaCorrente.cpp"
#include "contaPoupanca.cpp"
#include "cliente.h"

using namespace std;

int main() {

    Cliente c1("Jorge");
    Cliente c2("Maria");

    // Etapa 3
    cout << "Criando as contas.." << endl;
    ContaCorrente cc1(101, 0, c1);
    ContaCorrente cc2(102, 0, c2);

    cout << "Criando as contas.. << endl;
    ContaPoupanca cp1(501, 0, c1);
    ContaPoupanca cp2(502, 0, c2);

    cout << "Realizando operacoes" << endl;

    cc1.deposita(500);
    cc2.deposita(1200);
    cc1.retira(200);
    cc2.retira(350);

    cp1.deposita(950);
    cp2.deposita(1500);
    cp1.retira(100);
    cp2.retira(500);

    cc1.extrato();
    cc2.extrato();
    cp1.extrato();
    cp2.extrato();

    cp2.transfere(&cc1, 1000);

    std::cout << "Saldo antes dos juros" << std::endl;
    cc2.extrato();
    cp1.extrato();

    cc2.aplicaJurosDiarios(100);
    cp1.aplicaJurosDiarios(100);

    std::cout << "Saldo depois dos juros" << std::endl;
    cc2.extrato();
    cp1.extrato();

    // Etapa 5
    /*
    *    Ao realizar o comando o construtor vazio é 100 vezes, não é ideal pois pode ocasionar problemas de memoria.
    */
    ContaCorrente vetorContasCorrentes[100];

    // Etapa 6
    /*
    *   Não é possível criar um vetor de uma classe abstrata a mesma não pode ser instaciada, o ideal é utilizar um vetor de ponteiros.
    */
    Conta * vetorContas[100];

    return 0;
}
