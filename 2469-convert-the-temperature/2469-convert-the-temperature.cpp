class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        
     
         
        // given data 
        double c= celsius;
        double k= c + 273.15;
        double f = c * 1.80 + 32.00;
        
           vector<double>vec;
        // store the value 
        vec.push_back(k); 
        vec.push_back(f);
        
        // calling the function
       return vec;
    }
      
      
       
        
   
};