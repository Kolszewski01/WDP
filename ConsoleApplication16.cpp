
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cstdlib>
#include <ctime>
#include <numeric>

using namespace std;

void wypisz(vector<string>tab)
{
    for (int i = 0; i < tab.size(); i++)
    {
        cout << tab[i] << " ";
    }
}

void wypisz(map<char, int>map)
{
    for (auto i : map)
    {
        cout << i.first << " " << i.second << endl;
    }
}

void wypisz(int a)
{
    cout << a;
}


bool czn(vector<int>tab, int x)
{
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] == x)
        {
            return true;
        }
    }
    return false;
}

bool czz(vector<int>tab, vector<int>bat)
{
    for (int i = 0; i < bat.size(); i++)
    {
        if (!czn(tab,bat[i]))
        {
            return false;
        }
    }
    return true;
}


int max(vector<int>tab)
{
    int chuj=0;

    for (int i = 0; i < tab.size(); i++)
    {
        if (chuj < tab[i])
        {
            chuj = tab[i];
        }
    }
    return chuj;
}

int min(vector<int>tab)
{
    int chuj = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        if (chuj > tab[i])
        {
            chuj = tab[i];
        }
    }
    return chuj;
}

vector<int>unikalnosc(vector<int>tab)
{
    vector<int>kutas;

    for (int i = 0; i < tab.size(); i++)
    {
        if (!czn(kutas, tab[i]))
        {
            kutas.push_back(tab[i]);
        }
    }
    return kutas;
}

bool CNK(map<int, int>map, int x)
{
    for (auto i : map)
    {
        if (i.first == x)
        {
            return true;
        }
    }
    return false;
}

map<int, int>ILE(vector<int>tab)
{
    map<int, int>x;

    for (int i = 0; i < tab.size(); i++)
    {
        if (!CNK(x,tab[i]))
        {
            x.insert({ tab[i],1 });
        }
        else
        {
            x[tab[i]]++;
        }
    }
    return x;   
}

vector<int>podzielnosc(vector<int>tab,int b)
{
    vector<int>x = unikalnosc(tab);
    vector<int>huj;

    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] % b == 0)
        {
            huj.push_back(x[i]);
        }

    }
    return huj;

}


vector<int>generuj(int hm, int max, int min)
{
    vector<int>xd;

    for (int i = 0; i <hm; i++)
    {
        xd.push_back(rand() % (max - min) + min);
    }
    return xd;
}




int xd(vector<int>tab)
{
  
    vector<int>ha;

    for (int i = 0; i < tab.size(); i++)
    {
        int wynik = 0;

        for (int j = i; j < tab.size(); j++)
        {
            wynik += tab[j];
            ha.push_back(wynik);
        }
    }
    int a = max(ha);

    return a;

}

int NNCLP(vector<int>tab)
{
   
    int w;

    vector<int>chuj;
    int x = 0;
    for (int i = 0; i < tab.size(); i++)
    { 
   
        if (tab[i] % 2 == 0)
        {
            
            x++;
            
        }
        else
        {
            chuj.push_back(x);
        }
        
    }
  
    w = max(chuj);
    return w;
}


int suma(vector<int>tab,int a, int b)
{
    int wynik = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] % a == 0 && tab[i]<b)
        {
            wynik += tab[i];
        }
    }
    return wynik;
}

int potega(int a, int b)
{
    int w = a;
    for (int i = 1; i < b; i++)
    {
        a = a * w;
    }
    return a;
}


bool czypierwsza(int n) 
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

vector<int>lp(vector<int>tab,int x)
{
    vector<int>vec;
    

    for (int i = 0; vec.size()<x; i++)
    {
        if (czypierwsza(tab[i]))
        {
            vec.push_back(tab[i]);
            
        }
    }
    return vec;
}



map<char, int>ileliter(string a)
{
    map<char, int>x;

    for (int i = 0; i < a.size(); i++)
    {
        x[a[i]]++;
    }
    return x;
}




int main()
{
    
    int x;
    cin >> x;
    vector<string>xd;
    for (int i = 0; i < x+1; i++)
    {
        string p;
        getline(cin, p);
        xd.push_back(p);

    }  

  string s = accumulate(xd.begin(), xd.end(), string{},[](string& s, const string& piece) -> decltype(auto) { return s += piece; });
    
   wypisz(ileliter(s));


  
   /*
    int x = 64;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (x == potega(i, j))
            {
                cout << "y= " << i << ", n= " << j << endl;
                  
            }
        }
        
    }
   
    
    vector<int>x;
    for (int i = 100; i < 1001; i++)
    {
        x.push_back(i);
    }
 
    int g = 0;
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (i != j && i!=k && j!=k)
                {
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << endl;
                    
                    g++;
                }
            }
        }
    }

    cout << " takich liczb jest " << g;

       */

}



