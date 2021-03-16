bool findCycle(string str, string cycle) {
  string concatened = str;
  while (concatened.size() < cycle.size()) concatened.append(str);
  
  int pos = concatened.find(cycle);
  
  return (pos != string::npos);
}

int cyclicString(string s) {
  string result;
  
  for (int i = 0; i < s.size(); i++) {
    result.push_back(s[i]);
    if (findCycle(result, s)) break;
  }
  
  return result.size();
}

