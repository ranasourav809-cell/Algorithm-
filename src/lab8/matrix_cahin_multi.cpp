#include <iostream>
#include <ctime>
using namespace std;

int matrixChain(int p[], int i, int j)
{
    if(i==j)
        return 0;

    int minCost=999999;

    for(int k=i; k<j; k++)
    {
        int cost=
        matrixChain(p,i,k)
        +
        matrixChain(p,k+1,j)
        +
        p[i-1]*p[k]*p[j];

        if(cost<minCost)
            minCost=cost;
    }

    return minCost;
}

int main()
{
    cout.setf(ios::fixed);
    cout.precision(6);

    cout<<"InputSize   Time(sec)\n";

    for(int n=2; n<=15; n++)
    {
        int p[20];

        for(int i=0; i<=n; i++)
            p[i]=(i%10)+2;

        clock_t start=clock();

        for(int r=0; r<100; r++)
        {
            matrixChain(p,1,n);
        }

        clock_t stop=clock();

        double t=
        ((double)(stop-start))
        /CLOCKS_PER_SEC;

        t=t/100;

        cout<<n
            <<" -> "
            <<t
            <<" sec"<<endl;
    }

    return 0;
}