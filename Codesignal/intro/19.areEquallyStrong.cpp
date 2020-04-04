bool areEquallyStrong(
    int yourLeft,
    int yourRight,
    int friendsLeft,
    int friendsRight
) {
    // Check sum of arms forces
    if ((yourLeft + yourRight) != (friendsLeft + friendsRight)) return false;

    // Check strongest arms
    if (std::max(yourLeft, yourRight) != std::max(friendsLeft, friendsRight)) return false;

    return true;
}

