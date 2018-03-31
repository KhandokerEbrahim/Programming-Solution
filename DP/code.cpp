#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0; i<n; i++)
    {

        cin >>a[i];
        b[i] =a[i];
    }
    sort(b,b+n);
    int e=a[n-1];

    int i,j=0;

    for( j= 0 ; j <n ; j++)
    {

        if(b[j]==e)
        {
            break;

        }

    }

    int x=n-j;

     x--;
     i=n-2;

    while(x--)
    {
         //cout  <<i <<endl;
        for(int p=0; p<n; p++)
        {
            if(p==i )
            {
   //cout <<"YES"<<endl;
                cout << a[i] <<" "<<a[i]<<" ";
                a[i+1]=a[i];
                 p++;
            }

            else
            {
                cout <<a[p]<<" ";

            }
           // i--;

        }
        i--;
        cout <<endl;
    }
    for(i=0;i<n;i++)
    {
          cout <<b[i] <<" ";
    }
    cout <<endl;
}

