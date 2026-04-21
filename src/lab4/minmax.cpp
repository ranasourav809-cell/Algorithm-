#include <iostream>
#include <ctime>
#include <vector>
#include <cstdlib>
using namespace std;

struct Pair
{
    int min;
    int max;
};

Pair findMinMax(int arr[], int low, int high)
{
    Pair result, left, right;

    if(low == high)
    {
        result.min = result.max = arr[low];
        return result;
    }

    if(high == low+1)
    {
        if(arr[low] < arr[high])
        {
            result.min = arr[low];
            result.max = arr[high];
        }
        else
        {
            result.min = arr[high];
            result.max = arr[low];
        }

        return result;
    }

    int mid = (low+high)/2;

    left = findMinMax(arr, low, mid);
    right = findMinMax(arr, mid+1, high);

    result.min =
    (left.min < right.min) ?
     left.min : right.min;

    result.max =
    (left.max > right.max) ?
     left.max : right.max;

    return result;
}

vector<int> generateArray(int n)
{
    vector<int> arr;

    for(int i=0;i<n;i++)
        arr.push_back(rand()%100000);

    return arr;
}

int main()
{
    srand(time(0));

    int sizes[]=
    {100,500,1000,5000,10000,
     20000,25000,30000,35000,
     40000,45000,50000};

    for(int i=0;i<12;i++)
    {
        int n=sizes[i];

        vector<int> arr=
        generateArray(n);

        clock_t start=clock();

        Pair ans=
        findMinMax(arr.data(),0,n-1);

        clock_t stop=clock();

        double timeTaken=
        ((double)(stop-start))
        /CLOCKS_PER_SEC;

        cout<<n<<" -> "
            <<timeTaken
            <<" sec"<<endl;
    }

    return 0;
}