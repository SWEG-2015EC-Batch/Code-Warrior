    input = number
          = character
    process = if char = a it means reverse
                   by assigning reverse = 0, while num!=0( new number  = num % 1 then reverse = (reverse * 10) + new_reverse 
                num = num / 10) reverse = result
                
     = if char = b it means counting number of digit
    while num != 0 ( new digit = num % 10 then new digit = 1 next digit = digit + new_digit finally num /= 10)
                      digit = result
     = if char = c it means sum of the each digits
        while num != 0 (new sum = num % 10 then sum += new_sum next num /= 10) 
                 result = sum  
     =if char = d it means multiplying the even digits of the number.
        while num != 0 (new multiple = num % 10 if (new multiple % 2 == 0) so multiple = multiplt * new multiple so num=num 10)
                     multiple = result        
     =if char = e it means inding the first and last digit of the number also thier sum.
         last_digit = num % 10 then if num <= 9 and num >= -9 (result = num) else while num > 10 then new Num = num % 10
        num = num / 10)  sumation = num + last digit 
                              result = num , last digit, sumation. 
     =if char = f it means swapping the first and last digit of the number.
         x = num, digit = 0 last Digit = num % 10 if num <= 9 and  num >= -9  result = num else( while num > 10 new number = 
         num % 10 then new number = 1 next   digit = digit + new number  num = num / 10)  v = 10 the power of digit
         c = x - (number * v + last_Digit)      a = (last_Digit * v) + c + number
                                 result = a
    =if  char = g Checking whether a number is palindrome or not.
     plaindrome means which remains the same with number is reversed. so to check it: -
       reverse = 0  palindrom = g if num == 0 ( reverse = 0 then result = reverse) else  while g != 0(new Number = g % 10
       reverse = (reverse * 10) + new Number g = g / 10)  if reverse = palindrom result = it is palindrome
                             else result = it is not palindrome
    =if char = h it means Finding the frequency of each digit in a given integer and display it in table format
         z = 0 while numm != 0( y = number % 10 then number = number / 10; z = z + 1)
        if y = 0( aa =aa + 1), y = 1( bb =bb + 1), y = 2(cc =cc + 1), y = 3(dd == dd +1), y = 4(e == ee +1),y = 5(ff == ff +1)
           y = 6(gg == gg +1), y = 7(hh == hh +1), y = 8(ii == ii +1), y = 9(jj == jj +1)
            result( 0 =  aa, 1 =  bb, 2 =  cc, 3 =  dd , 4 =  ee, 5 =  ff,6 =   gg,7 =   hh,8 =   ii,9 =   jj)

     =if char = i it means Check if a number is Armstrong or not
          armstrong number is a 3 digit number that equals the sum of its digits, each raised to a power.
                 
      
