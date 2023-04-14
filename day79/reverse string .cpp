#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class Solution {
public:
    std::string reverseWords(std::string s) {
        std::vector<std::string> words;
        std::stringstream ss(s);
        std::string word;
        
        while (ss >> word) {
            words.push_back(word);
        }
        
        std::string reversed;
        

        for (int i = words.size() - 1; i >= 0; --i) {
            reversed += words[i];
            
            // Append a space if not the last word
            if (i > 0) {
                reversed += " ";
            }
        }
        
        return reversed;
    }
};
