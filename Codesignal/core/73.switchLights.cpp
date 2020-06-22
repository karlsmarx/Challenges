std::vector<int> switchLights(std::vector<int> a) {
  int changes = 0;
  
  for (int i = 0; i < a.size(); i++) if (a[i] == 1) ++changes;
  
  int j = 0;
  while ((changes > 0) && (j < a.size())) {
    int temp = a[j];
    if ((changes % 2) == 1) temp = !a[j];
    
    if (a[j] == 1) --changes;
    
    a[j] = temp;
    
    ++j;
  }
  
  return a;
}

