//problem 11.	Create a class FLOAT that contains one float data member. Overload all the four arithmetic operators so that they can operate on the objects of FLOAT.
/*#include<iostream>
using namespace std;
class Float
{

    private:
    float x;

    public:
    void set_data(float a)
    {
        x=a;
    }

    void get_data()
    {
        cout<<"x is :  "<<x<<endl;
    }

    Float operator+(Float c)
    {
        Float temp;
       
        temp.x=x+c.x;
        return temp;
    }
      Float operator -(Float c)
    {
        Float temp;
        temp.x=x-c.x;
        return temp;
    }
      Float operator *(Float c)
    {
       Float temp;
        temp.x=x*c.x;
        return temp;
    }
      Float operator/(Float c)
    {
         Float temp;
        temp.x=x/(c.x);
        return temp;
    }
};
int main()
{
    Float c1,c2,c3,c4,c5,c6;
    c1.set_data(16);
    c2.set_data(4);
    c3=c1+c2;
    c3.get_data();
    c4=c1-c2;
    c4.get_data();
    c5=c1*c2;
    c5.get_data();
    c6=c1/c2;
    c6.get_data();
    return 0;
}*/

//problem 2 2. Define a class Rectangle and overload area function for different types of data type.

/*#include<iostream>
using namespace std;
class rectangle
{
   double ar;

    public:
    void area(int a,int c)
    {
        ar=a*c;


    }
     void area(double a,double c)
    {
         ar=a*c;
    }
     void area(int a,double c)
    {
          ar=a*c;

    }
    void area(double a,int c)
    {
         ar=a*c;

    }
void display()
{
    cout<<"area is : "<<ar<<endl;
}

};
int main()
{
    rectangle r;
  
    r.area(4.0,6.0);
    r.display();
    r.area(2,5);
    r.display();
    r.area(2.0,4);
    r.display();
    r.area(5,6.7);
    r.display();
    
    return 0;
}*/

//problem 3--------->3. Define a base class Animals having member function sound() . Define another
//derived class from Animals class named Dogs. You need to override the sound
//function of the base class in the derived class.

/*#include<iostream>
using namespace std;
class Animals
{
    protected:
         string sound1;
    public:
         void set_sound(string sound1)
          {
            this->sound1=sound1;
          }     

          string sound()
          {
            return sound1;
          }

};
class Dogs: public Animals
{
   protected:
        string dogs_sound;
    public:
     void set_sound(string sound1)
       {
          dogs_sound=sound1;
       }

      string sound()
          {
            return dogs_sound;
          }
};
int main()
{
  Animals cat;
    cat.set_sound("meww");
    cout<<"cat sound is :"<<cat.sound()<<endl;

    Dogs pit;
    pit.set_sound("bhaww");
    cout<<"dog sound is :"<<pit.sound()<<endl;
return 0;
}*/
//4. Define a class Addition that can add 2 or 3 numbers of different data types using function overloading.

/*#include<iostream>
using namespace std;
class Addition
{
    private:
    double sum;

    public:

    void add(int a, int b)
    {
        sum=a+b;

    }
     void add(double a, double b)
    {
        sum=a+b;
        
    }
    void add(double a, double b, double c)
    {
        sum=a+b+c;
        
    }
    void add(int a, int b,int c)
    {
        sum=a+b+c;

    }
    void display()
    {
        cout<<"sum is : "<<sum<<endl;
    }

};
int main()
{
    Addition a1;
    a1.add(3,2);
    a1.display();
    a1.add(5.6,6.7);
    a1.display();
    a1.add(4,5,6);
    a1.display();
    a1.add(5.6,7.8,9.8);
    a1.display();
    return 0;
} */

