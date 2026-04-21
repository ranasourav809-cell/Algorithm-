#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Partition function
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int pos = low;

    for(int i=low; i<high; i++)
    {
        if(arr[i] <= pivot)
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }

    swap(arr[pos], arr[high]);
    return pos;
}

// Divide and Conquer Quick Select
int kthSmallest(int arr[], int low, int high, int k)
{
    if(low <= high)
    {
        int p = partition(arr, low, high);

        if(p == k-1)
            return arr[p];

        else if(p > k-1)
            return kthSmallest(arr, low, p-1, k);

        else
            return kthSmallest(arr, p+1, high, k);
    }

    return -1;
}

// Create shuffled data
vector<int> generateArray(int n)
{
    vector<int> a;

    for(int i=1; i<=n; i++)
        a.push_back(i);

    for(int i=0; i<n; i++)
    {
        int r = rand()%n;
        swap(a[i], a[r]);
    }

    return a;
}

int main()
{
    srand(time(0));

    int sizes[] =
    {100,500,1000,5000,10000,
     20000,25000,30000,35000,
     40000,45000,50000};

    int k;
    cout<<"Enter k: ";
    cin>>k;

    for(int i=0; i<12; i++)
    {
        int n = sizes[i];

        clock_t start = clock();

        vector<int> arr = generateArray(n);

        int ans =
        kthSmallest(arr.data(),0,n-1,k);

        clock_t stop = clock();

        double timeTaken =
        ((double)(stop-start))/CLOCKS_PER_SEC;

        cout<<n<<" -> "<<timeTaken<<" sec"<<endl;
    }

    return 0;
}