int avoidObstacles(std::vector<int> inputArray) {
  int length = 0;
  int guess = 1;

  do {
    guess++; // Up the guess

    // Check guess doesn`t divide the numbers on input
    int i = 0;
    while (i < inputArray.size()) {
      if (inputArray[i] % guess == 0) break; // Wrong guess
      i++;
    }

    if (i == inputArray.size()) length = guess;
  } while (length == 0);

  return length;
}

