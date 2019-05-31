//
// Created by yukish on 31.05.19.
//

#ifndef FOURTH_GRUP_SPIRAL_H
#define FOURTH_GRUP_SPIRAL_H
#include <iostream>
#include <new>
#include <curses.h>

using namespace std;
class spiral
{
	 private:
			int i,j;
			int n;
			int **a;
	 public:
    explicit spiral (int m);
			~spiral ();
			void obr ();
			void output ();
};

spiral :: spiral (int m)
{
	 n=m;
	 a=new int *[n];
	 for (i=0;i<n;i++)
			a[i]=new int [n];
	 for (i=0;i<n;i++)
			for (j=0;j<n;j++)
				 a[i][j]=0;
}

spiral :: ~spiral ()
{
	 for (i=0;i<n;i++)
			delete []a[i];
	 delete []a;
}

void spiral :: obr ()
{
	 int k=1;
			for (j=0;j<n;j++)
				 a[0][j]=k++;
			for (i=1;i<n;i++)
				 a[i][n-1]=k++;
			k+=n-2;
			for (j=0;j<n-1;j++)
				 a[n-1][j]=k--;
			k+=n+1;
			for (i=1;i<n-1;i++)
				 a[i][0]=k--;
}
void spiral :: output ()
{
	 cout<<"array :"<<endl;
	 for (i=0;i<n;i++)
	 {
			cout<<"\t\t";
			for(j=0;j<n;j++)
			if (a[i][j]<10)
				 cout<<"0"<<a[i][j]<<" ";
			else cout <<a[i][j]<<" ";
			cout<<endl;
	 }
}
#endif //FOURTH_GRUP_SPIRAL_H
