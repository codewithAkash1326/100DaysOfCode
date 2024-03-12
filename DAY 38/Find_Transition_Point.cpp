class solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        
       int ans=-1;
       int s=0;
       int e=n-1;
       while(s<=e){
           int mid = (s+e)/2;
           if(arr[mid]==0){
               s=mid+1;
           }
           
           else{
               ans=mid;
               e=mid-1;
           }
       }
       return ans;
    }

};
