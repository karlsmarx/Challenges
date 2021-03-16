int stringsCrossover(vector<string> inputArray, string result) {
  int sum = 0;

  for (int i = 0; i < inputArray.size(); i++) {
    for (int j = i+1; j < inputArray.size(); j++) {
      for (int k = 0; k <= result.size(); k++) {
        if (k == result.size()) {
          sum++;
          break;
        }
        
        if ((inputArray[i][k] != result[k]) && (inputArray[j][k] != result[k])) {
          break;
        }
      }
    }
  }
  
  return sum;
}

