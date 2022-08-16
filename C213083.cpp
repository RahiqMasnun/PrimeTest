#include<bits/stdc++.h>
using namespace std;

int prime(int x)
{
    if(x==0||x==1)
    return 0;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        return 0;
    }
    return 1;

}


int main()
{
    int x;
    ifstream in("input.txt");
    ofstream out("output.txt");
    while(in>>x)
    {
        if(prime(x)==1)
            out<<x<<" is prime"<<'\n';
        else
            out<<x<<" not prime"<<'\n';
    }

    in.close();
    out.close();
    return 0;
}
