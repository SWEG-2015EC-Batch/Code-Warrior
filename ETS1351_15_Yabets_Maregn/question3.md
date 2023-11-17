                analysis 
    input letter and letterCase
     process change the letter in to uppercase and lower case using
    assign the new letter as  upperCaseLetter and lowerCaseLetter
       output upperCaseLetter and lowerCaseLetter

       algorithm
    step 1= start
    step 2 = read letter
    step 3 = display the text "choose 1 for uppercase and 2 for lowercase"
    step 4 = read letterCase
    step 5 = uppercase == uppercase form of letter
     step 6 = lowercase == lowercase form of letter
    step 7 = if letterCase==1 go to step 10
    step 8 = else if letterCase== 2 go to step 11
    step 9 = else go to 12
     step 10 = display uppercase
     step 11 = display lowercase
     step 12 = display "make sure you entered single letter and you  chose between 1 and 2."
    step 13 = stop 

                               flowchart
                                               (start)
                                                  |
                                            / read letter /
                                                  |
                        |display the text "choose 1 for uppercase and 2 for lowercase" |
                                                  |
                                           /read letterCase/
                                                  |
                                    |uppercase == uppercase form of letter|
                                    |lowercase == lowercase form of letter|
                                                  |
                                                  /\
                                                /if   \ 
                                 ____false_/letterCase==1\__true___________________
                                 |           \           /                         |
                                 |             \      /                            |
                                 |                \ /                              | 
                                 |                                                 |
                                  /\                                               |
                                /if   \                                            |
                   ____false_/letterCase==2\__true_________                        |
                 |           \           /                 |                       |
                 |             \      /                    |                       |
                 |               \/                        |                       |
                 |                                         |                       |
                 |                                         |                       |
                 /display"make sure              /  display lowercase/             |
                 you entered single                        |               / display uppercase/
                 letter and you                            |                       |
                 chose between 1 and                       |                       |
                 2."/                                      |                       |
                        |                                  |                       |
                        |_______________________________ (stop) ___________________|
                                
