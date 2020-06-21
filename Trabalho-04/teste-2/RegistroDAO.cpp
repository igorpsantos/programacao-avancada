#include "RegistroDAO.h"
#include "categoria.h"
#include "Data.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iostream> 
#include <sstream> 
#include <vector>

using namespace std;

void RegistroDAO::adicionar(string arquivo) {
	string datat, horat, descricaot, categoriat, precot;
	vector<string> datas, horas, descricaos, categorias, precos;
	ifstream myfile(arquivo, ios::in);
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			getline(myfile, datat, ',');
			datas.push_back(datat);
			getline(myfile, horat, ',');
			horas.push_back(horat);
			getline(myfile, descricaot, ',');
			descricaos.push_back(descricaot);
			getline(myfile, categoriat, ',');
			categorias.push_back(categoriat);
			getline(myfile, precot);
			precos.push_back(precot);
		}

		for (int i = 0; i < datas.size(); i++) {
			string diat, mest, anot;
			for (int i = 0; i < 3; i++) {
				istringstream data_s(datas[i]);
				getline(data_s, diat, '/');
				getline(data_s, mest, '/');
				getline(data_s, anot);
			}

			Categoria* cat_ptr = Categoria::listaCategorias.data();
			for (int i = 0; i < Categoria::listaCategorias.size(); i++) {
				if (Categoria::listaCategorias[i].getNome() == categorias[i]) {
					break;
				}
				cat_ptr++;
			}
			// no registro individual pelo arquivo será necessário verificar algum tipo de lógica, para a gente atribuir no mesmo mes o registro
			// só que quando cheguei na interface eu tive que pedir para o caminho absoluto do arquivo, e com isso passar para o adicionar categorias
			// mas no caso do registro individual acho que devemiamos ter criado o registro via cin pegando todos os dados com o usuário digitando um por um
			Registro::_AllRegistros.push_back(Registro(Data(stoi(diat), stoi(mest), stoi(anot)), horas[i], descricaos[i], cat_ptr, stoi(precos[i])));

		}
		myfile.close();
		cout << "Custo adicionado com sucesso." << endl;
	}
	else {
		cout << "Nao foi possível adicionar os gastos, dados invalidos " << endl;
	}
}

void RegistroDAO::consultar() {
	for (int i = 0; i < Registro::_AllRegistros.size(); i++) {
		cout << Registro::_AllRegistros[i] << endl;
	}
}

void RegistroDAO::importar(int mes) {
    string datat, horat, descricaot, categoriat, precot;
    vector<string> datas, horas, descricaos, categorias, precos;
    ifstream myfile("registro.txt", ios::in);
    if (myfile.is_open())
    {
        while (!myfile.eof())
        {
            getline(myfile, datat, ',');
            datas.push_back(datat);
            getline(myfile, horat, ',');
            horas.push_back(horat);
            getline(myfile, descricaot, ',');
            descricaos.push_back(descricaot);
            getline(myfile, categoriat, ',');
            categorias.push_back(categoriat);
            getline(myfile, precot);
            precos.push_back(precot);
        }
        myfile.close();
    }
    else cout << "Erro na leitura do arquivo";

    for (int i = 0; i < datas.size(); i++) {
        string diat, mest, anot;
        for (int i = 0; i < 3; i++) {
            istringstream data_s(datas[i]);
            getline(data_s, diat, '/');
            getline(data_s, mest, '/');
            getline(data_s, anot);
        }
        
    Categoria* cat_ptr = Categoria::listaCategorias.data();
    for(int i = 0; i < Categoria::listaCategorias.size();i++){
        if(Categoria::listaCategorias[i].getNome() == categorias[i]){
            break;
        }
        cat_ptr++;
    }
        if (stoi(mest) == mes) {
            Registro::_AllRegistros.push_back(Registro(Data(stoi(diat), stoi(mest), stoi(anot)), horas[i], descricaos[i], cat_ptr, stoi(precos[i])));
        }
    }
}

    void RegistroDAO::exportar(int mes){
        ofstream arquivo;
        arquivo.open("registro.txt", ios::out);
        for (int i = 0; i < Registro::_AllRegistros.size(); i++) {
            if (Registro::_AllRegistros[i].getMes() == mes) {
                arquivo << Registro::_AllRegistros[i] << endl;
            }
        }
        arquivo.close();
    }