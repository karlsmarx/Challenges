int lateRide(int n) {
  int minutes = n % 60; // The minutes in the lasta hour
  int hours = (n - minutes) / 60; // The total of hours passed

  // Could be a for but this way let the constraints clarified
  int minutesUnit = minutes % 10;
  int minutesDec = (minutes - minutesUnit) / 10;

  int hoursUnit = hours % 10;
  int hoursDec = (hours - hoursUnit) / 10;

  return (minutesUnit + minutesDec) + (hoursUnit + hoursDec);
}

