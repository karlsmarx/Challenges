string decipher(string cipher) {
  string result;
  string subStr = "";

  for (int i = 0; i < cipher.size(); i++) {
    subStr += cipher[i];
    if (std::stoi(subStr) > 96) {
      result += (char)std::stoi(subStr);
      subStr = "";
    }
  }
  
  return result;
}

