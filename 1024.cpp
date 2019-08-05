#include <iostream>
#include <math.h>


using namespace std;
string invert (string palavra);

int main()
{
    int linha;
    cin >> linha ;
    string palavra[linha];

    cin.ignore();
    for (int i = 0; i<linha;i++)
    {
           getline(cin, palavra[i]);
    }

    for (int i = 0; i<linha;i++)
    {
        cout  << invert(palavra[i]) << endl;
    }
}



string invert(string palavra)
{
string palavra2 ;

      for (int i= 0 ; i<palavra.length();i++)
        {

            if ((palavra[i]>=65 &&palavra[i]<=90)||(palavra[i]>=97 &&palavra[i]<=122))
            {
            palavra [i] += 3;
            }

        }
       palavra2 = palavra;


       for (int i=palavra.length()-1 ,j =0 ;j<palavra.length();i--,j++)
        {

            palavra2[j] = palavra[i];

        }



        for (int i=((palavra.length())/2) ; i<palavra.length();i++)
        {
            palavra2[i] -= 1;
        }

    return palavra2;
}

