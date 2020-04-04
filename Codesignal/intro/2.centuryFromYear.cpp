int centuryFromYear(int year) {
    int mod100 = (year % 100);

    if (mod100 == 0) {
        return year / 100;
    } else {
        return (year - mod100) / 100 + 1;
    }
}

