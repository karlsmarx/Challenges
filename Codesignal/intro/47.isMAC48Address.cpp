bool isMAC48Address(std::string inputString) {
  regex mac48("^([0-9A-F]{2}-){5}([0-9A-F]{2}){1}$");

  return regex_match(inputString, mac48);
}

