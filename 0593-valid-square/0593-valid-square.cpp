class Solution {
public:
    
    // distance between two point 
  int dis(pair<int,int> x,pair<int,int> y){
        return (x.first-y.first)*(x.first-y.first)+(x.second-y.second)*(x.second-y.second);
    }
    
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        
        vector<pair<int,int>>vec;
      // store the value 
        vec.push_back({p1[0],p1[1]});
        vec.push_back({p2[0],p2[1]});
        vec.push_back({p3[0],p3[1]});
        vec.push_back({p4[0],p4[1]});
      
       // 
     sort(vec.begin(),vec.end());
        
        int s1= dis(vec[0],vec[1]);
        int s2= dis(vec[0],vec[2]);
        int s3= dis(vec[1],vec[3]);
        int s4= dis(vec[2],vec[3]);
        int d1= dis(vec[0],vec[3]);
        int d2= dis(vec[1],vec[2]);
        
        if (s1==0 || s2==0 || s3==0 || s4==0 || d1==0 || d2==0)return false;
        if (s1==s2 && s1==s3 && s1==s4 && d1==d2)  return true;
            return false;
       
        
        
        
    }
};