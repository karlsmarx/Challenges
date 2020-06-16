int numberOfClans(std::vector<int> divisors, int k) {
  std::set<std::string> divivisorSequence;
  
  for (int i = 1; i <= k; i++) {
    std::string result;

    for (int j = 0; j < divisors.size(); j++) {
      char isDivisible = ((i % divisors[j]) == 0) ? '1' : '0';
      result.push_back(isDivisible);
    }
    
    divivisorSequence.insert(result);
  }
  
  return divivisorSequence.size();
}

