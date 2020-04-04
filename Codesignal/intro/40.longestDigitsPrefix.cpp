std::string longestDigitsPrefix(std::string str) {
  // Get the fisrt element that is not a digit
  int (*isdigit)(int) = std::isdigit;

  // Check if it`s a prefix
  if ((std::find_if(str.begin(), str.end(), isdigit) - str.begin()) > 0) {
    return "";
  }

  int index = std::find_if_not(str.begin(), str.end(), isdigit) - str.begin();

  return str.substr(0, index);
}

