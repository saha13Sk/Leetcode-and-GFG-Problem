class Solution {
public:
    int splitNum(int num) {
    vector<int> vec;

    // store the value
    while (num > 0)
    {
        int d = num % 10;
        if(d!=0){
        vec.push_back(d);
        }
        num /= 10;
    }
        // sorting 
        sort(vec.begin(),vec.end());       
        
    int num1=0; 
        int num2=0;
        // reverse number concept
        for(int i=0;i<vec.size();i=i+2 ){
            num1 = num1 * 10 + vec[i];
        }
        for(int j=1;j<vec.size();j=j+2){
             num2 = num2 *10 + vec[j] ;
        }
        return (num1 + num2);
        
        
    }
};