/*
# Autor: Igor Pereira dos Santos
# Disciplina: Programação Avançada
# Curso: Ciência da Computação
# Atividade: Problema D - Quantos Fibs?
*/

#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

double fibonacci(int a, int b)
{
	int quantfibs = 0;
	int a1 = 1, b1 = 1, x1, i1;
	if (a1 == 1) x1 = a1;
	if (a1 == 2) x1 = b1;
	while(x1 < b){
		x1 = a1 + b1;
		a1 = b1;
		b1 = x1;
		if (x1 >= a && x1 < b) {
			quantfibs++;
		}
	}
	return quantfibs;
}

	int main()
	{
		int a, b;
		int result = 0;
		cout << "Para saber a quantidade de fibs entre a e b, digite os valores a seguir:" << endl;
		cout <<"\nDigite o valor para a: ";
		cin >> a;

		cout << "\nDigite o valor para b: ";
		cin >> b;
		result = fibonacci(a, b);
		cout << "Quantos fibs = " << result << endl;
		return 0;
	}