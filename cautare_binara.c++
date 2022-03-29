#include <iostream>

using namespace std;

const int N = 10;

int V[N] = {16, 27, 43, 45, 49, 60, 68, 81, 92, 96};

int CautareBinara(int Left, int Right, int x)
{
    if(Left > Right)
        return -1;
    else
    {
        int Mid =(Left+Right)/2;
        if(x == V[Mid])
            return Mid;
        if(x < V[Mid])
            return CautareBinara(Left, Mid-1, x);
        else
            return CautareBinara(Mid+1, Right, x);
    }
}

int main()
{
    cout << CautareBinara(0, N-1, 43);
    return 0;
}
