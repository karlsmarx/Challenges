bool willYou(bool young, bool beautiful, bool loved) {

  // If one of then is false, then loved must be false to 
  // assert conceptions, otherwise loved must be true
  bool beatAndYoung = young && beautiful;

  return beatAndYoung ? !loved : loved;
}

