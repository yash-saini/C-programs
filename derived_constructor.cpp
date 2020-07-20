# include <iostream>
using namespace std;
class student
{
protected:
    int roll=0;
public:
    student(int a)
    {
        cout<<"Student call\n";
    }
    void display()
    {
        cout<<roll;
    }
};
class test: virtual public student
{
protected:
    int mark1=0,mark2=0;
public:
    test(int b):
        student(b)
    {
        cout<<"Test called \n";
    }
    void disp()
    {
        cout<<mark1<<endl;
        cout<<mark2<<endl;
    }

};
class sports: virtual public student
{
    protected:
    int mark_1=2,mark_2=0;
public:
    sports(int v):
        student(v)
    {
        cout<<"sports"<<endl;
    }
    void disp()
    {
        cout<<mark_1<<endl;
        cout<<mark_2<<endl;
    }

};
class child: public test,public sports
{
protected:
    int sum=0;
public:
    child( int b, int v):
        test(b)
        sports(v)
        {
            cout<<"Finally child"<<endl;
        }
    void sum1()
    {
        cout<<mark_1+mark1;
    }
} ;
int main()
{
    child cd(2,3);
    cd.sum1();
    return 0;
}
