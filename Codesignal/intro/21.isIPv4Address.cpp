bool isIPv4Address(std::string inputString) {
  std::vector<int> parts;
  std::size_t position, before = 0;
  
  // Separate the parts of ip
  try {
    position = inputString.find_first_of(".");
    while (position != std::string::npos) {
      std::string str = inputString.substr(before, position - before);

      // Check for only digits on each part
      if (!std::all_of(str.begin(), str.end(), ::isdigit)) return false;

      parts.push_back(std::stoi(str));
      before = position + 1;
      position = inputString.find_first_of(".", before);
    }

    // Repeat for lasat part
    std::string str = inputString.substr(before, position - before);
    if (!std::all_of(str.begin(), str.end(), ::isdigit)) return false;

    parts.push_back(std::stoi(inputString.substr(before, position - before)));
  } catch (...) { // For all input or conversion errors return false
    return false;
  }

  // Check for size
  if (parts.size() != 4) return false;

  // Check for limit of numbers
  for (int i = 0; i < parts.size(); i++) {
      if (parts[i] < 0 || parts[i] > 255) return false;
  }

  return true;
}

