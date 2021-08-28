/*Create the following classes and write member functions and display proper
information to user using constructor and destructor.
a) Time b) Date c) Person d) Student e) Fan f) Point*/


#include <iostream>

using namespace std;

class time
{

    int hr,mi,sec;
    public:

    time()
    {

        cout<<"enter the hr,min& sec:";
        cin>>hr>>mi>>sec;

        cout<<"time: "<<hr<<"hr"<<":"<<mi<<"min"<<":"<<sec<<"sec";
        cout<<"\n";

    }

    ~time()
    {

    }
};

class date
{

    int dd,mm,yy;
    public:

    date()
    {

        cout<<"enter dd mm & yy:";
        cin>>dd>>mm>>yy;

        cout<<dd<<"/"<<mm<<"/"<<yy;
        cout<<"\n";

    }

    ~date()
    {

    }
};

class person
{
    char name[10];
    char address[10];
    int age;
    public:

    person()
    {
        cout<<"name:";
        cin>>name;

        cout<<"\n address:";
        cin>>address;

        cout<<"\n age:";
        cin>>age;

        cout<<"name:"<<name;
        cout<<"\n address:"<<address;
        cout<<"\n age:"<<age;
        cout<<"\n";

    }

    ~person()
    {

    }
};

class student
{
    int rn;
    char name[10];
    double fees;
    public:

    student()
    {

        cout<<"enter rn,name,fees:";
        cin>>rn>>name>>fees;

        cout<<"\n rn:"<<rn;
        cout<<"\n name:"<<name;
        cout<<"\n fees:"<<fees;
        cout<<"\n";

    }

    ~student()
    {

    }
};

class fan
{
    char company[10];
    int l,b;
    public:

    fan()
    {
        cout<<"enter company l &b:";
        cin>>company>>l>>b;

        cout<<"\n company:"<<company;
        cout<<"\n l:"<<l;
        cout<<"\n b:"<<b;
        cout<<"\n";
    }
    ~fan()
    {

    }
};


class point
{

    int a,b;
    public:

    point()
    {
        cout<<"enter a & b:";
        cin>>a>>b;

        cout<<"\na point:"<<a;
        cout<<"\n b point:"<<b;
    }
    ~point()
    {

    }

};
int main()
{
    time t;
    date d;
    person p;
    student s;
    fan f;
    point pt;

}
