vector<string> RadixSort(vector<string> placas){
  int atual;
    
  for(int ind = 0; ind <= 6; ind++){
    vector<vector<string>>buckets(36);
    for(int pla = 0; pla < placas.size(); pla++){
      atual = IDBucket(placas[pla][6-ind]);
      buckets[atual].push_back(placas[pla]);
    }

    int limpar = 0;
    for(int i = 0; i < buckets.size(); i++){
      for(int j = 0; j < buckets[i].size(); j++){
        placas[limpar] = buckets[i][j];
        limpar++;
      }
    }    
  }
  return placas;
}
