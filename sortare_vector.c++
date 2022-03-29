#include <iostream>
using namespace std;
int x[50],n,i;

int partway(int left,int right)
{

    int aux,i,j,di,dj;

    di=0;
    dj=1;
    i=left;
    j=right;

    while(i<j)
    {

        if (x[i]<x[j])
        {
            aux=x[i];
            x[i]=x[j];
            x[j]=aux;

            aux=di;
            di=dj;
            dj=aux;
        }

        i=i+di;

        j=j-dj;
    }

    return j;

}

void quick(int left,int right)
{

    int mid;

    if (left<right)
    {
        mid=partway(left,right);
        quick(left,mid-1);
        quick(mid+1,right);

    }

}

int main()
{

    cin>>n;

    for (i=1; i<=n; i++)cin>>x[i];
    for (i=1; i<=n; i++)
    {
        while(x[i]>9)
        {
            x[i]=x[i]/10;

        }
    }

    quick(1,n);

    for (i=1; i<=n; i++)cout<<x[i];
}
