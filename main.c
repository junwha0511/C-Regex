#include <stdio.h>
#include <stdlib.h>
int regex_func(char regex[100],char input[100]);

int main()
{

    char regex[100];
    char input[100];
    scanf("%s",regex);
    scanf("%s", input);


    int len_regex = 0; //variable for counting the length of input[100].
    int len_input = 0;

    for (; len_input < 100; len_input++){
        if (input[len_input] == '\0'){
            break;
        }
    } // Find the null in array using 'for loop'.

     for (; len_regex < 100; len_regex++){
        if (regex[len_regex] == '\0'){
            break;
        }
    } // Find the null in array using 'for loop'.


    printf("len_input: %d\n", len_input);
    printf("len_regex: %d\n", len_regex);

    for (int pivot = 0; pivot+len_regex <= len_input; pivot++){ //Find same pattern of input in regex using 'for loop'.
            printf("pivot value: %d\n", pivot);

            for (int compare_pivot = 0; compare_pivot < len_regex; compare_pivot++){
                printf("pivot value2: %d\n", pivot);


                if (compare_pivot == len_regex){ //During for loop, if all component was correct, it print the pattern.
                    printf("pivot value: %d compare_pivot value: %d\n", pivot, compare_pivot);
                    printf("%s\n", regex );

                }



                if (regex[compare_pivot] != input[pivot+compare_pivot]) // During for loop, if we found the incorrect component, break for loop.
                    printf("pivot value: %d compare_pivot value: %d\n", pivot, compare_pivot);
                    break;


            }


    }


    return 0;
}
