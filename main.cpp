#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "gerador.h"
#include "IDBucket.h"
#include "RadixSort.h"

#define OP 0
#define NUM 30

using namespace std;

int main() {
  vector<string> placas;
  vector<string> ordenado;

  if(OP == 0){
    string linha;
    ifstream arquivo;
    arquivo.open("placas.txt");
    while (getline(arquivo,linha))
       placas.push_back(linha);
    arquivo.close();  
  }

  else if(OP == 1){
    srand (time(NULL));
    for(int i = 0; i < NUM; i++)
      placas.push_back(gerador());
  }

  else{
    cout << "Operação inválida. Cheque o primeiro comentário do código.";
    return 0;
  }

  ordenado = RadixSort(placas);
  for(int i = 0; i < ordenado.size(); i++)
    cout << ordenado[i] << endl;

  return 0;
} 
