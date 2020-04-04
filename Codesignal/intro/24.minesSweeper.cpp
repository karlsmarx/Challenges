std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> matrix) {
  int height = matrix.size();
  int width = matrix[0].size();

  std::vector<std::vector<int>> map (height, std::vector<int>(width, 0));

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      // Check if it`s a mine to set 1 or sum the mines around
      int upSum = 0, btSum = 0, lSum = 0;
        
      // Check for first line
      if (i > 0) {
        upSum = matrix[i - 1][j];

        if (j > 0) {
          upSum += matrix[i - 1][j - 1];
        }

        if (j < width - 1) {
          upSum += matrix[i - 1][j + 1];
        }
      }

      // Check for lastLine
      if (i < height - 1) {
        btSum = matrix[i + 1][j];

        if (j > 0) {
          btSum += matrix[i + 1][j - 1];
        }

        if (j < width - 1) {
          btSum += matrix[i + 1][j + 1];
        }
      }

      // Check for first element
      if (j > 0) {
        lSum += matrix[i][j - 1];
      }

      // Check for last element
      if (j < width - 1) {
        lSum += matrix[i][j + 1];
      }

      map[i][j] = upSum + lSum + btSum;
    }
  }

  return map;
}

