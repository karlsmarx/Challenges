string stolenLunch(string note) {
  string result;
  
  for (int i = 0; i < note.size(); i++) {
    int digitValue = note[i] - 'a';
    if (digitValue > -1 && digitValue < 10) {
      result += (char)('0' + digitValue);
      continue;  
    }

    int charValue = note[i] - '0';
    if (charValue > -1 && charValue < 10) {
      result += (char)('a' + charValue);
      continue;  
    }

    result += note[i];
  }

  return result;
}

