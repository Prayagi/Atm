#include <iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"Enter amount";
    cin>>a;
   int n2000,n1000,n500,n200,n100,n50,n20,n10,n5,n2,n1;
     n2000=n1000=n500=n200=n100=n50=n20=n10=n5=n2=n1=0;
     while (a>=2000)
     {
         n2000=n2000+1;
         a=a-2000;
     }
     while (a>=1000)
     {
         n1000=n1000+1;
         a=a-1000;
     }
     while (a>=500)
     {
         n500=n500+1;
         a=a-500;
     }
      while (a>=200)
     {
         n200=n200+1;
         a=a-200;
     }
     while (a>=100)
     {
         n100=n100+1;
         a=a-100;
     }
     while (a>=50)
     {
         n50=n50+1;
         a=a-50;
     }
      while (a>=20)
     {
         n20=n20+1;
         a=a-20;
     }
     while (a>=10)
     {
         n10=n10+1;
         a=a-10;
     }
     while (a>=20)
     {
         n20=n20+1;
         a=a-20;
     }
      while (a>=5)
     {
         n5=n5+1;
         a=a-5;
     }
      while (a>=2)
     {
         n2=n2+1;
         a=a-2;
     }
      while (a>=1)
     {
         n1=n1+1;
         a=a-1;
     }
     cout<<"number of 2000 notes:"<<n2000<<endl;
     cout<<"number of 1000 notes:"<<n1000<<endl;
     cout<<"number of 500 notes:"<<n500<<endl;
     cout<<"number of 200 notes:"<<n200<<endl;
    cout<<"number of 100 notes:"<<n100<<endl;
    cout<<"number of 50 notes:"<<n50<<endl;
    cout<<"number of 20 notes:"<<n20<<endl;
    cout<<"number of 10 notes:"<<n10<<endl;
    cout<<"number of 5 notes:"<<n5<<endl;
    cout<<"number of 2 notes:"<<n2<<endl;
    cout<<"number of 1 notes:"<<n1<<endl;

}
