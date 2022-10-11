class Solution {
public:
    int countPrimes(int n) {
        
        
        int count = 0;
        // declaring the n+1 size bool vector and at starting set all values between 0 and n are prime number
        vector<bool> prime(n+1, true);
        
        prime[0] = false; // 0 is not prime number
        prime[1] = false; // 1 is also not prime number
        
        
        for(int i = 2; i < n; i++){
            
            if(prime[i]){
                count++;
                
                // setting the value false who is comes under the table of prime number
                for(int j = 2*i; j < n; j = j+i){
                    prime[j] = false;
                }
            }
        }
        return count;
        
    }
};