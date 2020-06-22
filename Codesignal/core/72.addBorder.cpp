std::vector<std::string> addBorder(std::vector<std::string> picture) {
  int sizeBorder = picture[0].size() + 2;
  std::string borderLine(sizeBorder, '*');
  
  for (int i = 0; i < picture.size(); i++) {
    picture[i].insert(0, "*");
    picture[i].push_back('*');
  }
  
  picture.insert(picture.begin(), borderLine);
  picture.push_back(borderLine);
  
  return picture;
}

