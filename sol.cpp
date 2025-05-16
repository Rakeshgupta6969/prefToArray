class Solution {
    public:
        vector<int> findArray(vector<int>& pref) {
         
          // using the bits manipulation
    
    
          int n = pref.size();
           
        //    vector<int> ans(n);
        //    ans[0] = pref[0];
    
    
        //    for(int i = 1; i<n; i++){
        //     ans[i] = pref[i]^pref[i-1];
        //    }
    
    
    
        //  return ans;
         
    
         // with the constant space.
    
         
    
         for(int i = n-1; i>=1; i--){
            pref[i] = pref[i]^pref[i-1];
         }
    
         return pref;
    
        }
    };