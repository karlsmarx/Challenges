bool tennisSet(int score1, int score2) {
  // Check maximum score
  if ((score1 > 7) || (score2 > 7)) return false;

  // Check the minimum score
  if ((score1 < 6) && (score2 < 6)) return false;

  // Check if someone reached 7
  if ((score1 > 6) || (score2 > 6)) {
    // If someone reached seven the diff must be 1 or 2
    int diff = abs(score1 - score2);
    if ((diff > 0) && (diff < 3)) return true;
  } else {
    if (abs(score1 - score2) > 1) return true;
  }

  return false;
}

