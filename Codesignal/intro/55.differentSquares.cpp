int differentSquares(std::vector<std::vector<int>> matrix) {
  std::set<string> list;

  if ((matrix.size() > 1) && (matrix[0].size() > 1)) {
    for (int i = 0; i < matrix[0].size() - 1; i++) {
      for (int j = 0; j < matrix.size() - 1; j++) {
        string squareSequence = 
          to_string(matrix[j][i]) + to_string(matrix[j][i + 1]) +
          to_string(matrix[j + 1][i]) + to_string(matrix[j + 1][i + 1]);

        list.insert(squareSequence);
      }
    }
  }

  return list.size();
}

