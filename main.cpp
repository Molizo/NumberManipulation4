#include <iostream>

using namespace std;

int main()
{int d,n,x;
    cout<<"Introduceti numarul maxim:";
    cin>>x;
    for(n=1;n<=x;n++)
    {
        d=2;
        for(d=2;d<=n/2;d++)
        {
            if(n%d==1)
            {
                cout<<n<<"  ";
            }
        }
    }
    return 0;
}
