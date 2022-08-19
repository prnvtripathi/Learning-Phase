#include<iostream>
#include<cmath>
using namespace std;

void find_sqrt(double n);
double sqrt(double i, double j, double n);

int main()
{
    double n;
    cout<<"Enter number "<<endl;
    cin>>n;
    find_sqrt(n);
}

void find_sqrt(double n)
{
    double root, i=1;
    for(i;i<n;i++)
    {
        if(i*i==n)
        {
            root = i;
            break;
        }
        else if (i*i>n)
            root = sqrt(i-1, i, n);
    }
    cout<<"The square root of given number is : "<<root<<endl;
}

double sqrt(double i, double j, double n)
{
    double mid = (i+j)/2;
    double mul = mid*mid;

    if ((mul==n) || (abs(mul-n)< 0.00001))
        return mid;
    else if (mul<n)
        return sqrt(mid, j, n);
    else
        return sqrt(i, mid, n);
}
