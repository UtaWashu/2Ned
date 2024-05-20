**13.Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.**
**Решение:**
```cpp
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
```
**Задача: ***
**14.Write a function to find the longest common prefix string amongst an array of strings.**
**Решение:**
```cpp
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) {
            return "";
        }
        
        string prefix = strs[0];
        
        for(int i = 1; i < strs.size(); i++) {
            while(strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);
                if(prefix.empty()) {
                    return "";
                }
            }
        }
        
        return prefix;
    }
};
```
**Задача: ***
**20.Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.**
**Решение:**
```cpp
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
for (char c : s) {
if (c == '(' || c == '{' || c == '[') {
stack.push(c);
} else {
if (stack.empty()) {
return false;
}
char open = stack.top();
stack.pop();
if ((c == ')' && open != '(') || (c == '}' && open != '{') || (c == ']' && open != '[')) {
return false;
}
}
}
return stack.empty();
    }
};
```