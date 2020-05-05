int mirrorBits(int a) {
  int mirror = 0; // Start the mirror

  while (a) {
    mirror |= a & 1; // Set the last bit of mirror euqal to last bit of number
  
    mirror <<= 1; // Shift the mirror one bit to get zero in final
    a >>= 1; // Shit the original to get next bit
  }

  mirror >>= 1;

  return mirror;
}

