#include<iostream>
using namespace std;

void bubble(int array[])
{
    for(int i=0;i<50;i++)
    {
        for(int j=0;j< 50-i;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp= array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
int main()
{
    int array[]={23, 76, 89, 12, 45, 67, 90, 54, 32, 19,
68, 73, 41, 56, 99, 4, 25, 85, 63, 11,
38, 49, 82, 16, 77, 33, 95, 57, 13, 6,
72, 28, 40, 91, 8, 22, 84, 31, 97, 5,
60, 46, 27, 71, 9, 66, 50, 21, 75, 14};
    cout<<"before bubble sorting"<<endl;
    for(int i=0;i<50;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<"\n\n"<<"after bubble sorting"<<endl;
    bubble(array);
    for(int i=0;i<50;i++)
    {
        cout<<array[i]<<" ";
    }
}