#include <iostream>
#include <algorithm>

using namespace std;

struct Activity
{
    int start;
    int finish;
};

bool compare(
    Activity a,
    Activity b)
{
    return a.finish <
           b.finish;
}

void selectActivities(
    Activity arr[],
    int n)
{
    sort(
        arr,
        arr + n,
        compare);

    cout << "Selected Activities:\n";

    int i = 0;

    cout << "("
         << arr[i].start
         << ","
         << arr[i].finish
         << ")\n";

    for (int j = 1;
         j < n;
         j++)
    {
        if (arr[j].start >=
            arr[i].finish)
        {
            cout << "("
                 << arr[j].start
                 << ","
                 << arr[j].finish
                 << ")\n";

            i = j;
        }
    }
}

int main()
{
    Activity arr[] =
        {
            {1, 2},
            {3, 4},
            {0, 6},
            {5, 7},
            {8, 9},
            {5, 9}};

    int n = 6;

    selectActivities(
        arr, n);

    return 0;
}