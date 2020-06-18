std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
  int maxLength = 0;
  std::vector<std::string> longestStrings;
  
  for (int i = 0; i < inputArray.size(); i++) {
    if (inputArray[i].size() < maxLength) continue;
    
    if (inputArray[i].size() > maxLength) {
      maxLength = inputArray[i].size();
      longestStrings.erase(longestStrings.begin(), longestStrings.end());
      longestStrings.push_back(inputArray[i]);
      
      continue;
    }
    
    longestStrings.push_back(inputArray[i]);
  }
  
  return longestStrings;
}

