#include <stdio.h>
#include <stdlib.h>
int regex_func(char regex[100],char input[100]);

int main()
{

    char regex[100];
    char input[100];
    scanf("%s",regex);
    scanf("%s", input);

    printf("%s\n",regex);
    printf("%s\n", input);

    regex_func(regex, input);

    return 0;
}

int regex_func(char regex[100],char input[100]){ //make regex function

    int num = 0; //variable for counting the length of input[100].

    for (int i = 0; i < 100; i++){
        if (input[i] == "\0"){
            num = i;
            break;
        }
    } // Find the null in array using 'for loop'.
    int len_input = num; // length of input equals to variable 'num'.

    for (int num1 = 0; num1+len_input < 100;num++){ //Find same pattern of input in regex using 'for loop'.
            int count = num1; //variable using for whether it reaches at the end of length of input.
            for (int num2 = 0; num2 < len_input; num2++){
                if (regex[count] != input[num2]) // During for loop, if we found the incorrect component, break for loop.
                    break;

                if (count == len_input){ //During for loop, if all component was correct, it print the pattern.
                    printf("%s\n", input );

                }

                count++; //plus 1 for count because regex[count] == input[num2]

            }


    }


return 0;
}
