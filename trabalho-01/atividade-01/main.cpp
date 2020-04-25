/*
# Autor: Igor Pereira dos Santos
# Disciplina: Programação Avançada
# Curso: Ciência da Computação
# Atividade: Problema A - Jogo da Boca
*/

#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

// Definição das constantes entre valor maximo e minimo
constexpr auto MAX_N = 10100;;
constexpr auto MIN_N = 3;;

using namespace std;
// funcao para validar o tamanho do numero
bool validaNum(int num1, int num2) {
	if (num1 >= MIN_N && num1 <= MAX_N) {
		return true;
	}
	else {
		cout << "Numero invalido, por favor insira um numero maior ou igual a 3." << endl;
		system("pause");
		return (0);
	}
}

int validaGanhador(int n) {
	int aux = n % 3;
	switch (aux) {
	case 0:
		return 0;
		break;
	case 1:
		return 1;
		break;
	case 2:
		return 2;
	default:
		return -1;
	}
}
// funcao que encerra o jogo, quando há uma entrada invalida
void encerraJogo() {
	cout << "Programa encerrado, insira um numero valido" << endl;
	system("pause");
	return;
}

int main() {
	// VARIAVEIS
	int jogador1 = 0, jogador2 = 0;
	char aux1[5], aux2[5];
	// DADOS DE ENTRADA E SAIDA
	cout << "Bem vindo ao N de Boca:" << endl;
	cout << "Jogador 1 digite um numero inteiro:" << endl;
	cin.getline(aux1, 5);
	cout << "Jogador 2 digite o numero do jogador 1 somando 1 ou 2:" << endl;
	cin.getline(aux2, 5);
	// os dados de entrada são do tipo char para validar se é um numero válido
	jogador1 = atoi(aux1);
	jogador2 = atoi(aux2);
	// funcao para validacao do numero min e max
	if (validaNum(jogador1, jogador2)) {
		cout << "ENTRADA \t\t" << "SAIDA" << endl;
		cout << jogador1 << "\t\t\t" << validaGanhador(jogador1) << endl;
		cout << jogador2 << "\t\t\t" << validaGanhador(jogador2) << endl;
	}
	else {
		encerraJogo();
	}

	return 0;
}