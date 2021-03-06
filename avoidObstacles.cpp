int avoidObstacles(std::vector<int> a) {
    for(int i = 1; ;++i){
        int t = 1;
        for(int j:a)
            t = t && j%i;
        if(t)return i;
    }
}
//solution 2
int avoidObstacles(std::vector<int> a) {
    std::sort(a.begin(),a.end());
    for(int i=1;i<a[a.size()-1];i++){
        int k=0;
        for(int j=0;j<a.size();j++)
            if(a[j]%i==0) break;
            else k++;
        if(k==a.size()) return i;
    }
    return a[a.size()-1]+1;
}
/*
You are given an array of integers representing coordinates of obstacles situated on a straight line.

Assume that you are jumping from the point with coordinate 0 to the right. You are allowed only to make jumps of the same length represented by some integer.

Find the minimal length of the jump enough to avoid all the obstacles.

Example

For inputArray = [5, 3, 6, 7, 9], the output should be
avoidObstacles(inputArray) = 4.
*/
