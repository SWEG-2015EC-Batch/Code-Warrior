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
    step 51 = if character = 'f' goto step 52
              else goto step 66
    step 52 = x = num
    step 53 = digit = 0
    step 54 =  last_Digit = num % 10
    step 55 = if num <= 9 && num >= -9 go to step 56
              else goto step 57
    step 56 = result = num
    step 57 = newnum = num % 10
    step 58 =  newnum = 1
    step 59 = digit = digit + newnum
    step 60 = num /= 10
    step 61 = if num>10 goto step 57
              else goto step 62
    step 62 = v = pow(10, (digit))
    step 63 = c = x - (num * v + last_Digit)
    step 64 = a = (last_Digit * v) + c + num
    step 65 = result = a
    step 66 = if character = 'g' goto step 67
              else goto step 78
    step 67 = reverse = 0
    step 68 = constant palindrom = g
    step 69 = if num = 0 goto step 70
              else goto step 71
    step 70 = result = "it is palindrome"
    step 71 =  newNum = g % 10
    step 72 =  reverse = (reverse * 10) + newNum
    step 73 =  g = g / 10
    step 74 = if num!=0 goto step 71
              else goto step 75
    step 75 = if reverse = palindrome goto step 76
              else go step 77
    step 76 = result = "it is palindrome"
    step 77 = result = "it is not palindrome"
    step 78 = if character = 'h' goto step 79
            else goto step 105
    step 79 = z ==aa==bb==cc==dd==ee==ff==gg==hh==ii==jj= 0
    step 80 = y = numm % 10
    step 81 =  numm /= 10
    step 82 = z += 1
    step 83 = if y=0 goto step 84
               else go to step 85
    step 84 = aa += 1
    step 85 = if y=1 goto step 86
             else go to step 87
    step 86 = bb +=1
    step 87= if y=2 goto step 88
               else go to step 89
    step 88 = cc +=1
    step 89 = if y=3 goto step 90
               else go to step 91
    step 90 = dd +=1
    step 91 = if y=4 goto step 92
               else go to step 93
    step 92= ee +=1
    step 93 = if y=5 goto step 94
            else go to step 95
    step 94 = ff +=1
    step 95 = if y=6 goto step 96
               else go to step 97
    step 96 =  gg+=1
    step 97 = if y=7 goto step 98
               else go to step 99
    step 98 = hh +=1
    step 99 = if y=8 goto step 100
               else go to step 101
    step 100 = ii +=1
    step 101 = if y=9 goto step 102
               else go to step 103
    step 102 = jj +=1
    step 103 = if num!=0 goto step 80
              else goto step 104
    step 104 = result = "0 = "aa
                        "1 = "bb
                        "2 = "cc
                        "3 = "dd
                        "4 = "ee
                        "5 = "ff
                        "6 = "gg
                        "7 = "hh
                        "8 = "ii
                        "9 = "jj
      
    step 105 = if character = 'i' goto step 106
               else goto step 124
    step 106 = constant wwww = num, c = 0
    step 107 = if num <100 gotostep 108
               else goto step 109
    step 108 = result = "number isn't 3 digit. "
    step 109 = if num >999 goto step 110
               else goto step 111
    step 110 = result = "number isn't 3 digit. "
    step 111 =  bbbb = nummm % 10
    step 112 = cccc += 1
    step 113 = if cccc=1 goto step 114
               else goto step 115
    step 114 = xxxx = bbbb
    step 115 = if cccc=2 goto step 116
               else goto step 117
    step 116 = yyyy=bbbb
    step 117 =  zzzz=bbbb
    step 118 = num/10
    step 119 = if num !=0 goto step 111
               else goto step 120
    step 120 = cal = (xxxx * xxxx * xxxx) + (yyyy * yyyy * yyyy) + (zzzz * zzzz * zzzz)
    step 121 = if wwww = num goto step 122
               else goto step 123
    step 122 = result = "the number is armstrong"
    step 123 = result = "the number isn't armstrong"
    step 124 = if charcter = 'j' goto step 125
               else = goto step 140
    step 125 =  wwwww = 1, zzzzz = 0
    step 126 = const int vv = num
    step 127 = if num = 0 goto step 128
            else goto step 129
    step 128 = result = = 0
    step 129 =  yyyyy = nnum % 10
    step 130 =  wwwww *= yyyyy
    step 131 =  yyyyy -= 1
    step 132 = if yyyyy!=1 goto step 130
               else goto step 133
    step 133 = zzzzz += wwwww
    step 134 =  wwwww = 1
    step 135 = num /= 10
    step 136 = if num !=0 goto step 129
               else goto step 137
    step 137 = if zzzzz = vv goto step 138
            else goto step 139
    step 138 = result= "it is strong"
    step 139 = result = "it isnot strong"
    step 140 = if character = 'k' goto step 141
               else goto step 195
    step 141 = int qq = num
    step 142 = if num = 0 goto step 143
               else goto step 144
    step 143 = result =  "infinity, so it isn't perfect "
    step 144 = if num = 1 goto step 145
               else = goto step 146
    step 145 = result = " 1, so it is perfect. "
    step 146 =  num /= 2
    step 147 = k += 1
    step 148 = kkk += num
    step 149 = num /= 3
    step 150 =  j += 1
    step 151 =  jjj = jjj + num - 4
    step 152 = num /= 5
    step 153 =  l += 1;
    step 154 =  lll = lll + num - 6
    step 155 =  num /= 7
    step 156 = p += 1
    step 157 = ppp = ppp + num - 8
    step 158 = if num % 7 == 0 go to step 155
                else goto step 158
    step 159 = if num%5 ==o goto step 152
                else goto step 160
    step 160 = if num%3=0goto step 149
               else gotostep 161
    step 161 = if num % 2=0 goto step 146
               else goto step 162
    step 162 = if num !0 goto step 146
               else goto step 163
    step 163 =  kk = pow 2^k
    step 164 = if kk = 1 goto step 165
               else goto step 166
    step 165 = kk=0
    step 165 = kk = kk + pow(2, (k - 1))
    step 166 = k -= 1
    step 167 =if  k!==1 goto step 165
               else go to step 168
    step 168 = if kk!=1 goto step 165
               else goto step 169
    step 169 =  jj = pow 3^jjjj
    step 170 = if jj = 1 goto step 171
               else goto step 172
    step 171 = jj=0
    step 172 = jj = jj+ pow(2, (jjjj - 1))
    step 173 = jjjj -= 1
    step 174 =if  jjjj!==1 goto step 171
               else go to step 175
    step 175 = if jj!=1 goto step 171
               else goto step 176
    step 176 =  ll = pow 2^l
    step 177 = if ll= 1 goto step 178
               else goto step 179
    step 178 = ll=0
    step 179 = ll = ll + pow(2, (l - 1))
    step 180 = l -= 1
    step 181 =if  l!==1 goto step 178
               else go to step 182
    step 182 = if kk!=1 goto step 178
               else goto step 183
    step 183 =  pp = pow 2^p
    step 184 = if oo = 1 goto step 185
               else goto step 186
    step 185 = pp=0
    step 186 = pp = pp + pow(2, (p - 1))
    step 187 = p -= 1
    step 188 =if  p!==1 goto step 185
               else go to step 185
    step 189 = if kk!=1 goto step 185
               else goto step 190
    step 190 = q = kk + ll + jjjj + pp + qq + kkk + lll + ppp + jjj + 1
    step 191 =  w = q - qq
    step 192 = if w=qq goto step 193
               else goto step 194
    step 193 = result = "number is perfect"
    step 194 = result = "number isn't perfect"
    step 195 = result = "male sure to enter among [a,b,c,d,e,f,g,h,i,j,k] "
    step 196 = print result
    step 197 = stop


