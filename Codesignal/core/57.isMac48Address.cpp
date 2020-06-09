bool isMAC48Address(std::string inputString) {
  if (inputString.size() != 17) return false;
  
  std::string lim = "-";

  auto start = 0;
  int i = 0;

  while ((i * 3) <= inputString.size()) {
    if (i > 5) return false;
    if ((i < 5) && inputString[(i * 3) + 2] != '-') return false;

    std::string value = inputString.substr((i * 3), 2);
    if (!std::all_of(value.begin(), value.end(), ::isxdigit)) return false;
    
    ++i;
  }
  
  return true;
}

