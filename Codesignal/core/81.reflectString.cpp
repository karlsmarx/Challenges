string reflectString(string inputString) {
  for (int i = 0; i < inputString.size(); i++) {
    if (inputString[i] < 109) {
      inputString[i] += (2 * (109 - inputString[i])) + 1;
    } else {
      inputString[i] -= (2 * (inputString[i] - 110)) + 1;
    }
  }
  
  return inputString;
}

