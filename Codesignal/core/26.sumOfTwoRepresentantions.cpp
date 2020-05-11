// This should use a lopp as the theme of session, but the solution above
// runs in better time and has a simple logic

int countSumOfTwoRepresentations2(int n, int l, int r) {
  // If the numbers are the same
  if ((l == r) && (l + r == n)) return 1;

  // When the number has not perfect sum yet
  if (l + r < n) l += n - (l + r);
  if (l + r > n) r = n - l;

  // When the sum with constraints it's not possible
  if (l > r) return 0;

  return ((r - l) / 2) + 1;
}

