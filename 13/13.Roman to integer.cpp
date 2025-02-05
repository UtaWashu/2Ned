class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanNumerals = {
{'I', 1},
{'V', 5},
{'X', 10},
{'L', 50},
{'C', 100},
{'D', 500},
{'M', 1000}
};

int result = romanNumerals[s.back()];

for (int i = s.length() - 2; i >= 0; i--) {
if (romanNumerals[s[i]] < romanNumerals[s[i + 1]]) {
result -= romanNumerals[s[i]];
} else {
result += romanNumerals[s[i]];
}
}

return result;
    }
};