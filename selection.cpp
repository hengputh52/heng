#include<iostream>
using namespace std;

void selectionSort(int array[])
{
    for(int i=0;i<50;i++)
    {
        int min_position=i;
        for(int j=i+1;j<50;j++)
        {
            if(array[j]<array[min_position])
            {
                min_position=j;
            }
        }
        int temp=array[i];
        array[i]=array[min_position];
        array[min_position]=temp;

    }
}
int main()
{
    int array[]={23, 76, 89, 12, 45, 67, 90, 54, 32, 19,
68, 73, 41, 56, 99, 4, 25, 85, 63, 11,
38, 49, 82, 16, 77, 33, 95, 57, 13, 6,
72, 28, 40, 91, 8, 22, 84, 31, 97, 5,
60, 46, 27, 71, 9, 66, 50, 21, 75, 14};
    cout<<"before selection sort"<<endl;
    for(int i=0;i<50;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<"\n\n"<<"after selection sort"<<endl;
    selectionSort(array);
    for(int i=0;i<50;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}