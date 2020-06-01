bool isCaseInsensitivePalindrome(std::string inputString) {
  int i = 0;
  int j = inputString.size() - 1;

  while (i <= j) {
    if (std::tolower(inputString[i]) != std::tolower(inputString[j])) return false;

    ++i;
    --j;
  }

  return true;
}

