bool isTandemRepeat(std::string inputString) {
  if (inputString.size() % 2 == 1) return false;

  std::string firstPart = inputString.substr(0, ((inputString.size() / 2)));
  std::string secondPart = inputString.substr(inputString.size() / 2);

  return !firstPart.compare(secondPart);
}

