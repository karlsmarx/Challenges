int candles(int candlesNumber, int makeNew) {
  int sum = candlesNumber;

  int remainingLeftOvers = (candlesNumber % makeNew);
  int newCandles = (candlesNumber - remainingLeftOvers) / makeNew;

  while (newCandles != 0) {
    sum += newCandles;

    remainingLeftOvers += (newCandles % makeNew);
    newCandles = (newCandles - (newCandles % makeNew)) / makeNew;
  }

  sum += std::floor((remainingLeftOvers - 1) / (makeNew - 1));

  return sum;
}

