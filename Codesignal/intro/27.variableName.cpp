bool variableName(std::string name) {
  regex test("^[a-zA-Z_]{1}[a-zA-Z0-9_]*");

  return regex_match(name, test);
}

