#include<iostream>
#include<string>
using namespace std;

void quickSort(string *st ,int s ,int n);
main()
{
	string st; int start=0;
	cout<<"Enter a String\n";
	getline(cin,st);
	st = st+" ";
	for(int i= 0;i<st.length();i++)
	{
		if( st[i]==' ' )
		{
			quickSort( &st,start,i);
			start = i+1;
		}
	}
	cout<<"Sorted String:-\n"<<st<<endl;
}

void quickSort(string *st , int s , int l)
{
	if(l-s>=1)
	{
		int i = s+1 , j = l-1 ;
		char pivot = (*st)[s] ,temp;;
		while(i<=j)
		{
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
