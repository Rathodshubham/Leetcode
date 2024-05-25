class Solution {
public:
    bool isNumber(string s) {
        int i = 0, n = s.length();

        // Trim leading whitespaces
        while (i < n && isspace(s[i])) ++i;
        if (i == n) return false;

        // Handle optional sign
        if (s[i] == '+' || s[i] == '-') ++i;

        bool isNumeric = false, isExponent = false, isDot = false;

        while (i < n) {
            if (isdigit(s[i])) {
                isNumeric = true;
            } else if (s[i] == '.') {
                if (isDot || isExponent) return false;
                isDot = true;
            } else if (s[i] == 'e' || s[i] == 'E') {
                if (isExponent || !isNumeric) return false;
                isExponent = true;
                isNumeric = false; // Reset for the exponent part
                if (i + 1 < n && (s[i + 1] == '+' || s[i + 1] == '-')) ++i;
            } else {
                break;
            }
            ++i;
        }

        // Trim trailing whitespaces
        while (i < n && isspace(s[i])) ++i;

        return isNumeric && i == n;
    }
};
