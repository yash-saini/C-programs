# include <iostream>
# include <cstring>
using namespace std;
class test
{
    char *name;
    int len;
public:
    test()
    {
        len=0;
        name=new char[len+1];
    }
    test(char *p)
    {
        len=strlen(p);
        name=new char[len+1];
        strcpy(name,p);
    }
    void display()
    {
        cout<<name<<"\n";
    }
    void join(test &, test &);
};
void test::join(test &a,test &b)
{
    test obj;
    len=a.len+b.len;
    name=new char[len+1];
    strcpy(name,a.name);
    strcat(name,b.name);


}


int main()
{
    char *p="YASH",*ptr="SAINI";
    test t1(p),t2(ptr),t3,t4;
    t3.join(t1,t2);
    t1.display();t2.display();
    t3.display();

    return 0;
}
