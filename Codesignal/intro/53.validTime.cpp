bool validTime(std::string time) {
  regex validTime("([0-1][0-9]|2[0-3]):([0-5][0-9])");

  return regex_match(time, validTime);
}

