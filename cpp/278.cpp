class Solution {
public:
    int find(int s, int e){
        double temp = (double)s + (double)e;
        int mid = temp / 2;
        if (isBadVersion(mid) != isBadVersion(mid + 1))
            return mid + 1;
         else if (isBadVersion(mid) == false)
             return find(s, mid);
         else
             return find(mid, s);
    }

    int firstBadVersion(int n) {
        if(isBadVersion(1)) return 1;
        return find(n, 1);
    }
};

