
int floorSqrt(int n)
{
    // Write your code here.
    long int s=1;
    long int e=n;

   long int ans=0;
    while(s<=e){

        long int mid = (s+e)/2;

        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }

        else{
            e=mid-1;
        }
    }

    return ans;
}
