    input = number
          = character
    process = if char = a it means reverse
                   by assigning reverse = 0
                  while num!=0(
                  new number  = num % 10;
                  reverse = (reverse * 10) + new_reverse;
                  num = num / 10;)
              if char = b it means counting number of digit
                   while num != 0
                   ( int new digit = num % 10;
                   new digit = 1;
                    digit = digit + new_digit;
                     num /= 10;)  
              if char = c it means sum of the each digits
                   while num != 0
                    ( int new_sum = num % 10;
                   sum += new_sum;
                      num /= 10;)
                      
                      
