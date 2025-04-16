1) Գրեք ֆունկցիա, որը հաշվում է տողի երկարությունը առանց strlen ֆունկցիայի օգտագործման:
int string_length(const char *str);


2) Գրեք ֆունկցիա, որը շրջում է տողը։ Օրինակ՝ "hello" → "olleh":
void reverse_string(char *str);


3) Գրեք ֆունկցիա, որը համեմատում է երկու տող և վերադարձնում է 0, եթե դրանք հավասար են, և -1 կամ 1, եթե ոչ՝ առանց strcmp ֆունկցիայի օգտագործման:
int compare_strings(const char *str1, const char *str2);


4) Գրեք ֆունկցիա, որը հաշվում է տողի մեջ եղած ձայնավոր և բաղաձայն տառերի քանակը և տպում է էկրանին:
void count_vowels_and_consonants(const char *str, int *vowels, int *consonants);


5) Գրեք ֆունկցիա, որը գտնում է տողի մեջ նշված սիմվոլի առաջին հանդիպումը և վերադարձնում է դրա ինդեքսը։ Եթե սիմվոլը չկա, վերադարձնել -1։
int find_character(const char *str, char c);


6) Գրեք ֆունկցիա, որը փոխարինում է տողի մեջ բոլոր հանդիպած նշված սիմվոլը մեկ այլ սիմվոլով:
void replace_character(char *str, char old_char, char new_char);
