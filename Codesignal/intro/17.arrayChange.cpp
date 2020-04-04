int arrayChange(std::vector<int> inputArray) {
  int sum = 0;
  int beforeDifference = 0; // Keep difference if number before have to be moved

  for (int i = 1; i < inputArray.size(); i++) {
      if (inputArray[i] <= inputArray[i - 1] + beforeDifference) {
          // Get absolute difference
          int consecutivesDifference = inputArray[i - 1] - inputArray[i];

          // Sum if had accumulated from before moves
          beforeDifference += consecutivesDifference + 1;

          // Add to sum
          sum += beforeDifference;
      } else {
          // If number has not be moved, reset the difference
          beforeDifference = 0;
      }
  }

  return sum;
}

