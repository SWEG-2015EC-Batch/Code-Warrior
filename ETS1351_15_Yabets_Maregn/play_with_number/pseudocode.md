    step 1 = start
    step 2 = read number
    step 3 = print what do you want to do with the number
           type 'a' for reversing the number 
           type 'b' for  counting the number of the digits.
           type 'c' for adding the digits of the number. " 
           type 'd' for multiplying the even digits of the number.
           type 'e' for finding the first and last digit of the number also thier sum.
           type 'f' for swapping the first and last digit of the number.
           type 'g' Checking whether a number is palindrome or not.
           type 'h' for Finding the frequency of each digit in a given integer and display it in table format .
           type 'i' for Checking if a number is Armstrong or not.
           type 'j' for Checking if a number is strong or not.
           type 'k' for Checking if a number is perfect or not.
    step 4 = read charcter
    step 5 = if character = 'a' go to step 6
            else go to step 14
    step 6 = reverse = 0
    step 7 = if number number = 0 go to step 8
              else go to step 9
    step 8 = result = 0
    step 9 = new reverse = num % 10
    step 10 = reverse = (reverse * 10) + new_reverse
    step 11 = num = num / 10
    step 12 = if num !=0 go to step 9
            = else go to step 13
    step 13 = result = reverse
    step 14 = if character = 'b' go to step 15
              else go to step 24
    step 15 = digit = 0;
    step 16 = if number =0 go to step 15
            = else goto step 16
    step 17 = result = 1
    step 18 = new_digit = num % 10
    step 19 = new_digit = 1
    step 20 = digit += new_digit
    step 21 = num /= 10
    step 22 = if number != 0 go to step 18
              else go to step 23
    step 23 = result = digit
    step 24 = if character = 'c' goto step 20
              else goto step 33
    step 25 = sum = 0
    step 26 = if number = 0 go to step 27
              else goto step 28
    step 27 = result = 0
    step 28 = new_sum = num % 10
    step 29 = sum += new_sum
    step 30 = num /= 10
    step 31 = if num !=0 goto step 28
              else goto step 32
    step 32= return = sum
    step 33 = if charcter = 'd' goto step 34
              else = goto step 43
    step 34 = multi = 1
    step 35 = if number = 0 goto step 36
              else goto step 37
    step 36 = result = number
    step 37 = new_multi = num % 10
    step 38 =  if new_multi %2=0 goto step 39
              else goto step 40
    step 39 = multi *= new_multi
    step 40 = num = num / 10
    step 41 =  if num != 0 go to step 37
              else goto stop 42
    step 42 = result = multi
    step 43 = if character = 'e' goto step 44
              else go to step 51
    step 44 = last_digit = num % 10;
    step 45 = if num <= 9 && num >= -9  goto step 46
              else goto step 47
    step 46 = result = num
    step 47 =  new_Num = num % 10
    step 48 = num = num / 10
    step 49 = if num >10 go to step 47
              else goto step 50
    step 50 = result = "last digit = "last_digit
                         "first digit = "num
                          "sum = "num + last_digit.
    step 51 = 

