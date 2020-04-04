std::vector<std::string> addBorder(std::vector<std::string> picture) {
  int length = picture[0].size();

  // Iterate over elements to add border in sides
  for (int i = 0; i < picture.size(); i++) {
      picture[i] = "*" + picture[i] + "*";
  }

  std::string border (length + 2, '*');

  // Insert the border on first and last line
  picture.insert(picture.begin(), border);
  picture.push_back(border);

  return picture;
}

