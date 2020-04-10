bool checkLine(std::vector<int> line) {
  for (int i = 0; i < line.size(); i++) {
    for (int j = i + 1; j < line.size(); j++) {
      if (line[i] == line[j]) return false;
    }
  }

  return true;
}

bool sudoku(std::vector<std::vector<int>> grid) {
  // Check lines and columns
  for (int i = 0; i < grid.size(); i++) {
    std::vector<int> column;
    if (!checkLine(grid[i])) return false;

    for (int j = 0; j < grid.size(); j++) {
      column.push_back(grid[j][i]);
    }

    if (!checkLine(column)) return false;
  }

  // Check squares
  for (int k = 0; k < 3; k++) {
    for (int l = 0; l < 3; l++) {
      std::vector<int> line;

      for (int m = 0; m < 3; m++) {
        for (int n = 0; n < 3; n++) {
          line.push_back(grid[m + (l* 3)][n + (k * 3)]);
        }
      }

      if (!checkLine(line)) return false;
    }
  }

  return true;
}

