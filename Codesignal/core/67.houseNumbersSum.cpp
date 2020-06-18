int houseNumbersSum(std::vector<int> inputArray) {
  int sum = 0;
  
  for (int i = 0; i < inputArray.size(); i++) {
    if (inputArray[i] == 0) break;
    
    sum += inputArray[i];
  }
  
  return sum;
}

