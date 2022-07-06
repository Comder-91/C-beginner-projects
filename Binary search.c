long binary_search(long arr[],long l,long r,long key)
{
    if((r-l+1)%2==1)
    {
        long mid=(r+l)/2;
        if(key==arr[mid])
            return mid;
        else if(key<arr[mid])
            return binary_search(arr,l,mid-1,key);
        else
            return binary_search(arr,mid+1,r,key);
    }
    else
    {
        long midl=(r+l)/2,midr=(r+l)/2+1;
        if(key==arr[midl])
            return midl;
        else if(key==midr)
            return midr;
        else if(key<midl)
            return binary_search(arr,l,midl,key);
        else
            return binary_search(arr,midr,r,key);
    }
}
