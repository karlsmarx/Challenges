std::vector<std::string> fileNaming(std::vector<std::string> names) {
  std::vector<std::string> result;

  for (int i = 0; i < names.size();  i++) {
    string name = names[i];
    if(std::find(result.begin(), result.end(), name) != result.end()) {
      int j = 1;
      do {
        name = names[i] + "(" + to_string(j) + ")";
        j++;
      } while (std::find(result.begin(), result.end(), name) != result.end());
    }

    result.push_back(name);
  }

  return result;
}

