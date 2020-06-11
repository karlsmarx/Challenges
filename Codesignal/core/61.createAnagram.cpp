int createAnagram(std::string s, std::string t) {
  int sum = 0;
  int sal = 0;

  std::sort(s.begin(), s.end());
  
  int i = 0;
  while (i < s.size()) {
    int sCount = std::count(s.begin(), s.end(), s[i]);
    int tCount = std::count(t.begin(), t.end(), s[i]);

    int difference = sCount - tCount;
    if (difference > 0) {
      sum += difference;
    }
    
    char c = s[i];
    while(s[i] == c && i < s.size()) ++i;
  }
  
  return sum;
}

