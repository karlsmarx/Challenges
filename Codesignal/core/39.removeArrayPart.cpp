std::vector<int> removeArrayPart(std::vector<int> inputArray, int l, int r) {
  std::vector<int> result;

  for (int i = 0; i < inputArray.size(); i++) {
    if (i < l || i > r) result.push_back(inputArray[i]);
    if (i == l) i = r;
  }

  return result;
}

