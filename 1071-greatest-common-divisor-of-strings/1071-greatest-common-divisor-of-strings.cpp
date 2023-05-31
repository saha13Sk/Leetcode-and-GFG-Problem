class Solution {
public:
        string gcdOfStrings(string str1, string str2) {
           // int len1 = str1.length(), len2 = str2.length();
            
          if (str1.size() < str2.size()) return gcdOfStrings(str2, str1);
        if (str2.empty()) return str1;
        if (str1.substr(0, str2.size()) != str2) return "";
        return gcdOfStrings(str1.substr(str2.size()), str2);
            
        }
};