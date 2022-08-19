#include<iostream>
using namespace std;

bool prime(int n)
{
    for (int i=2;i<=(n/2);i++)
    {
        if(n%i==0)
            return false;
        else
            return true;
    }
}

int main()
{
    int n,count=0;
    cout<<"Enter number : ";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(prime(i)==1)
            count+=1;
        else
            continue;
    }
    cout<<"The number of primes between 1 and "<<n<<" are : "<<count;
}