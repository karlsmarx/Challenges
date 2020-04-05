int electionsWinners(std::vector<int> votes, int k) {
  int maxIndex = std::max_element(votes.begin(), votes.end()) - votes.begin();

  int sum = 0;
  if (k == 0) {
    // Check for a draw
    for (int i = 0; i < votes.size(); i++) {
      if (i != maxIndex && votes[i] == votes[maxIndex]) return 0;
    }

    return 1;
  } else {
    for(int i = 0; i < votes.size(); i++) {
      if ((votes[i] + k) > votes[maxIndex]) sum++;
    }
  }

  return sum;
}

