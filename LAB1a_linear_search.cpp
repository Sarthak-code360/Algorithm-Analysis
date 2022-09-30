#include<iostream>
using namespace std;

int main()
{
    int arr[100], arrSize, i, numToSearch, arrTemp[50], j=0, chk=0;

    cout<<"\nAim: - Program to understand the concept of linear search";
    cout<<"\nName: - SARTHAK MISHRA\n";
    
    cout<<"\nEnter the Size for Array Size: ";
    cin>>arrSize;

    cout<<"Enter "<<arrSize<<" Array Elements: ";
    
    for(i=0; i<arrSize; i++)
        cin>>arr[i];
    
    cout<<"\nEnter the Number to Search: ";
    cin>>numToSearch;

    for(i=0; i<arrSize; i++)
    {
        if(arr[i]==numToSearch)
        {
            arrTemp[j] = i;
            j++;
            chk++;
        }
    }

    if(chk>0)
    {
        cout<<"\nNumber Found at Index No. ";
        arrSize = chk;

        for(i=0; i<arrSize; i++)
            cout<<arrTemp[i]<<" \n";
    }
    else
        cout<<"\nNumber doesn't Found!\n";
    cout<<endl;
    return 0;
}