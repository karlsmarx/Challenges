std::vector<std::vector<std::string>> permutations(std::vector<std::string> words) {
  std::vector<std::vector<string>> result;

  for (int i = 0; i < words.size(); i++) {
    std::string topWord = words[i];

    for (int j = 0; j < words.size(); j++) {
      if (j == i) continue;
      std::string leftWord = words[j];

      for (int k = 0; k < words.size(); k++) {
        if ((k == i) || (k == j)) continue;
        std::string rightWord = words[k];

        int bottomWordIndex = 0;
        while (bottomWordIndex == i || bottomWordIndex == j || bottomWordIndex == k)
          ++bottomWordIndex;

        std::string bottomWord = words[bottomWordIndex];

        result.push_back({ topWord, leftWord, rightWord, bottomWord });
      }
    }
  }

  return result;
}

void printWords(std::vector<string> words) {
  for (int i = 0; i < words.size(); i++) {
    cout << words[i] << " ";
  }

  cout << endl;
}

int crosswordFormation(std::vector<std::string> words) {
  int sum = 0;

  std::vector<std::vector<std::string>> sequence  = permutations(words);

  for (int i = 0; i < sequence.size(); i++) {
    std::vector<string> actualWords = sequence[i];

    for (int tli = 0; tli < actualWords[0].size() - 2; tli++) {
      for (int lti = 0; lti < actualWords[1].size() - 2; lti++) {

        if (actualWords[0][tli] == actualWords[1][lti]) {
          // If the element in TopLeftIs the same for LeftTop
          // try to find a combination for TopRight with RightTop
          for (int tri = tli + 1; tri < actualWords[0].size(); tri++) {
            for (int rti = 0; rti < actualWords[2].size() - 2; rti++) {

              if (actualWords[0][tri] == actualWords[2][rti]) {
                // If the elemeent on top word is the same for
                // right word, try to set the bottom

                // The distance in letters for right to left
                // If the length is less than 3, couldn't be a rectangle with area
                int leftRightLength = tri - tli;
                if (leftRightLength < 2) continue;

                // If length is greather than bottom word, the rectangle is impossible
                if((leftRightLength + 1) > actualWords[3].size()) continue;

                // Start from a distance of 2 to set a valid rectabgle
                for (int lbi = lti + 2; lbi < actualWords[1].size(); lbi++) {
                  for (int bli = 0; bli < actualWords[3].size() - leftRightLength; bli++) {

                    if (actualWords[3][bli] == actualWords[1][lbi]) {
                      if ((rti + lbi - lti) < actualWords[2].size()) {
                        if (actualWords[3][bli + leftRightLength] == actualWords[2][rti + lbi - lti]) {
                          ++sum;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  return sum;
}

