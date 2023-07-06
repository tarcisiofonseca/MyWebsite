int IDBucket(char a){
  int indice;
  if('0' <= a && a <= '9')
    indice = a - '0';
  else
    indice = a - 'A' + 10;
  return indice;
}
