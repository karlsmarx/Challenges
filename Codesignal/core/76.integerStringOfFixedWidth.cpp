std::string integerToStringOfFixedWidth(int number, int width) {
  std::string result = std::to_string(number);
  
  if (result.size() > width) result = result.substr(result.size() - width);
  if (result.size() < width) {
    std::string prefix((width - result.size()), '0');
    result.insert(0, prefix);
  }
  
  return result;
}

