class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        long long st = 0;
        long long end = n-1;
        while(st <= end){
            long long mid = st + (end-st)/2;
            
            if(v[mid] > x){
                end = mid-1;
            }
            else{
                st = mid+1;;
            }
            
        }
        return end;
        
    }
};
