vector<int> arrayPreviousLess(vector<int> items) {
  vector<int> result;
  result.push_back(-1);
  
  for (int i = 1; i < items.size(); i++) {
    for (int j = i - 1; j >=-1; j--) {
      if (j == -1) {
        result.push_back(-1);
        break;
      }

      if (items[j] < items[i]) {
        result.push_back(items[j]);
        break;
      }
    }
  }
  
  return result;
}

