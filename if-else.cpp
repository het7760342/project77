#include <iostream>
#include <string>
using namespace std;

class printgrade
{
    private:
        int mark,rollno;
        char name[10];
    public:
        void student(int mark,char name[])
        {
            if(mark>=90 && mark<=100)
            {
                cout<<endl<<"grade A"<<endl;
            }
            else if(mark>=70 && mark<=89)
            {
                cout<<endl<<"grade B"<<endl;
            }
            else if(mark>=50 && mark<=69)
            {
                cout<<endl<<"grade C"<<endl;
            }
            else if(mark>=40 && mark<=49)
            {
                cout<<endl<<"grade D"<<endl;
            }
            else 
            {
                cout<<endl<<"FAIL"<<endl;
            }
        }
};
int main()
{
    int a;
    char b[10];
    printgrade s1;
    cout<<"enter total marks from 100:-";
    cin>>a;
    cout<<"enter name:";
    cin>>b;
    s1.student(a,b);
}