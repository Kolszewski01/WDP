import math
import random

b = (math.log(5 + math.sin(8)**2))**(1/6)

 with open("przykład.txt", "w+") as plik:
    plik.writelines(tekst)

 with open("przykład.txt", "r+") as plik:
     for x in plik:
         print(x, end="")
        
liczby = [random.randint(0, 30) for x in range(10)]


class CiagArytmetyczny:
    def __init__(self):
        self.a1 = None
        self.r = None
        self.n = None
        self.ciag = []

    def wyswietl_dane(self):
        for element in self.ciag:
            print(element)

    def pobierz_elementy(self):
        while True:
            wejscie = input("Podaj liczbę lub wpisz 'koniec'\n")
            if wejscie != 'koniec':
                self.ciag.append(int(wejscie))
            else:
                break

    def pobierz_parametry(self):
        self.a1 = int(input("Podaj pierwszy wyraz ciągu: "))
        self.r = int(input('Podaj różnicę ciągu arytmetycznego: '))
        self.n = int(input('Podaj ilość wyrazów ciągu arytmetycznego: '))

    def policz_sume(self):
        return sum(self.ciag)

    def policz_elementy(self):
        if (self.a1 is not None) & (self.r is not None) & (self.n is not None):
            licznik = 0
            suma = self.a1
            while licznik != self.n:
                self.ciag.append(suma)
                suma += self.r
                licznik += 1
                
def iloczyn_2(*ciag):
    if len(ciag) == 0:
        return 0
    else:
        iloczyn = 1
        for x in ciag:
            iloczyn *= x
    return iloczyn
  
lista = [key for key in slownik.keys() if slownik[key] == 'sztuki']

lower()	Zmienia wszystkie duże litery na małe w stringu
upper()	Zmienia wszystkie małe litery na duże w stringu
swapcase()	Odwraca rodzaj każdej litery – małe na duże, duże na małe
capitalize()	Zmienia pierwszą literę w ciągu na dużą
title()	Zwraca string – tytuł, w którym wszystkie wyrazy zaczynają się dużą literą, a reszta jest małymi lub są to znaki nieliterowe
join(seq)	Łączenie (konkatenacja) wyrazów w napisie seq w jeden napis, według separatora/stringu na jakim wywołujemy metodę
lstrip()	Usuwa białe znaki z początku napisu – zwraca kopię pozbawioną białych znaków od lewej strony
rstrip()	Usuwa białe znaki z końca napisu – zwraca kopię pozbawioną białych znaków od prawej strony
strip([chars])	Usuwa białe znaki lub znak podanny jako char z początku i końca napisu – wykonuje lstrip() i rstrip() na napisie.
max(string)	Zwraca literę znajdującą się najdalej w alfabecie od A
min(string)	Zwraca literę znajdującą się najbliżej w alfabecie od A
split(str="", num=string.count(str))	Dzieli łańcuch według separatora str (spacja jeśli nie podano) i zwraca podciągi jako listę lub podzieli na co najwyżej liczbę podciągów, jeśli podano num
splitlines( num=string.count('n'))	Dzieli cały łańcuch (lub wg zadanej liczby num) na osobne linie wg znaku nowej linii’\n’ i zwraca je jako tablicę
replace(old, new [, max])	Zamienia wszystkie wystąpienia ciagu old na ciąg new lub jeśli jest podane max – podmiana zostanie wykonana o wskazaną liczbę wystąpień
