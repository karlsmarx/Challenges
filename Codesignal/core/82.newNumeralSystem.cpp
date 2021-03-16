vector<string> newNumeralSystem(char number) {
  vector<string> result;
  
  int left = 0;
  int right = number - 'A';
  
  while (left <= right) {
    char leftRepresentation = (char)('A' + left);
    char rightRepresentation = (char)('A' + right);

    string str;

    result.push_back(str + leftRepresentation + " + " + rightRepresentation);

    left++;
    right--;
  }
  
  return result;
}

