#include<iostream>

using namespace std;
int main()
{
    int n;
    cout<<"enter any number";
    cin>>n;
    int m=n;
    int i=1,temp=1,sum=0;
    while(i<=3)
    {
        temp=n%10;
        n=n/10;
        sum=sum+(temp*temp*temp);
         i++;
    }
    if(sum==m)
    {
        cout<<"arstrong";
    }
    else
        cout<<"not arstong";
    return 0;
}
