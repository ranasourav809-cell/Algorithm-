#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

#define INF 999999

int getMinKey(
int used[],
int key[],
int n)
{
   int pos=-1;
   int mn=INF;

   for(int i=0;i<n;i++)
   {
      if(!used[i]
      && key[i]<mn)
      {
         mn=key[i];
         pos=i;
      }
   }

   return pos;
}


void primMST(
vector<vector<int> > &g,
int n)
{
   int parent[5000];
   int key[5000];
   int used[5000];

   for(int i=0;i<n;i++)
   {
      key[i]=INF;
      used[i]=0;
   }

   key[0]=0;
   parent[0]=-1;

   for(int count=0;
       count<n-1;
       count++)
   {
      int u=
      getMinKey(
      used,key,n);

      if(u==-1)
         break;

      used[u]=1;

      for(int v=0;v<n;v++)
      {
         if(g[u][v]!=INF
         &&
         !used[v]
         &&
         g[u][v]<key[v])
         {
            parent[v]=u;
            key[v]=g[u][v];
         }
      }
   }
}


vector<vector<int> >
makeGraph(int n)
{
   vector<vector<int> >
   g(n,vector<int>(n));

   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
         if(i==j)
            g[i][j]=0;

         else if(rand()%2)
            g[i][j]=
            rand()%10+1;

         else
            g[i][j]=INF;
      }
   }

   return g;
}


int main()
{
   srand(time(0));

   int sizes[]=
   {100,500,1000,2000};

   for(int i=0;i<4;i++)
   {
      int n=sizes[i];

      vector<vector<int> >
      graph=
      makeGraph(n);

      clock_t start=
      clock();

      primMST(graph,n);

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