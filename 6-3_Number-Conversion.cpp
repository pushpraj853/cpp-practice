#include<bits/stdc++.h>
using namespace std;

// --------1) bniary to decimal----
// int main(){
//  int bin, deci = 0;
//  cin >> bin;
//  int i=0;
//  while(bin>0){
//   int last = bin%10;
//   deci = deci + last*pow(2,i);
//   bin = bin/10;
//   i++;
//  }
//  cout<<deci<<endl;
// }


// ------2)Octal to decimal-----
// int main(){
//   int octal, deci = 0;
//   cin>>octal;
//   int i = 0;
//   while(octal){
//     int last = octal%10;
//     deci = deci + last*pow(8, i);
//     octal = octal/10;
//     i++;
//   }
//   cout<<deci<<endl;
// }

// ----- 3)Hexdecimal to decimal-----
// int main(){
//   string hex;
//   cin>> hex;
//   int deci = 0, x = 1;
//   int size = hex.size();
//   for (int i = size-1; i>=0; i--)
//   {
//     if(hex[i] >= '0' && hex[i] <= '9')
//       deci = deci + x*(hex[i] - '0');
//     else if(hex[i] >= 'A' && hex[i] <= 'F')
//       deci = deci + x*(hex[i] - 'A' + 10);
//     x *= 16;
//   }
//   cout<<deci<<endl; 
// }


// ------4)Deciaml to binary--------
// int main(){
//   int deci;
//   int bin[64], i =0;
//   cin>>deci;
//   while(deci){
//     bin[i] = deci%2;
//     i++;
//     deci = deci/2;
//   }
//   for (int j = i-1; j >= 0; j--)
//   {
//     cout<<bin[j];
//   }
//   return 0;
// }


// ------5)Decimal to octal-----
// int main(){
//   int deci;
//   int oct[64], i =0;
//   cin>>deci;
//   while(deci){
//     oct[i] = deci%8;
//     i++;
//     deci = deci/8;
//   }
//   for (int j = i-1; j >= 0; j--)
//   {
//     cout<<oct[j];
//   }
//   return 0;
// }

// ------6)deciaml to hexadecimal-----
// int main(){
//   int deci;
//   cin>>deci;
//   char hex[20], i = 0;
//   while (deci>0)
//   {
//     int rem = deci%16;
//     if(rem >= 10 && rem <= 15)
//       hex[i] = char('A' + rem-10);
//     else
//       hex[i] = rem+48;
//     deci = deci/16;
//     i++;
//   }
//   for (int j =i-1; j >= 0; j--)
//   {
//     cout<<hex[j];
//   }
// }