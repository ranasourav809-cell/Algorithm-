#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Edge
{
   int u,v,w;
};

bool compare(
Edge a,
Edge b)
{
   return a.w<b.w;
}


int parent[5000];

int findSet(int x)
{
   while(parent[x]!=x)
      x=parent[x];

   return x;
}

void unionSet(int a,int b)
{
   int x=findSet(a);
   int y=findSet(b);

   parent[x]=y;
}


void kruskal(
vector<Edge> &edges,
int n)
{
   for(int i=0;i<n;i++)
      parent[i]=i;

   sort(
   edges.begin(),
   edges.end(),
   compare);

   int count=0;

   for(int i=0;
       i<edges.size();
       i++)
   {
      int a=
      findSet(
      edges[i].u);

      int b=
      findSet(
      edges[i].v);

      if(a!=b)
      {
         unionSet(a,b);

         count++;

         if(count==n-1)
            break;
      }
   }
}


vector<Edge>
makeEdges(int n)
{
   vector<Edge> e;

   for(int i=0;i<n;i++)
   {
      for(int j=i+1;j<n;j++)
      {
         if(rand()%2)
         {
            Edge x;

            x.u=i;
            x.v=j;
            x.w=
            rand()%10+1;

            e.push_back(x);
         }
      }
   }

   return e;
}


int main()
{
   srand(time(0));

   int sizes[]=
   {100,500,1000,2000};

   for(int i=0;i<4;i++)
   {
      int n=sizes[i];

      vector<Edge>
      edges=
      makeEdges(n);

      clock_t start=
      clock();

      kruskal(edges,n);

      clock_t stop=
      clock();

      double t=
      ((double)
      (stop-start))
      /
      CLOCKS_PER_SEC;

      cout
      <<n
      <<" -> "
      <<t
      <<" sec"
      <<endl;
   }

   return 0;
}