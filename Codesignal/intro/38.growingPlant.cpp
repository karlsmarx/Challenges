int growingPlant(int upSpeed, int downSpeed, int desiredHeight) {
  int sum = 0;

  int i = 1;
  while (sum < desiredHeight) {
    if (i % 2 == 1) {
      sum += upSpeed;
    } else {
      sum -= downSpeed;
    }

    i++;
  }

  return i / 2;
}

