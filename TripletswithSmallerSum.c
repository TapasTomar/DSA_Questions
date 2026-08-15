class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
       sort(arr.begin(),arr.end());
       int i=0;
       int c=0;
       for(i=0;i<arr.size()-2;i++){
           int l=i+1;
           int r=arr.size()-1;
           while(l<r){
           if(arr[i]+arr[l]+arr[r]<sum){
               c=c+(l-r);
               l++;
            }
              else{
                  r--;
              }
        
               
           }
       }return abs(c);
    }
};
