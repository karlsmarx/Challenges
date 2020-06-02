std::string findEmailDomain(std::string address) {
  int separatorIndex = address.find_last_of('@');

  return address.substr(separatorIndex + 1);
}

