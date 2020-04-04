int differentSymbolsNaive(std::string s) {
  int sum = 0;

  while (s.size() > 0) {
    sum++; // Add different char to sum

    for (int i = 1; i < s.size(); i++) {
      // Remove all char that are equals to first one
      if (s[i] == s[0]) {
        s.erase(s.begin() + i);
        i--;
      }
    }

    s.erase(s.begin()); // Remove the first one
  }

  return sum;
}

