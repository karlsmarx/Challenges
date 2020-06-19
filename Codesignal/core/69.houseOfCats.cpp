std::vector<int> houseOfCats(int legs) {
  std::vector<int> result;
  
  int maxCats = (int)(legs / 4);
  while (maxCats >= 0) {
    result.push_back((legs - (maxCats * 4)) / 2);
    maxCats -= 1;
  }
  
  return result;
}

