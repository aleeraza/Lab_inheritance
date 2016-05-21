#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <conio.h>
#include <cstring>
#include <string>
#include <string.h>

using namespace std;

class Band{
	private:
		string name;
	protected:
		int count;
		
		
	public:
		void set_name(string name);
		string get_name();
		virtual int counter()=0;
};

void Band::set_name(string name)
{
	this -> name = name;
}

string Band::get_name()
{
	return this -> name;
}




class Metal: public Band
{
	protected:
		int pyro;
		int memb;
		
	public:
		Metal()
		{
			pyro=5;
			memb=10;
		}
		
		int add(int a)
		{
			pyro=pyro+a;
			
		}
		int sub(int a)
		{
			pyro=pyro-a;
			
		}
		int counter()
		{
			return (pyro + memb);
		}
};

class Jazz: public Band
{
	protected:
		int pyro;
		int memb;
		
	
	public:
		Jazz()
		{
			pyro=5;
			memb=8;
		}
		int counter()
		{
			return (pyro + memb);
		}
};

class March: public Band
{
	protected:
		int pyro;
		int memb;
	
	public:
		March()
		{
			pyro=5;
			memb=12;
		}
		
		
		int counter()
		{
			return (pyro + memb);
		}
};

class Symph: public Band
{
	
	protected:
		//int pyro=5;
		int memb;
		int cond;
	
	
	public:
		Symph()
		{
			memb=8;
			cond=1;
		}
		
		
		int counter()
		{
			return (cond + memb);
		}
};


int main(void)
{
	
	int ch, ch2;
	Metal a;
	a.set_name("Metal\n");
	cout<<a.get_name();
	cout<<"Total Staff: ";
	cout<<a.counter();
	cout<<"\n\nCurrently there are 5 polytechnicians and 10 members\n\nIf you want to \nAdd Members Press 1\nRemove Members Press 2 \nElse Press 0 :\n";
	cin>>ch;
	
	if(ch==1)
	{
		cout<<"\n\nEnter the number of members to add :";
		cin>>ch2;
		a.add(ch2);
	}
	if(ch==2)
	{
		cout<<"\n\nEnter the number of members to remove :";
		cin>>ch2;
		a.sub(ch2);
	}
	else if(ch==0)
	{
		cout<<"\n\nYou have decided to make no changes in this band";
	}
	
	cout<<"\nTotal Staff after Changes : ";
	cout<<a.counter();
	
	Jazz b;
	b.set_name("\nJazz");
	cout<<b.get_name();
	cout<<"\nTotal Staff: ";
	cout<<b.counter();
	
	
	March c;
	c.set_name("\nMarching");
	cout<<c.get_name();
	cout<<"\nTotal Staff: ";
	cout<<c.counter();
	
	Symph d;
	d.set_name("\nSymphony");
	cout<<d.get_name();
	cout<<"\nTotal Staff: ";
	cout<<d.counter();
	
	
	return 0;
	
}
