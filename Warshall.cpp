//
// Created by CENTIC on 6/10/2023.
//

#include "Warshall.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace  std;


void Warshall::leerMatriz(std::string fileName) {
    ifstream archivo("arista.txt");

    if(!archivo.is_open()){
        cout<<"No se pudo abrir el archivo"<<endl;
    }
}