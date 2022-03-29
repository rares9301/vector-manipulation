#include <iostream>
using namespace std;
int a[100],n,i;
int minim(int left,int right)
{
int mid,a,b;
    if (left<right) 
        {
        mid=(left+right)/2;
        a=minim(left,mid);
        b=minim(mid+1,right);
            if (a<b) 
                return a;
        else return b;
        }
    else return a[left];
}
int main()
{
cin>>n;
for( i=1; i<=n; i++)
    cin>>a[i];
cout<<"MINIMUL VECTORULUI = "<<minim(1,n);
}
