class Solution {
public:
    bool isPalindrome(int x) {
      if(x<0) return false;
      else if(x>0 && x<10)return true;
      else
      {
          int y=x;
          long num=0;
          while(y)
          {
              int r=y%10;
              y/=10;
              num=num*10+r;
          }
          if(x==num)return true;
      }
        
        return false;
        
    }
};