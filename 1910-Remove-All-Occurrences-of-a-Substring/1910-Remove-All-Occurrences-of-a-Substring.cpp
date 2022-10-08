class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        // yaha pr ye ho raha hai ki pehle ye loop tabtak chalega jabtak input string ka lenght zero nhi hi jata, and  agar jo bhi given part find krta hai aur wo part input string k length se chhota hai to loop mein enter krke us part ko delete krdo  
        while(s.length() != 0 && s.find(part) < s.length()){
            s.erase(s.find(part), part.length());
        }
        return s;
    }
    
};