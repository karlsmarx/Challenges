bool checkPalindrome(std::string str) {
  int i = 0;
  int j = str.length() - 1;

  do {
    if (str[i] != str[j]) return false;

    i++;
    j--;
  } while(i <= j);

  return true;
}

std::string buildPalindrome(std::string st) {
  // Check if already is a palindrome
  if (checkPalindrome(st)) return st;

  char last = st.back();
  int  lastNot = st.find_last_of(last, st.length() - 2);

  // Check if has the last char before and try to create a palindrome
  // using the others chars from start
  if (lastNot != - 1) {
    std::string finalPart;
    for (int i = 0; i < lastNot; i++) {
      finalPart.insert(finalPart.begin(), st[i]);
      // When made a palindrome returns
      if (checkPalindrome(st + finalPart)) return (st + finalPart);
    }

    // If didn`t made a palindrome, check the differences to insert
    std::string finalP = (st + finalPart);
    std::cout << finalP << endl;
    for (int j = lastNot; j < st.size(); j++) {
      finalP.insert(finalP.begin() + st.size(), st[j]);
      std::cout << finalP << endl;
      if (checkPalindrome(finalP)) {
        return finalP;
      }
    }
  } else {
    for (int i = st.length() - 2; i >= 0; i--) {
      st.push_back(st[i]);
    }

    return st;
  }

  return "";
}

