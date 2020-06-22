int timedReading(int maxLength, std::string text) {
  int sum = 0;
  std::regex letters("(\\w+)");
  
  auto text_begin = std::sregex_iterator(text.begin(), text.end(), letters);
  auto text_end = std::sregex_iterator();

  for (std::sregex_iterator i = text_begin; i != text_end; ++i) {
    std::smatch match = *i;
    std::string match_str = match.str();

    if (match_str.size() <= maxLength) ++sum;
  }
  
  return sum;
}

