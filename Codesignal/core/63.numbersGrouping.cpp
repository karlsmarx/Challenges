int numbersGrouping(std::vector<int> a) {
  if (a.size() < 2) return 2;

  std::set<int> groups;
  
  int base = std::pow(10, 4);
  
  for (int i = 0; i < a.size(); i++) {
    int group = a[i] / base;
    if ((a[i] % base) == 0) --group;
    
    groups.insert(group);
  }
  
  return (groups.size() + a.size());
}

