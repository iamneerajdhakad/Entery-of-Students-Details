#include<iostream>
using namespace std;
class student
{
    private:
    char name[30];
    int rollno;
    int total;
    float perc;

    public:
    void getdata(void);
    void putdata(void);
};

    void student::getdata(void)
    {
        cout<<"\n name ";
        cin>>name;
        cout<<"\n rollno. ";
        cin>>rollno;
        cout<<"\n Total marks out of 50:";
        cin>>total;
        perc=(float)total/500*100;
        }

        void student::putdata(void)
        {
            cout<<"Student data :\n";
            cout<<"\n Name :"<<name<<"\n RollNO :"<<rollno<<"\n Total : "<<total<<"\n Percentage : "<<perc;
        }

        int main()
        {
            int  n,loop;
            student std[10];

            cout<<"Total Students \n";cin>>n;

           for (loop=0;loop<n;loop++)
            {
                cout<<"\n Details Of Student:"<<loop+1<<":\n";

                std[loop].getdata();
        
                
            }
             for (loop=0;loop<n;loop++)
            {
                cout<<"\n Details Of Student: \n"<<loop+1<<":\n";

                std[loop].putdata();
        
                
            }
            

            return 0;

        }


