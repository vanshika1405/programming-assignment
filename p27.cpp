#include <bits/stdc++.h>
using namespace std;
void print_mirror(int n) 
{
   int temp = 1, temp2 = 1;
   for (int i = 0; i < n; i++) 
   {
      for (int j = n - 1; j > i; j--) 
      {
         cout << " ";
      }
      for (int k = 1; k <= temp; k++) 
      {
         cout << abs(k - temp2);
      }
      temp += 2;
      temp2++;
      cout << "\n";
    }
}
int main() 
{
   int n = 4;
   print_mirror(n);
   return 0;
}
