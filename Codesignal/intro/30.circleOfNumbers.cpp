int circleOfNumbers(int n, int firstNumber) {
  // The distance for the opposite is always half of all
  int absoluteDistance = n / 2;

  // Use modular calc to get the right oppossite when number
  // is gretaer than absolute distance.
  return (firstNumber + absoluteDistance) % n;
}

