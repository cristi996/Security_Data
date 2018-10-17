#include <iostream>
#include<string.h>
#include<cmath>
using namespace std;

char cifrare(char mesaj[], int k)
{
    int i;

    if(k>0)
        for(i=0;i<strlen(mesaj);i++)
        {
           if(mesaj[i]+k<='Z')
                mesaj[i]=mesaj[i]+k;
            else
                mesaj[i]='A'+abs('Z'-mesaj[i]-k+1);
        }
    if(k<0)
        for(i=0;i<strlen(mesaj);i++)
        {
          if(mesaj[i]+k>='A')
                mesaj[i]=mesaj[i]+k;
            else
                mesaj[i]='Z'-abs('A'-mesaj[i]-k-1);
        }
        return mesaj[100];

}

int main()
{
    int i,k,caz;
    cout<<"1.Cifrare\n2.Descifrare\n";
    cin>>caz;
    char sir[100];
    cout<<"\nIntroduceti pasul: \n";
    cin>>k;
    cout<<endl<<"Introduceti sirul:\n";
    cin>>sir;
    for(i=0;i<strlen(sir);i++)
        sir[i]=toupper(sir[i]);
    if(caz==1)
        sir[100]=cifrare(sir,k);
    if(caz==2)
    {
      k=-k;
      sir[100]=cifrare(sir,k);
    }

    cout<<sir;
    return 0;
}



