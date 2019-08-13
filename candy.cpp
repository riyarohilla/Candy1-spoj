#include<iostream>

using namespace std;

int main()

{

    int n=1,i;

    while(n!=-1)

    {

        cin>>n;

        if(n!=-1)

        {

            int a[n],sum=0;

            for(i=0;i<n;i++)

            {

                cin>>a[i];

                sum+=a[i];

            }

            if(sum%n!=0)

                cout<<"-1"<<endl;

            else

            {

                sum=sum/n;

                int m=0;

                for(i=0;i<n;i++)

                {

                    if(a[i]<sum)

                        m=m+sum-a[i];



                }

                cout<<m<<endl;

            }

        }

    }

    return 0;

}
