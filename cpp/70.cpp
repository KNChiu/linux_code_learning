class Solution {
public:
    int table[100] = {0};
    
    int Find(int f){
        if (table[f]) return table[f];
        table[f] = Find(f-1) + Find(f-2);
        return table[f];
    }
    
    int climbStairs(int n) {
        table[1]=1;
        table[2]=2;
        table[3]=3;
        return Find(n);
    }
        
};
