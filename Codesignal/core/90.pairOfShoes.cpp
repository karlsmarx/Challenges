bool pairOfShoes(vector<vector<int>> shoes) {
  if (shoes.size() % 2 != 0) return false;
  
  int sum = 0;
  
  for (int i = 0; i < shoes.size(); i++) {
    if (shoes[i][0] == -1) continue;

    for (int j = i + 1; j <= shoes.size(); j++) {
      if (j == shoes.size()) return false;

      if ((shoes[i][0] + shoes[j][0]) == 1) {
        if (shoes[i][1] == shoes[j][1]) {
          shoes[i][0] = -1;
          shoes[j][0] = -1;
          
          sum++;
          break;
        }
      }
    }
  }

  return sum == (shoes.size() / 2);
}

