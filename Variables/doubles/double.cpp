#include <iostream>
#include <bits/stdc++.h>

int main(){
     // double (number including decemal)
     double tax = 1.094;
     double icing = 15.98;
     double strawberry = 16.22;
     int totalitemprice = icing + strawberry;
     double price = totalitemprice * tax;
     std::cout << "The price is: $" << price;

     return 0;
}