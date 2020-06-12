#include <ostream>
int maximumSquareRoot(int n) {
  int squareRoot = (int)std::sqrt(n);
  return squareRoot;
}

int largestNDigits(int n) {
  int sum = 0;
  
  for (int i = 0; i < n; i++) {
    sum += 9 * (std::pow(10, i));
  }
  
  return sum;
}

std::string countSameChars(std::string s) {
  std::sort(s.begin(), s.end());

  // Count same letters number in string
  std::string numberId;
  int flag = 0;
  for (int i = 0; i < s.size(); i++) {
    ++flag;

    if (s[i] != s[i + 1]) {
      numberId.push_back(flag + '0');
      flag = 0;
    }
  }
  
  std::sort(numberId.begin(), numberId.end());
  
  return numberId;
}

int constructSquare(std::string s) {
  if (s.size() == 0) return -1;
  if (s.size() == 1) return 9;

  std::string sId = countSameChars(s);
  
  int maximumNumber = largestNDigits(s.size());
  int minimumNumber = (maximumNumber / 10);
  
  int maxRoot = maximumSquareRoot(maximumNumber);

  int maxSquare = maxRoot * maxRoot;  
  while (maxSquare > minimumNumber) {
    std::string numberId = countSameChars(std::to_string(maxSquare));
    
    if (sId.compare(numberId) == 0) return maxSquare;
    
    --maxRoot;
    maxSquare = maxRoot * maxRoot;
  }
  
  return -1;
}

