int differLength(string a, string b) {
  int length = a.size();

  for (int i = 0; i < a.size(); i++) {
    if (a[i] == b[i]) {
      length--;
    }
  }

  return length;
}

bool diffCompare(
  std::vector<std::string> inputArray,
  std::string compare = ""
) {
  // Return true when reachs to one element
  if (inputArray.size() == 1) {
    return differLength(inputArray[0], compare) == 1;
  }

  for (int i = 0; i < inputArray.size(); i++) {
    int diffSize = differLength(compare, inputArray[i]);

    if (diffSize == 1) {
      string cmp = inputArray[i];
      inputArray.erase(inputArray.begin() + i);

      if (diffCompare(inputArray, cmp)) {
        return true;
      }
    }
  }

  return false;
}

bool stringsRearrangement(std::vector<std::string> inputArray) {

  for (int i = 0; i < inputArray.size(); i++) {
    // Copy to erase i element without modify the original
    std::vector<std::string> inputCopy (inputArray);
    inputCopy.erase(inputCopy.begin() + i);

    bool diffResult = diffCompare(inputCopy, inputArray[i]);
    std::cout << i << " " << diffResult << endl;
    if (diffResult) {
      return true;
    }
  }

  return false;
}

