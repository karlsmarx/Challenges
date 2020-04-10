int sumUpNumbers(std::string inputString) {
  regex digit("\\d+");
  smatch match;

  int sum = 0;

  while(regex_search(inputString, match, digit)) {
    for (auto x:match) {
      sum += stoi(x);
    }

    inputString = match.suffix().str();
  }

  return sum;
}