//problem-------------4;
//5. Define a class A having multiple constructors. Define another class B derived from
//class A. Create derived class constructors and show use of constructor in this single
//inheritance.
/*#include<iostream>
using namespace std;
class A
{
     public:
     int x,y;
     A()
     {
cout<<"base class default constructor called"<<endl

        }


     A(int x)
     {
        cout<<"base class parameterized constructor"<<endl;
         this->x=x;
         cout<<"x is "<<x;
        
     }
     A(int x,int y)
     {
        cout<<"base class parameterized constructor"<<endl;
        this->x=x;
        this->y=y;
         cout<<"x is "<<x<<" and y is :"<<y;
     }
};
class B : public A
{
   
   public:
   int x,y;

   B()
   {
      cout<<"derived class default constructor called"<<endl;
   }
   B(int x)
   {
    cout<<"base class parameterized constructor"<<endl;
    this->x=x;
     cout<<"x is "<<x;
   }
   B(int x, int y)
   {
    cout<<"base class parameterized constructor"<<endl;
        this->x=x;
        this->y=y;
          cout<<"x is "<<x<<" and y is :"<<y;
    
   }
};
int main()
{
    B b1,b2(6),b3(5,6);
    return 0;
}*/
// problem 5 example 2
/*#include<iostream>
using namespace std;
class Person
{
    protected:
    int  age;
    string name;

    public:
    Person()
    {
        cout<<"base class default constructor called"<<endl;
    }

    Person(string name, int age)
    {
        cout<<"base class parameterized constructor"<<endl;
        this->name=name;
        this->age=age;
    }
 
};
class Student: public Person
{
    protected:
    int roll_no;
    public:

      Student():Person()
      {
       cout<<"derived class default constructor called"<<endl;
      }
      Student(int roll_no,string name,int age):Person(name,age)
      {
        cout<<"derived class parameterized constructor"<<endl;
        this->roll_no=roll_no;
      }
      void display()
      {
        cout<<"name : "<<name<<"  age : "<<age<<"  roll no "<<roll_no<<endl;
        
      }

};
int main()
{
    Student s1(123,"amar",19);
    s1.display();
    return 0;
}*/
//problem 6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your choice.
/*#include<iostream>
using namespace std;
class A
{
  public:
  A()
  {
    cout<<"A called  "<<endl;
  }
};
class B: public A
{
     public:
  B()
  {
    cout<<"B called  "<<endl;
  }
};
class C: public B
{
     public:
  C()
  {
    cout<<"C called  "<<endl;
  }
};
int main()
{
    C c1;

    return 0;
}*/
//problem 7. C++ Program to illustrate the use of Constructors in single inheritance of your choice.
/*#include<iostream>
using namespace std;
class A
{
  public:
  A()
  {
    cout<<"A called  "<<endl;
  }
};
class B: public A
{
     public:
  B()
  {
    cout<<"B called  "<<endl;
  }
};
int main()
{
    B b1;
    return 0;
}*/
//problem 8. Write a C++ program to find the factorial of a number using copy constructor
/*#include<iostream>
using namespace std;
class factorial
{
    protected:

    int i,n,fact;

    public:

    factorial(int x)
    {
          n=x;
          fact=1;
    }
    factorial(factorial &a)
    {
        cout<<"copy constructor called"<<endl;
        n=a.n;
        fact=1;
    }

   void  calculate()
   {

    for(int i=n;i>0;i--)
    {
        fact=i*fact;
    }
    cout<<"factorial is : "<<fact<<endl;
   }
};
int main()
{
    factorial f1(5);
    f1.calculate();
    factorial f2(f1);
    f2.calculate();
return 0;
}*/

//problem 9. Write a C++ program to calculate the area of triangle, rectangle and circle using
//constructor overloading. The program should be menu driven.
/*#include<iostream>
using namespace std;
class Area
{
    protected:
    int area;

    public:
    Area()
    {

    }
    Area(int l,int b,int h)
    {
      area=l*b*h;
    }

    Area(int l,int b)
    {
      area=l*b;
    }
    Area(int r)
    {
      area=(22/7)*r*r;
    }

   int display()
    {

      return area;
   
    }
};
int main()
{
  int choice;
  while(1)
  {
 cout<<"1. area of triangle"<<endl;
 cout<<"2. area of rectangle"<<endl;
 cout<<"3. area of circle "<<endl;
 cout<<"4. exit"<<endl;
 cout<<"enter your choice"<<endl;
 cin>>choice;

 if(choice==1)
 {
  int a,b,c;
  cout<<"enter length bredth and height";
  cin>>a>>b>>c;
  Area a1(a,b,c);
  int ar=a1.display();
  cout<<"area of triangle is : "<<ar<<endl;
 }

 else if(choice==2)
 {
  int a,b;
  cout<<"enter length and bredth";
  cin>>a>>b;
  Area a2(a,b);
  int ar=a2.display();
  cout<<"area of rectangle is : "<<ar<<endl;
 }
 else if (choice==3)
 {
  int a;
  cout<<"enter side of circle";
  cin>>a;
  Area a3(a);
  int ar=a3.display();
  cout<<"area of circle is : "<<ar<<endl;

 }
 else{
  break;
 }
  }
 

  return 0;

}*/

//problem 10-----------------------------------------------------------------------------------------------------
/*Create a C++ class for player objects with the following attributes: player no., name,
number of matches and number of goals done in each match. The number of
matches varies for each player. Write a parameterized constructor which initializes
player no., name, number of subjects and creates an array for number of goals and
number of matches dynamically.*/

#include<iostream>
using namespace std;
class Player
{
    protected:
    int player_no, number_of_matches,sum=0;
    string name;
    int *goals;

    public:
    Player()
    {
      cout<<"enter a player number";
      cin>>player_no;
      cout<<"enter your name";
      cin>>name;
      cout<<"enter number of matches you play";
      cin>>number_of_matches;
      goals=new int[number_of_matches];
      for(int i=0;i<number_of_matches;i++)
      {
        cout<<"enter no. of goals in match "<<i+1<<": ";
        cin>>goals[i];
      }

      sum=0;

    }

    void display()
    {
      cout<<" player no is :"<<player_no<<endl;
      cout<<"name is : "<<name<<endl;
      cout<<"number of matches played"<<number_of_matches<<endl;

    for(int i=0;i<number_of_matches;i++)
      {
       
        sum=sum+goals[i];
      }

      cout<<"total goals are : "<<sum<<endl;
    }
};
int main()
{
  Player a1;
  a1.display();
   return 0;

  
}