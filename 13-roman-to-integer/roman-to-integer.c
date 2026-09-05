int romanToInt(char *s) {
    int map[128] = {0};
    map['I'] = 1; map['V'] = 5; map['X'] = 10; map['L'] = 50;
    map['C'] = 100; map['D'] = 500; map['M'] = 1000;

    int final_int = 0, curr_max = 0;

    for (int i = strlen(s) - 1; i >= 0; i--) {
        int curr = map[s[i]];
        if (curr >= curr_max) {
            curr_max = curr;
            final_int += curr;
        } else {
            final_int -= curr;
        }
    }
    
    return final_int;
}
