#include<bits/stdc++.h>
using namespace std ;
#define endl '\n';

class Hero{
private:
	int health;
public:
	char *name; //yaha pe name[100] not good practice, better to allocate space in constructor
	char level;
	static int timeToComplete; //data type belongs to class NOT TO AN object.
	//simple constructor
	Hero(){
		cout<< "constructor called" << endl;
		name = new char[100];
	}
	//parameterised constructor
	Hero(int health){

		this-> health = health;

	}

	//copy constructor
	Hero(Hero& temp){

		char *ch = new char[strlen(temp.name) + 1];
		strcpy(ch, temp.name);
		this->name = ch;
		cout<< "copy constructor called"<< endl;
		this->health = temp.health;
		this->level = temp.level;

	}

	void print(){
		cout << endl;
		cout << "Name:" << this-> name << endl;
		cout<<"Level:"<< this->level <<endl;
		cout<< "Health:" << this->health << endl;
	}
	//getter
	int getHealth(){
		return health;
	}
	//setters
	void setHealth(int health){
		this -> health = health;
	}

	void setName(char name[]){

		strcpy(this -> name, name);
	}

	void setLevel(char level){
		this -> level = level;
	}


	//static functions - no need of object creation, no this keyword, can only access
	//static members of class
	static int example(){
		return timeToComplete;
	}

	//Destructor

	~Hero(){
		cout<< "Destructor called"<<endl;
	}
};

int Hero::timeToComplete = 5; 
//initalised outside class, does not need a created object to access in main
//can write cout << Hero::timeToComplete; to print in main

//can create object and access with object.timeToComplete also, but not recommended
//because static belongs to class and not object.

int main(){
	
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	//static declaration
	Hero ramesh;
	ramesh.level = 'a';

	char name1[6] = "Reyna";
	ramesh.setName(name1);
	ramesh.setHealth(70);
	cout<< ramesh.getHealth()<< endl;
	ramesh.print();


	//dynamic heap memory
	Hero *h = new Hero(); 


	//initalised with parameterised constructor
	Hero *p = new Hero(100);
	cout<< p->getHealth()<< endl;
	cout<< (*p).getHealth()<< endl;


	//copy an object
	Hero suresh(ramesh);
	suresh.print();

	//shallow copy copies the pointer , uses same memory
	//shallow copy done by default copy constructor

	//deep copy makes another array to store 
	//has to be done manually -> making a custom copy constructor as done above 

	Hero hero1;
	hero1.setHealth(93);
	hero1.setLevel('B');
	char name[8] = "Sukhija";
	hero1.setName(name);

	hero1.print();
	Hero hero2(hero1);
	hero2.print();

	hero1.name[0] = 'D';
	hero1.print();
	hero2.print();

	//destructor called automatically for static objects
	//has to be called manually for dynamic objects

	cout << endl;
	delete h;
	delete p;

	cout<< Hero::timeToComplete << endl;
	cout << Hero::example() << endl;

	
		

}