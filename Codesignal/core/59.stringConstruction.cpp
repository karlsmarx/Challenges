std::string remove(std::string v)
{
	std::string::iterator itr = v.begin();
	std::unordered_set<int> s;

	for (auto curr = v.begin(); curr != v.end(); ++curr) {
		if (s.insert(*curr).second)
			*itr++ = *curr;
	}

	v.erase(itr, v.end());
  
  return v;
}

int stringsConstruction(std::string a, std::string b) {
  if (a.size() > b.size()) return 0;

  std::vector<int> charOccurrences;
  std::string diffChars = remove(a);
  
  for (int i = 0; i < diffChars.size(); i++) {
    int letterOccurrences = std::count(b.begin(), b.end(), diffChars[i]);
    int lettersRepeat = std::count(a.begin(), a.end(), diffChars[i]);
    
    charOccurrences.push_back(letterOccurrences / lettersRepeat);
  }
  
  return *min_element(charOccurrences.begin(), charOccurrences.end());
}

