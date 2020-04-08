std::string longestWord(std::string text) {
  int start = 0, end = 0;  

  // Remove special chars
  replace_if(text.begin(), text.end(), [](char x) {
    return !isalnum(x) && !isspace(x);
  }, ' ');

  auto current = text.find_first_of(" ");
  int previous = 0;

  do {
    if ((current - previous) > (end - start)) {
      start = previous;
      end = current;
    }

    previous = current + 1;
    current = text.find_first_of(" ", previous);
  } while(current != std::string::npos);

  // Check for last substr
  if ((text.size() - previous) > (end - start)) {
    return text.substr(previous, text.size() - previous);
  }

  return text.substr(start, end - start);
}

