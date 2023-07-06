#include <iostream>
using namespace std;

string gerador(){
  string placa;
  char num1 = '0' + rand()%9;
  char num2 = '0' + rand()%9;
  char num3 = '0' + rand()%9;
  char a = 'A' + rand()%26;
  char b = 'A' + rand()%26;
  char c = 'A' + rand()%26;
  char d = 'A' + rand()%26;
  placa += a;
  placa += b;
  placa += c;
  placa += num1;
  placa += d;
  placa += num2;
  placa += num3;
  return placa;
}
