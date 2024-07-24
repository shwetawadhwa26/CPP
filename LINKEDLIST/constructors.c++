// #include<iostream>
// using namespace std;

// class Hero{
//     //properties of class
//     private:
//     int health;
//     char level;

//     public:
//     int gethealth(){
//         return health;
//     }

//     char getlevel(){
//         return level;
//     }
//     void sethealth(int h){
//         health=h;
//     }

//     void setlevel(char ch){
//         level=ch;
//     }

// };

// int main()
// {
//     //creation of object and known as static allocation
//     Hero h1;

//     Hero *h2=new Hero;

//     //  h1.health=99;
//     //  h1.level='A';

//     //use setter
//     h1.sethealth(80);
//     h1.setlevel('B');
//     //use getter
//     cout<<"health is : "<<h1.gethealth()<<endl;
//     cout<<"level is : "<<h1.getlevel()<<endl;

//     //dynamically access( -> or (*h2) )
//     h2->sethealth(70);
//     h2->setlevel('C');
//     cout<<"health is : "<<h2->gethealth()<<endl;
//     cout<<"level is : "<<h2->getlevel()<<endl;

//     return 0;
// }

// Default constructor - a constructor that takes no parameters
// #include <iostream>
// using namespace std;
// class myclass
// {
// public:
//     myclass()
//     {
//         cout << "HELLO CONSTRUCTOR IS CALLED" << endl;
//         // default constructor code
//     }
// };
// int main()
// {
//     myclass hero;
//     myclass *h = new myclass;
//     return 0;
// }

// Parameterised constructor - Takes parameters to initialize object members with specific values
// THIS KEYWORD -

// #include <iostream>
// using namespace std;
// class myclass
// {
// public:
//     int value;
//     myclass(int value)
//     {
//         cout << "this -> " << this << endl;
//         this->value = value;
//     }
// };
// int main()
// {
//     myclass lakshay(10);
//     cout << "Address of lakshay " << &lakshay << endl;

//     return 0;
// }

// Copy constructor - Creates a new object by copying values from an existing object
// #include <iostream>
// using namespace std;
// class Happy
// {
// public:
//     int health;
//     char level;
//     Happy(int health, char level)
//     {
//         this->health = health;
//         this->level = level;
//     }
//     void display()
//     {
//         cout << this->health << endl;
//         cout << this->level << endl;
//     }
// };
// int main()
// {
//     Happy h1(70, 'A');
//     h1.display();
//     // copy const.
//     Happy h2(h1);
//     h2.display();
//     return 0;
// }

#include <iostream>
using namespace std;
class hero
{
};
int main()
{

    return 0;
}