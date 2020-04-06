bool isDigit(char symbol) {
  regex isD("\\d");

  return regex_match(string(1, symbol), isD);
}

