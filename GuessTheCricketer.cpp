#include<iostream>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<list>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
	string players[4]={"virat kohli","sachin","kambli","ganguly"};
    int choices=9,present,currentplayer=0;
	list<char>arr;
	string name = players[currentplayer];
	int flag[name.size()];
	cout<<"###############   GUESS THE CRICKETER   ###########\n\n";
	for(int i=0;i<name.size();i++)
	{
		if(name[i]==' ')
		{
			arr.push_back(' ');
			cout<<"  ";
		}
		
		else
		cout<<"_ ";
	}
		cout<<"\n\n\nremaining chances : "<<choices;
	while(1)
	{
		
	present=0;
	if(_kbhit())
	{
		system("cls");
			cout<<"###############   GUESS THE CRICKETER   ###########\n\n";

		char c=_getch();
		for(int i=0;i<name.size();i++)
		{
			
			int count=0,gncount=0;
			if(c==name[i])
			{present++;
				for(list<char>::iterator j=arr.begin();j!=arr.end();j++)
				{
					if(c==*j)
					count++;
				}
			for(int m=0;m<name.size();m++)
			if(name[m]==c)
			gncount++;
				if(count<gncount)
			      arr.push_back(c);
			  }
	

	}
	if(present==0)
	choices--;
	if(choices==0)
	{
	    char d;
		cout<<"the answer was :\n"<<name<<endl;
		cout<<"try another player?(Y/N)...";
		cin>>d;
		if(d!='y'&&d!='Y')break;
		else
		{
			if(currentplayer==3)
			currentplayer=-1;
			name=players[++currentplayer];
			choices=9;
			arr.clear();
		
			for(int i=0;i<name.size();i++)
	  {
		if(name[i]==' ')
		{
			arr.push_back(' ');
		
		}
		}
	}
		
	}
		if(arr.size()==name.size())
		{
		cout<<"\n\nyou guessed it!!\nyour score :"<<(float)(choices/9.0)*100;
		char d;
		cout<<"\nthe answer was :\n"<<name<<endl;
		cout<<"try another player?(Y/N)...";
		cin>>d;
		if(d!='y'&&d!='Y')break;
		else
		{
			system("cls");
			cout<<"###############   GUESS THE CRICKETER   ###########\n\n";

			if(currentplayer==3)
			currentplayer=-1;
			name=players[++currentplayer];
			choices=9;
			arr.clear();
		
			for(int i=0;i<name.size();i++)
	{
		if(name[i]==' ')
		{
			arr.push_back(' ');
			
		}
		}
	}
	
		}
	int l=0;
		for(int i=0;i<name.size();i++)
		{l=0;
		for(list<char>::iterator m=arr.begin();m!=arr.end();m++)
		{
		
			if(*m==name[i])
			{
				
			    l++;
				cout<<*m;
				break;
			}
			
	
		 }
		 
		 if(name[i]!=' '&&l==0)
		cout<<"_ ";
		else
		cout<<" ";
	}
	
	
	cout<<endl<<"\n\nremaining chances : "<<choices;
	
}	
}
}
