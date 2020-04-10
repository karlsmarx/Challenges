std::string messageFromBinaryCode(std::string code) {
  string result;

  for (int i = 0; i < code.size() - 7; i += 8) {
    char letter = stoi(code.substr(i, 8), 0, 2);
    result.push_back(letter);
  }

  return result;
}

