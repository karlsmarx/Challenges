bool isNumber(char c) {
  int value = c - '0';
  return (value <= 9 && value >= 0);
}

std::vector<string> tokenizer(string str) {
  std::vector<string> result;

  string sub = "";
  for (int i = 0; i < str.size(); i++) {
    if (!isNumber(str[i])) {
      if (sub.size() > 0) {
        result.push_back(sub);
        sub = "";
      }

      string token;
      token.push_back(str[i]);
      result.push_back(token);

      continue;
    }

    sub.push_back(str[i]);
  }

  if (sub.size() > 0) result.push_back(sub);

  return result;
}

bool alphanumericLess(string s1, string s2) {
  std::vector<string> s1Tokens = tokenizer(s1);
  std::vector<string> s2Tokens = tokenizer(s2);
  
  for (int i = 0; i < s1Tokens.size(); i++) {
    if (i > s2Tokens.size() - 1) break;

    string token = s1Tokens[i];
    
    // If its a number
    if (isNumber(token[0])) {
      unsigned long long value1 = std::stoull(token);

      // if token of string 2 its a number
      if (isNumber(s2Tokens[i][0])) {
        unsigned long long value2 = std::stoull(s2Tokens[i]);

        if (value1 < value2) return true; // if the number is smaller
        if (value1 > value2) return false; // if the number is greather
        if (token.size() > s2Tokens[i].size()) return true; // if has more leading zeros
        
        continue;
      }
      
      // if token of s2 it's not a number, s1 is smaller
      return true;
    }
    
    if (isNumber(s2Tokens[i][0])) return false; // if s2 token is a number

    int value1 = token[0] - 'a';
    int value2 = s2Tokens[i][0] - 'a';
    
    if (value1 < value2) return true; // if the letter is smaller
    if (value1 > value2) return false; // if the letter is greather
  }

  return (s1Tokens.size() < s2Tokens.size());
}

