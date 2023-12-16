
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int num, reverse, digit, sum, multi, new_reverse, new_sum, new_digit, new_multi,
       last_digit, new_num, newnum, v, c, a, last_Digit, yyyyy, wwwww, zzzzz,
       y, z, aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, bbbb, cccc, xxxx, yyyy, zzzz,
       k, j, l, p, kk, jjjj, ll, pp, q, w, kkk, lll, ppp, jjj, g, numm, nummm, nnum, nnnum;
   char op;

   cout << "what do you want to do with the number" << endl
        << " type 'a' for reversing the number " << endl
        << " type 'b' for  counting the number of the digits." << endl
        << " type 'c' for adding the digits of the number. " << endl
        << " type 'd' for multiplying the even digits of the number. " << endl
        << " type 'e' for finding the first and last digit of the number also thier sum. " << endl
        << " type 'f' for swapping the first and last digit of the number. " << endl
        << " type 'g' Checking whether a number is palindrome or not. " << endl
        << " type 'h' for Finding the frequency of each digit in a given integer and display it in table format " << endl
        << " type 'i' for Checking if a number is Armstrong or not " << endl
        << " type 'j' for Checking if a number is strong or not " << endl
        << " type 'k' for Checking if a number is perfect or not " << endl;
   cin >> op;

   if (op == 'a')
   {
      cout << "Enter Number :- ";
      cin >> num;
      reverse = 0;

      if (num == 0)
      {
         cout << "0";
      }
      else
      {
         while (num != 0)
         {
            int new_reverse = num % 10;
            reverse = (reverse * 10) + new_reverse;
            num = num / 10;
         }
         cout << reverse;
      }
   }

   else if (op == 'b')
   {
      cout << "Enter Number :- ";
      cin >> num;
      digit = 0;

      if (num == 0)
      {
         cout << "1";
      }
      else
      {
         while (num != 0)
         {
            int new_digit = num % 10;
            new_digit = 1;
            digit += new_digit;
            num /= 10;
         }
         cout << digit;
      }
   }

   else if (op == 'c')
   {
      cout << "Enter Number :- ";
      cin >> num;
      sum = 0;

      if (num == 0)
      {
         cout << "0";
      }
      else
      {
         while (num != 0)
         {
            int new_sum = num % 10;
            sum += new_sum;
            num /= 10;
         }
         cout << sum;
      }
   }

   else if (op == 'd')
   {
      cout << "Enter Number :- ";
      cin >> num;
      multi = 1;
      if (num == 0)
      {
         cout << num;
      }
      else
      {
         while (num != 0)
         {
            new_multi = num % 10;
            if (new_multi % 2 == 0)
            {
               multi *= new_multi;
            }
            num = num / 10;
         }
         cout << multi;
      }
   }

   else if (op == 'e')
   {
      cout << "Enter Number :- ";
      cin >> num;
      last_digit = num % 10;
      if (num <= 9 && num >= -9)
      {
         cout << num;
      }
      else
      {
         while (num > 10)
         {
            int new_Num = num % 10;

            num = num / 10;
         }
         cout << num <<" is the first digit number. "<< endl
              << last_digit<<" is the last digit number. " << endl;
         cout << num + last_digit <<" is the sum of the first and last digit number. ";
      }
   }

   else if (op == 'f')
   {
      cout << "Enter Number :- ";
      cin >> num;
      const int x = num;
      digit = 0;
      last_Digit = num % 10;
      if (num <= 9 && num >= -9)
      {
         cout << num;
      }
      else
      {
         while (num > 10)
         {
            newnum = num % 10;
            newnum = 1;
            digit = digit + newnum;
            num /= 10;
         }
         v = pow(10, (digit));
         c = x - (num * v + last_Digit);
         a = (last_Digit * v) + c + num;
         cout << a;
      }
   }

   else if (op == 'g')
   {
      cout << "Enter Number :- ";
      cin >> g;
      reverse = 0;
      const int palindrom = g;
      if (num == 0)
      {
         reverse = 0;
         cout << "it is palindrome. ";
      }
      else
      {
         while (g != 0)
         {
            int newNum = g % 10;
            reverse = (reverse * 10) + newNum;
            g = g / 10;
         }
         if (reverse == palindrom)
         {
            cout << "it is palindrome. ";
         }
         else
         {
            cout << "it isn't palindrome.";
         }
      }
   }

   else if (op == 'h')
   {
      cout << "Enter Number :- ";
      cin >> numm;
      z = 0;
      while (numm != 0)
      {
         y = numm % 10;
         numm /= 10;
         z += 1;
         if (y == 0)
         {
            aa += 1;
         }
         else if (y == 1)
         {
            bb += 1;
         }
         else if (y == 2)
         {
            cc += 1;
         }
         else if (y == 3)
         {
            dd += 1;
         }
         else if (y == 4)
         {
            ee += 1;
         }
         else if (y == 5)
         {
            ff += 1;
         }
         else if (y == 6)
         {
            gg += 1;
         }
         else if (y == 7)
         {
            hh += 1;
         }

         else if (y == 8)
         {
            ii += 1;
         }
         else if (y == 9)
         {
            jj += 1;
         }
      }
      cout << "0 = " << aa << endl;
      cout << "1 = " << bb << endl;
      cout << "2 = " << cc << endl;
      cout << "3 = " << dd << endl;
      cout << "4 = " << ee << endl;
      cout << "5 = " << ff << endl;
      cout << "6 = " << gg << endl;
      cout << "7 = " << hh << endl;
      cout << "8 = " << ii << endl;
      cout << "9 = " << jj << endl;
   }

   else if (op == 'i')
   {
      cout << "Enter Number :- ";
      cin >> nummm;
      int wwww = nummm;
      c = 0;
      if (nummm < 100)
      {
         cout << nummm << " isn't 3 digit. ";
      }
      else if (nummm > 999)
      {
         cout << nummm << " isn't 3 digit. ";
      }

      else
      {
         while (nummm != 0)
         {
            bbbb = nummm % 10;
            cccc += 1;

            if (cccc == 1)
            {
               xxxx = bbbb;
            }
            else if (cccc == 2)
            {
               yyyy = bbbb;
            }
            else
            {
               zzzz = bbbb;
            }
            nummm /= 10;
         }
         int cal = (xxxx * xxxx * xxxx) + (yyyy * yyyy * yyyy) + (zzzz * zzzz * zzzz);
         cout << wwww << " = the entered number" << endl;
         cout << cal << " = the calculated number" << endl;
         if (wwww == cal)
         {
            cout << " since " << wwww << " = " << cal << " the number"
                 << " is armstrong. ";
         }
         else
         {
            cout << " since " << wwww << " != " << cal << " the number"
                 << " isn't armstrong. ";
         }
      }
   }

   else if (op == 'j')
   {
      cout << "Enter Number :- ";
      cin >> nnum;
      wwwww = 1;
      zzzzz = 0;

      const int vv = nnum;
      if (nnum == 0)
      {
         cout << "0";
      }
      else
      {
         while (nnum != 0)
         {
            yyyyy = nnum % 10;
            while (yyyyy != 1)
            {
               wwwww *= yyyyy;
               yyyyy -= 1;
            }
            zzzzz += wwwww;
            nnum /= 10;
            wwwww = 1;
         }
         if (zzzzz == vv)
         {
            cout << "number " << vv << " and sum of the factorial of the digits = " << zzzzz << " therefore it is strong.";
         }
         else
         {
            cout << "number " << vv << " and sum of the factorial of the digits = " << zzzzz << " therefore it isn't strong.";
         }
      }
   }
   else if (op == 'k')
   {
      cout << "Enter Number :- ";
      cin >> nnnum;
      const int qq = nnnum;
      if (nnnum == 0)
      {
         cout << "infinity, so it isn't perfect ";
      }
      else if (nnnum == 1)
      {
         cout << " 1, so it is perfect. ";
      }

      else if (nnnum != 0)
      {
         while (nnnum % 2 == 0)
         {
            nnnum /= 2;
            k += 1;
            kkk += nnnum;
            while (nnnum % 3 == 0)
            {
               nnnum /= 3;
               j += 1;
               jjj = jjj + nnnum - 4;
               while (nnnum % 5 == 0)
               {
                  nnnum /= 5;
                  l += 1;
                  lll = lll + nnnum - 6;
                  while (nnnum % 7 == 0)
                  {
                     nnnum /= 7;
                     p += 1;
                     ppp = ppp + nnnum - 8;
                  }
               }
            }
         }

         kk = pow(2, k);
         if (kk == 1)
         {
            kk = 0;
         }
         else if (kk != 1)
         {
            while (k != 1)
            {
               kk = kk + pow(2, (k - 1));
               k -= 1;
            }
         }

         jjjj = pow(3, j);
         if (jjjj == 1)
         {
            jjjj = 0;
         }
         else if (jjjj != 1)
         {
            while (j != 1)
            {
               jjjj = jjjj + pow(3, (j - 1));
               j -= 1;
            }
         }

         ll = pow(5, l);
         if (ll == 1)
         {
            ll = 0;
         }
         else if (ll != 1)
         {
            while (l != 1)
            {
               ll = ll + pow(5, (l - 1));
               l -= 1;
            }
         }
         pp = pow(7, p);
         if (pp == 1)
         {
            pp = 0;
         }
         else if (pp != 1)
         {
            while (p != 1)
            {
               pp = pp + pow(7, (p - 1));
               p -= 1;
            }
         }
         q = kk + ll + jjjj + pp + qq + kkk + lll + ppp + jjj + 1;
         w = q - qq;
         if (w == qq)
         {
            cout << qq << " is perfect number. ";
         }
         else
         {
            cout << qq << " is not perfect number. ";
         }
      }
      else
      {
         cout << nnnum << " is a prime number, so it is not perfect number. ";
      }
   }

   else
   {
      cout << "make sure to enter[a ,b, c ,d ,e ,f ,g ,h ,i ,j ,k]";
   }

   return 0;
}
