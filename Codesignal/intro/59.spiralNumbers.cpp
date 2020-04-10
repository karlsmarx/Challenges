std::vector<std::vector<int>> spiralNumbers(int n) {
  std::vector result (n, std::vector<int>(n, 0));

  int inSet = 1;
  int i, startRow = 0, startColumn = 0, endRow = n, endColumn = n; 
  
  while (startRow < endRow && startColumn < endColumn) {
    for (i = startColumn; i < endColumn; i++) {
      result[startRow][i] = inSet;
      inSet++;
    } 
    startRow++;
    
    for (i = startRow; i < endRow; ++i) {
      result[i][endColumn - 1] = inSet;
      inSet++;
    }
    endColumn--;
    
    if (startRow < endRow) {
      for (i = endColumn - 1; i >= startColumn; --i) {
        result[endRow - 1][i] = inSet;
        inSet++;
      } 
      endRow--;
    }
    
    if (startColumn < endColumn) {
      for (i = endRow - 1; i >= startRow; --i) {
        result[i][startColumn] = inSet;
        inSet++;
      }
      startColumn++; 
    }
  }

  return result;
}

