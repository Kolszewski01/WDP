
#include <iostream>
#include <vector>

using namespace std;


void wypisz(int x)
{
    cout << x;
}

vector<int> VITO_1(vector<int>tab)
{
    vector<int>wynik;

    for (int i = 0; i < tab.size(); i++)
    {
      
        for (int j = 0; j < tab.size(); j++)
        {
            int z = tab[i] - tab[j];
            wynik.push_back(z);
        }
    }
    for (int i = 0; i < wynik.size(); i++)
    { 
        if (wynik[i] < 0)
        {
        wynik[i] *= -1;
        }

    }
    int a = sqrt(wynik.size());
    wynik.push_back(a);
  
    return wynik;

}

vector<int> VITO_2(vector<int>tab)
{
    int last = tab.back();

    tab.erase(tab.end() - 1);

    vector<int>kon;

    for (int i = 0; i < tab.size() / last; i++)
    {
        int s = 0;
   

       if(i==0)
       { 
        
            for (int j = i * last; j < last; j++)
            {       
                    s = s+ tab[j];
            }
        kon.push_back(s);
       }
       if (i > 0)
       {
           for (int j = i * last; j < i * last+last ; j++)
           {
               s = s + tab[j];
           }
       kon.push_back(s);
       }
    }
    return kon;
}

int VITO_3(vector<int>baza, vector<int>obl)
{
    int x = obl[0];
    int index = 0;

    for (int i = 0; i < obl.size(); i++)
    {
        if (obl[i] < x)
        {
            x = obl[i];
            index = i;
        }
    }
    int wynik = baza[index];

    return wynik;
}


int main()
{

    vector<int>a = {7,4,2,5,9};

    vector<int>v1=VITO_1(a);

    vector<int>Z=VITO_2(v1);

    int C = VITO_3(a, Z);

    wypisz(C);

}
