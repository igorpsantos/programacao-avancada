#include "RegistroDAO.h"
#include "categoria.h"
#include "Data.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iostream> 
#include <sstream> 
#include <vector>
std::vector<Registro> Registro::_AllRegistros;
using namespace std;

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
            Registro::_AllRegistros.push_back(Registro(Data(stoi(diat), stoi(mest), stoi(anot)), stoi(horas[i]), descricaos[i], cat_ptr, stoi(precos[i])));
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