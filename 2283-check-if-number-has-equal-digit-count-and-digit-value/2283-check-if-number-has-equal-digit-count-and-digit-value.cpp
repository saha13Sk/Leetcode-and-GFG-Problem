class Solution {
public:
    bool digitCount(string num) {
    
        for(int i=0;i<num.length();i++){			
            char ch =  i + '0';
			 int cnt = count(num.begin(),num.end(),ch);
            if(cnt!=(num[i]-'0'))    
                return false;
        }
            return true;
    }
};