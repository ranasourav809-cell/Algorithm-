#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

struct Point
{
   int x,y;
};

int cross(Point O,Point A,Point B)
{
   return (A.x-O.x)*(B.y-O.y)
        - (A.y-O.y)*(B.x-O.x);
}

bool compare(Point a,Point b)
{
   if(a.x==b.x)
      return a.y<b.y;

   return a.x<b.x;
}

void convexHull(vector<Point>& p)
{
   int n=p.size();

   if(n<3) return;

   sort(p.begin(),p.end(),compare);

   vector<Point> hull(2*n);

   int k=0;

   // lower hull
   for(int i=0;i<n;i++)
   {
      while(k>=2 &&
      cross(hull[k-2],hull[k-1],p[i])<=0)
         k--;

      hull[k++]=p[i];
   }

   for(int i=n-2,t=k+1;i>=0;i--)
   {
      while(k>=t &&
      cross(hull[k-2],hull[k-1],p[i])<=0)
         k--;

      hull[k++]=p[i];
   }
}

vector<Point> generatePoints(int n)
{
   vector<Point> pts;

   for(int i=0;i<n;i++)
   {
      Point p;
      p.x=rand()%10000;
      p.y=rand()%10000;

      pts.push_back(p);
   }

   return pts;
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

      vector<Point> pts=
      generatePoints(n);

      clock_t start=
      clock();

      convexHull(pts);

      clock_t stop=
      clock();

      double t=
      ((double)(stop-start))
      /CLOCKS_PER_SEC;

      cout<<n<<" -> "
          <<t<<" sec"<<endl;
   }

   return 0;
}