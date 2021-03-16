bool higherVersion(string ver1, string ver2) {
  int value1 = 0;
  int value2 = 0;

  do {
    int sep1 = ver1.find('.');
    int sep2 = ver2.find('.');
    
    if (sep1 == std::string::npos && sep1 != std::string::npos) return false;
    if (sep2 == std::string::npos && sep2 != std::string::npos) return true;
    
    value1 = std::stoi(ver1.substr(0, sep1));
    value2 = std::stoi(ver2.substr(0, sep2));
    
    if (value1 != value2) break;
    if (sep1 == std::string::npos && sep2 == std::string::npos) break;
    
    ver1 = ver1.substr(sep1 + 1, ver1.npos);
    ver2 = ver2.substr(sep2 + 1, ver2.npos);
  } while (true);
  
  return (value1 > value2);
}

