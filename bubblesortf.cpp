#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubblesort(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
                swap(&a[i],&a[j]);

        }
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main()
{
    int n;
    cout<<"enter value of n:";
    cin>>n;
    int i,a[n];
    cout<<"Enter values in array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubblesort(a,n);
}
