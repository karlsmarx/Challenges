std::string htmlEndTagByStartTag(std::string startTag) {
  int spaceIndex = startTag.find_first_of(' ');

  if (spaceIndex == -1) return "</" + startTag.substr(1);
  
  return "</" + startTag.substr(1, spaceIndex - 1) + ">";
}

