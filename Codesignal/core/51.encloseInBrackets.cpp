std::string encloseInBrackets(std::string inputString) {
  inputString.insert(inputString.begin(), '(');
  inputString.push_back(')');

  return inputString;
}

