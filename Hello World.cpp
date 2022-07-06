#include<iostream>
using namespace std;
long n,k,ans=0;
cin>>n>>k;
int arr[n],hsh[n];
int srch(int hh[],int key,int n)
{
    long pos=key%n;
    while(1)
    {
        if(hh[pos]==key)
            return 1;
        else if(hh[pos]==0)
            return 0;
        pos=(pos+1)%n;
    }
}
void put(int hh[],int key,long n)
{
    long pos=key%n;
    while(hh[pos]!=0)
        pos=(pos+1)%n;
    hh[pos]=key;
}
int main()
{
    for(long a=0;a<n;a++)
    {
        cin>>arr[a];
        hsh[a]=0;
    }
    for(long a=0;a<n;a++)
    {
        if(srch(hsh,arr[a]+k,n))
            ans++;
        if(srch(hsh,arr[a]-k,n)&&arr[a]!=k)
            ans++;
        put(hsh,arr[a],n);
    }
    cout<<ans;
    return 0;
}
