//https://leetcode.com/problems/valid-palindrome/

//Solution 1 
class Solution {
public:
    bool isPalindrome(string s) {
        string str;
      for(auto i:s){
        if(i>=65 && i<=90){
        i+=32;
        str.push_back(i);
        }
        else if(i>=97 && i<=122)
            str.push_back(i);
        else if(i>=48 && i<=57)
            str.push_back(i);
       }
    int start=0, end=str.size()-1;
    while(start<end)
    {
        if(str[start]!=str[end])
            return false;
        else{
            start++;
            end--;
        }
    }
    }
};

//Solution 2

class Solution {
public:
    bool isPalindrome(string s) {
        string converted;
        for(auto i:s){
            if(iswalnum(i))
                converted+=i;
        }
       transform(converted.begin(), converted.end(), converted.begin(), ::tolower);
        cout<<converted;
        if(converted.length()==1)
            return true;
        int i=0,j=converted.length()-1;
        while(i<=j){
            if(converted[i]!=converted[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};
