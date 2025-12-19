class Solution {
  public:
    bool isPalindrome(string& s) {

    int left = 0, right = s.size() - 1;
  
  	
  	bool flag = true;
  	
  	
    while (left < right){
        if (s[left] != s[right]) {
        flag = false;
         break;
        }
        left++;
        right--;
    }
    
        return flag;
    }
};
