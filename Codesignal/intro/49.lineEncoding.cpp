std::string lineEncoding(std::string s) {
  std::string result;

  char actual = s[0];
  int i = 0, j = 0;
  while (j < s.size()) {
    if (s[j] == actual) {
      i++;
    } else {
      if (i > 1) result.append(to_string(i));
      result.push_back(actual);

      i = 1;
      actual = s[j];
    }

    j++;
  }

  if (i > 1) result.append(to_string(i));
  result.push_back(actual);

  return result;
}

