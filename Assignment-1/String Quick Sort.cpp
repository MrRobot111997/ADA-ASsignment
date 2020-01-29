#include<iostream>
#include<string.h>
using namespace std;

void quickSort(string *st ,int s ,int n);
main()
{
	string st;
	cout<<"Enter a String\n";
	cin>>st;
	
	quickSort( &st,0,st.length());
	cout<<st<<endl;
}

void quickSort(string *st , int s , int l)
{
	if(l-s>=1)
	{
		int i = s+1 , j = l-1 ;
		char pivot = (*st)[s] ,temp;;
		while(i<=j)
		{
			cout<<"Yes"<<" ";
			if((*st)[i]>pivot )
			{
				if( (*st)[j]<pivot )
				{
				temp = (*st)[i];
				(*st)[i] = (*st)[j];
				(*st)[j] = temp;
				i++ ; j--;
				}
				else j--;
			}
			else
			i++;
		}
		temp = (*st)[s];
		(*st)[s] = (*st)[j];
		(*st)[j] = temp;
		 quickSort(st , s , j);
		 quickSort(st , j+1 , l);
	}
}
