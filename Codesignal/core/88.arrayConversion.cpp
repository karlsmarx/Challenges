int arrayConversion(vector<int> a) {
  if (a.size() == 1) return a[0];
  if (a.size() == 2) return a[0] + a[1];

  vector<int> newInput;
  
  for (int i = 0; i < a.size(); i+= 4) {
    int value = (a[i]*a[i+2]) + (a[i]*a[i+3]) + (a[i+1]*a[i+2]) + (a[i+1]*a[i+3]);
    newInput.push_back(value);
  }
  
  return arrayConversion(newInput);
}

