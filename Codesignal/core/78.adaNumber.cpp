bool adaNumber(std::string line) {
  int is_enclosed = line.find_first_of('#');
  if (is_enclosed == 0) return false;

  std::string base_number = line.substr(0, is_enclosed);
  base_number.erase(std::remove(base_number.begin(), base_number.end(), '_'), base_number.end());

  int base;
  if (is_enclosed == -1) {
    base = 10;
  } else {
    if (line[line.size() - 1] != '#') return false;
    base = std::stoi(base_number);
  }
  
  if ((base < 2) || (base > 16)) return false;
  int number_max = std::min(9, (base - 1));

  std::string hex_letters = "aAbBcCdDeEfF";
  std::string numbers_part = "0-" + std::to_string(number_max) + hex_letters.substr(0, ((base - 10) * 2));
  
  std::string regex_string = "(_*[" + numbers_part + "]+[" + numbers_part + "_]*)";
  std::string number = line.substr((is_enclosed + 1), (line.size() - is_enclosed - 2));

  return regex_match(number, regex(regex_string));
}

