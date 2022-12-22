class Solution {
private:
    int lower(vector<int> arr, int k){
        int s = 0;
        int e = arr.size()-1;
        int mid = s+(e-s)/2;
        int ans = -1;
        while(s<=e){
            if(arr[mid] == k){
                ans = mid;
                e = mid-1;
            }
            else if(arr[mid] < k)
                s = mid+1;
            else
                e = mid-1;
            mid = s+(e-s)/2;
        }
        return ans;
    }
    int upper(vector<int> arr, int k){
        int s = 0;
        int e = arr.size()-1;
        int mid = s+(e-s)/2;
        int ans = -1;
        while(s<=e){
            if(arr[mid] == k){
                ans = mid;
                s = mid+1;
            }
            else if(arr[mid] < k)
                s = mid+1;
            else
                e = mid-1;
            mid = s+(e-s)/2;
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int> arr, int k) {
        int a = lower(arr,k);
        int b = upper(arr,k);
        vector<int> ans;
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};
