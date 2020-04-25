/*
# Autor: Igor Pereira dos Santos
# Disciplina: Programação Avançada
# Curso: Ciência da Computação
# Atividade: Problema C - Conversão de Base
*/

#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;
//  prototipo das funções
void decimalToHex(int);
void hexToDecimal(char[255]);

int main() {
	// variaveis para auxiliar na recuperação do valor do stdin
	int decimal = 0;
	char hex[255];
	char auxDecimalHex[255];
	bool ehDecimal = false;
	bool ehHex = false;
		
	cout << "Entre com um valor decimal ou hexadecimal (se for hexadecimal iniciando o numero com 0x):" << endl;
	cin.getline(auxDecimalHex, 255);
	// percorrer o vetor e verificar se é uma string, contendo um valor hexadecimal iniciado com 0x
	for (int i = 0; i <= strlen(auxDecimalHex); i++) {
		if (auxDecimalHex[i] == '0') {
			if (auxDecimalHex[i + 1] == 'x') {
				ehHex = true;
				ehDecimal = false;
				break;
			}
		}
		ehDecimal = true;
		ehHex = false;
	}
	
	// se for um decimal, então não é um hexa
	if (ehDecimal == true && ehHex == false) {
		decimal = atoi(auxDecimalHex);
		if (decimal > 0) {
			decimalToHex(decimal);
		}
	}
	// se for um hexa, então não é um decimal
	if (ehHex == true && ehDecimal == false) {
		hexToDecimal(auxDecimalHex);
	}

	return 0;
}

// descritivo das funções

void decimalToHex(int number) {
	
	int vetor[20];

	// validando divisão por zero
	if (number > 0) {
		int i = 0;
		int aux = number;
		bool stop = false;
		while (stop != true) {
			vetor[i++] = aux % 16;
			if ((aux = (aux / 16)) == 0) {
				stop = true;
			}
			else {
				stop = false;
			}

		}

		// percorre o vetor de traz para frente
		const int tam = i;
		char hex[255] = {'0', 'x'};
		int k = 2;
		for (int j = i - 1; j >= 0; j--) {
			switch (vetor[j]) {
				case 15:
					hex[k++] = 'F';
					break;
				case 14:
					hex[k++] = 'E';
					break;
				case 13:
					hex[k++] = 'D';
					break;
				case 12:
					hex[k++] = 'C';
					break;
				case 11:
					hex[k++] = 'B';
					break;
				case 10:
					hex[k++] = 'A';
					break;
				case 9:
					hex[k++] = 57;
					break;
				case 8:
					hex[k++] = 56;
					break;
				case 7:
					hex[k++] = 55;
					break;
				case 6:
					hex[k++] = 54;
					break;
				case 5:
					hex[k++] = 53;
					break;
				case 4:
					hex[k++] = 52;
					break;
				case 3:
					hex[k++] = 51;
					break;
				case 2:
					hex[k++] = 50;
					break;
				case 1:
					hex[k++] = 49;
					break;
				case 0:
					hex[k++] = 48;
				case -1:
					break;
				default:
					cout << "Numero invalido" << endl;
			}
		}
		// imprime o valor no terminal
		for (int z = 0; z <= strlen(hex); z++) {
			cout << hex[z];
		}
	}
}

void hexToDecimal(char hexa[255]){
	int len = strlen(hexa);
	int i = 0, exp = 0;
	int somatorio = 0;
	if (len > 0) {
		for (len; len >= i; len--) {
			switch (hexa[len]){
			case 'F':
				somatorio = somatorio + (15 * (int)(pow(16, exp++)));
				break;
			case 'E':
				somatorio = somatorio + (14 * (int)(pow(16, exp++)));
				break;
			case 'D':
				somatorio = somatorio + (13 * (int)(pow(16, exp++)));
				break;
			case 'C':
				somatorio = somatorio + (12 * (int)(pow(16, exp++)));
				break;
			case 'B':
				somatorio = somatorio + (11 * (int)(pow(16, exp++)));
				break;
			case 'A':
				somatorio = somatorio + (10 * (int)(pow(16, exp++)));
				break;
			case '9':
				somatorio = somatorio + (9 * (int)(pow(16, exp++)));
				break;
			case '8':
				somatorio = somatorio + (8 * (int)(pow(16, exp++)));
				break;
			case '7':
				somatorio = somatorio + (7 * (int)(pow(16, exp++)));
				break;
			case '6':
				somatorio = somatorio + (6 * (int)(pow(16, exp++)));
				break;
			case '5':
				somatorio = somatorio + (5 * (int)(pow(16, exp++)));
				break;
			case '4':
				somatorio = somatorio + (4 * (int)(pow(16, exp++)));
				break;
			case '3':
				somatorio = somatorio + (3 * (int)(pow(16, exp++)));
				break;
			case '2':
				somatorio = somatorio + (2 * (int)(pow(16, exp++)));
				break;
			case '1':
				somatorio = somatorio + (1 * (int)(pow(16, exp++)));
				break;
			case '0':
				somatorio = somatorio + (0 * (int)(pow(16, exp++)));
			case '-1':
				break;
			}
		}
		cout << somatorio << endl;
	}
}