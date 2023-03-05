 string toHex(int num) {
        if (num == 0) {
        return "0";
    }
    vector<char> hex_digits = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    string hex_str = "";
    unsigned int unsigned_num = num; 
    while (unsigned_num != 0) {
        int digit = unsigned_num & 0xf; 
        hex_str = hex_digits[digit] + hex_str; 
        unsigned_num >>= 4; 
    }
    return hex_str;
    }
