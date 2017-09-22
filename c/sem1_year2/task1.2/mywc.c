#include <stdio.h>
#include <unistd.h>

static const size_t WORD_COUNT_SIZE=10000;
static const size_t STRING_COUNT_SIZE=100;

int main() {
    int count_string = 0;
    int count_word = 0;
    int flag = 2;
    char letter ;

    scanf("%c", &letter);
    if (letter == ' '){
        flag = 0;
    }
    else {
        if (letter == '\n') {
            flag = 3;
            count_string++;
        }
        else {
            flag = 2;
        }
    }

    while(scanf("%c", &letter) == 1){
        if (flag == 3){
            if (letter == ' '){
                flag = 0;
            }
            else {
                if (letter == '\n') {
                    flag = 3;
                    count_string++;
                }
                else {
                    flag = 2;
                }
            }

        }
        else {
            if ((letter == '\n')) {
                if(flag == 2){
                    count_word++;
                }
                count_string++;
                flag = 3;
            }
            if ((letter == ' ') && (flag == 2)) {
                count_word++;
                flag = 0;
            }
            if ((letter != ' ') && (flag == 0)) {
                flag = 2;
            }
        }
        if (count_word > WORD_COUNT_SIZE || count_string > STRING_COUNT_SIZE) {
            printf("слишком большой файл");
            break;
        }
    }
    printf("Количество строк: %d\n", count_string);
    printf("Количество слов: %d\nПроверим совпадают ли значения с wc", count_word);

    execlp("/bin/sh", "sh", "-c", "wc -w -l <test" , NULL);
    return 0;
}//kessy

/*
Задача 2.1
Написать программу на С mywc. Программа должна читать со стандартного входа файл
(используйте перенаправление ввода/вывода С помощью угловых собок <>) и возвращать количество слов и строк в этом файле.
 */
