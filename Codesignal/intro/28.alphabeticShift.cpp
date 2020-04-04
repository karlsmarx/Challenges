std::string alphabeticShift(std::string inputString) {
  for (int i = 0; i < inputString.size(); i++) {
    int charCode = (int) inputString[i];
    if (charCode == 122) {
      inputString[i] = (char) 97;
    } else {
      inputString[i] = (char) (inputString[i] + 1);
    }
  }

  return inputString;
}

