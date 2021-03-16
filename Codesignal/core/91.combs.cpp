int combs(string comb1, string comb2) {
  string comb1Compare = comb1;
  string comb2Compare = comb2;
  
  for (int i = 0; i < comb1.size(); i++) {
    while ((comb1[i] == '*') && (comb2Compare[i] == '*')) {
      comb2Compare.insert(comb2Compare.begin(), '.');
      i = 0;
    }
    
    while ((comb2[i] == '*') && (comb1Compare[i] == '*')) {
      comb1Compare.insert(comb1Compare.begin(), '.');
      i = 0;
    }
  }
  
  // Get the optimal comparation
  int minCompare = std::min(comb1Compare.size(), comb2Compare.size());
  
  // Get the minimal size of a comb
  int minimalComb = std::max(comb1.size(), comb2.size());
  
  // Set result as the max of the minimal and the optimal combination
  int result = std::max(minCompare, minimalComb);
  
  return result;
}

