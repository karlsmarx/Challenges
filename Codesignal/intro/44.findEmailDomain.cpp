std::string findEmailDomain(std::string addr) {
  // Use a vector with @ to search for last occurrence
  vector<char> sep = { '@' };

  // Search the position of last @ then use to get index
  auto position = std::find_end(addr.begin(), addr.end(), sep.begin(), sep.end());
  int idx = position - addr.begin();

  // Return a substring with chars after the last @
  return addr.substr(idx + 1);
}

