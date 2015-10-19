#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
   string s, st, str;
   cin >> s >> st >> str;
   if (s == "vertebrado") {
      if (st == "ave") {
         if (str == "carnivoro") cout << "aguia\n";
         else if (str == "onivoro") cout << "pomba\n";
      }
      else if (st == "mamifero") {
         if (str == "onivoro") cout << "homem\n";
         else if (str == "herbivoro") cout << "vaca\n";
      }
   }
   else if (s == "invertebrado") {
      if (st == "inseto") {
         if (str == "hematofago") cout << "pulga\n";
         else if (str == "herbivoro") cout << "lagarta\n";
      }
      else if (st == "anelideo") {
         if (str == "hematofago" ) cout << "sanguessuga\n";
         else if (str == "onivoro") cout << "minhoca\n";
      }
   }
   return 0;
}
