#include <iostream>
#include <math.h>

using namespace std;

void exo1 ()
{
    cout<<"hello world";
}




void exo3 ()
{
    for (unsigned i=0; i<10; i=i+1)
        cout <<i<<"\t";
}




void exo4 ()
{
    int compteur=1;
    for (unsigned i=0; i<200; i=i+1)
    {
        if (compteur<10)
       {

            cout<<i<<"\t";
            compteur++;
       }
        else {

          cout<<i<<endl;
           compteur=1;
        }

        }
}






void exo5 ()
{
    int N;
    cout<<"veuillez saisir N"<<endl;
    cin>>N;
    for (int i=0; i<N; i=i+1)
    {
      cout<<i<<"\t"<<endl;
    }
}

         int main()
            {
                exo5();
            }

