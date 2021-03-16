string cipher26(string message) {
  string result;
  
  int sum = message[0] - 'a';
  result += message[0];
  
  for (int i = 1; i < message.size(); i++) {
    int letterValue = message[i] - 'a';
    int originalValue = (26 - (sum % 26) + letterValue) % 26;

    cout << letterValue << " " << sum << " " << originalValue << endl;
    result += (char)(originalValue + 'a');

    sum += originalValue;
  }
  
  return result;
}

