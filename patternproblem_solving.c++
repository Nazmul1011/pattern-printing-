#include<iostream>
using namespace std;
void pattern1(void);
void pattern2(void);
void pattern3(void);
void pattern4(void);
int main()
{
    pattern1();
    pattern2();
    pattern3();
    pattern4();
    return 0;

}
void pattern1(void)
{
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++)
    {
        for (int j=1;j<=col;j++)
        {
            if (i==3)
            {
                cout<<"*";
            }
            else if (j==1||j==col)
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void pattern2(void)
{
     int row,col;
    cin>>row>>col;
     for(int i=1;i<=row;i++)
    {
        for (int j=1;j<=col;j++)
        {
            if (i==1||i==3||i==5)
            {
                cout<<"*";
            }
            else if (j==1)
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

}
void pattern3()
{
      int row,col;
    cin>>row>>col;
     for(int i=1;i<=row;i++)
    {
        for (int j=1;j<=col;j++)
        {
            if (i==5)
            {
                cout<<"*";
            }
            else if (j==1)
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void pattern4()
{
      int row,col;
    cin>>row>>col;
     for(int i=1;i<=row;i++)
    {
        for (int j=1;j<=col;j++)
        {
            if (i==5)
            {
                cout<<"*";
            }
            else if (j==1)
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}