/*
# Autor: Igor Pereira dos Santos
# Disciplina: Programação Avançada
# Curso: Ciência da Computação
# Atividade: Problema B - Cachorro-quente
*/

#include <iostream>

using namespace std;

float media(int, int);

int main() {

	int h = 0; // numero de cachorros-quentes consumidos pelos participantes
	int p = 0; // numero de participantes que estavam realizando o torneio
	float result = 0.00; // variavel para atribuir o resultado da funcao media

	cout << "Digite o numero de cachorros-quentes consumidos no torneio: " << endl;
	cin >> h;

	cout << "Digite o numero de participantes do torneio:" << endl;
	cin >> p;

	result = media(h, p);
	// impressão do resultado
	cout << "ENTRADA\t\tSAIDA" << endl;
	cout << h << " " << p << "\t\t";
	cout.precision(2);
	cout << fixed << result << endl;

	return 0;
}

float media(int h, int p) {
	return (float) h / p; // truncar um dos valores para fazer a divisão de inteiro por float para não haver perde da dados
}