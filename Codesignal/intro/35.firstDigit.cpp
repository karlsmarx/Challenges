char firstDigit(std::string str) {
  for (int i= 0; i < str.size(); i++) {
    if (isdigit(str[i])) return str[i];
  }

  return 'a';
}

