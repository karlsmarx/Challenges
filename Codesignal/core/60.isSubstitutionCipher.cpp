bool isSubstitutionCipher(std::string string1, std::string string2) {
  std::map<char, char> cypher1;
  std::map<char, char> cypher2;
  
  for (int i = 0; i < string1.size(); i++) {
    // Map the two sides of cypher
    if (!cypher1[string1[i]]) cypher1[string1[i]] = string2[i];
    if (!cypher2[string2[i]]) cypher2[string2[i]] = string1[i];

    // Compare to know ih has different map
    bool cypher1Map = cypher1[string1[i]] != string2[i];
    bool cypher2Map = cypher2[string2[i]] != string1[i];

    if (cypher1Map || cypher2Map) return false;
  }
  
  return true;
}

