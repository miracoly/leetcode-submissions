bool canConstruct(char* ransomNote, char* magazine) {
    int map[26] = {0};

    for (char* c = magazine; *c; ++c) {
        map[*c - 'a']++;
    }

    for (char* c = ransomNote; *c; ++c) {
        if (map[*c - 'a'] == 0) return false;
        map[*c - 'a']--;
    }
    return true;
}
