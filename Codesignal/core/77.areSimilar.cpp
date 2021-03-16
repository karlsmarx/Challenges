bool areSimilar(std::vector<int> a, std::vector<int> b) {
  if (a.size() == 1) return a[0] == b[0];

  int sum = 0;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] != b[i]) {
      ++sum;

      if (sum > 1) return false;

      int j = (i + 1);
      while (j < a.size()) {
        if ((a[j] == b[i]) && (a[j] != b[j])) {
          int temp = a[i];

          a[i] = a[j];
          a[j] = temp;
          
          break;
        }
        
        ++j;
      }
      
      if (j == a.size()) return false;
    };
  }
  
  return true;
}

