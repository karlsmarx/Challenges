bool isBeautifulString(std::string str) {
  std::sort(str.begin(), str.end());

  char lastChar = 'a';
  int lastCount = -1;

  do {
    int newCount = std::count(str.begin(), str.end(), lastChar);
    if ((newCount > lastCount) && (lastCount != -1)) return false;

    lastCount = newCount;

    lastChar++;
  } while (lastChar != ('z' + 1)); // Check for next code after z

  return true;
}

