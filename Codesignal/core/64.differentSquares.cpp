int differentSquares(std::vector<std::vector<int>> matrix) {
  std::set<std::string> squares;
  
  for (int i = 0; i < (matrix.size() - 1); i++) {
    for (int j = 0; j < (matrix[0].size() - 1); j++) {
      std::string square = std::to_string((matrix[i][j] * 1000) +
        (matrix[i + 1][j] * 100) +
        (matrix[i][j + 1] * 10) +
        matrix[i + 1][j + 1]);
        
      squares.insert(square);
    }
  }
  
  return squares.size();
}

