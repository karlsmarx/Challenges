std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image) {
  int h = image.size();
  int w = image[0].size();

  std::vector<std::vector<int>> bluerred (h - 2, std::vector<int> (w - 2, 0));

  for (int i = 1; i < image.size() - 1; i++) {
    for (int j = 1; j < image[i].size() - 1; j++) {
      int upLineSum = image[i - 1][j - 1] + image[i - 1][j] + image[i - 1][j + 1];
      int lineSum = image[i][j - 1] + image[i][j] + image[i][j + 1];
      int btLineSum = image[i + 1][j - 1] + image[i + 1][j] + image[i + 1][j + 1];

      bluerred[i - 1][j - 1] = (upLineSum + lineSum + btLineSum) / 9;
    }
  }

  return bluerred;
}

