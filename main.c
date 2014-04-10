#include <stdio.h>


#define KEYS_NUM 12
#define SCALE_NOTES_NUM 7
#define CHORD_NOTES_NUM 3

char keys[KEYS_NUM] = {'C', 'd', 'D', 'e', 'E', 'F', 'g', 'G', 'a', 'A', 'b', 'B'};
int major_scale_pattern[SCALE_NOTES_NUM] = {0, 2, 4, 5, 7, 9, 11};
int major_chord_pattern1[CHORD_NOTES_NUM] = {0, 2, 4};
int major_chord_pattern4[CHORD_NOTES_NUM] = {3, 5, 0};
int major_chord_pattern5[CHORD_NOTES_NUM] = {4, 2, 1};

void print_usage(void)
{
}

int main(int argc, void* argv[])
{
   int i, j;
   char scale[SCALE_NOTES_NUM];
   char chord[CHORD_NOTES_NUM];

   //major scale started on each key
   for(i = 0; i < KEYS_NUM; i++){
       printf("%02d major scale: ", i);
       for(j = 0; j < SCALE_NOTES_NUM; j++){
           scale[j] = keys[(i + major_scale_pattern[j])%KEYS_NUM];
           printf("%c ", scale[j]);
       }
       printf("\n");

       printf("major chord 1: ");
       for(j = 0; j < CHORD_NOTES_NUM; j++){
           chord[j] = scale[major_chord_pattern1[j]];
           printf("%c ", chord[j]);
       }
       printf("\n");

       printf("major chord 4: ");
       for(j = 0; j < CHORD_NOTES_NUM; j++){
           chord[j] = scale[major_chord_pattern4[j]];
           printf("%c ", chord[j]);
       }
       printf("\n");

       printf("major chord 5: ");
       for(j = 0; j < CHORD_NOTES_NUM; j++){
           chord[j] = scale[major_chord_pattern5[j]];
           printf("%c ", chord[j]);
       }
       printf("\n");
       printf("\n");
   }

   return 0;

}
