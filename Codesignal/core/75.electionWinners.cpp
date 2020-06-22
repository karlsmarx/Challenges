int electionsWinners(std::vector<int> votes, int k) {
  int max = 0;
  int maxOccurs = 0;
  for (int i = 0; i < votes.size(); i++) {
    if (votes[i] > max) {
      max = votes[i];
      maxOccurs = 1;

      continue;
    }
    
    if (votes[i] == max) ++maxOccurs;
  }
  
  if ((k == 0) && (maxOccurs > 1)) return 0;
  if (k == 0) return 1;
  
  int sum = 0;
  for (int j = 0; j < votes.size(); j++) if ((votes[j] + k) > max) ++sum;
  
  return sum;
}

