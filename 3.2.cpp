#include <iostream>
using namespace std;
#include <conio.h>
#include <string.h>

int main()
{
      char string1 [] ="coco melon";

      cout<<"Merubah karakter ke huruf Kapital"<<endl;
      cout<<"--------------------------------"<<endl;
      cout<<"Huruf Kecil : "<<string1<<endl;

      strupr(string1);
      cout<<"Huruf Besar : "<<string1<<endl;
}
