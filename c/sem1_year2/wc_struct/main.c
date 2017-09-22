#include <stdio.h>
#include <unistd.h>

static const size_t WORD_COUNT_SIZE=10000;
static const size_t STRING_COUNT_SIZE=1000;

typedef struct lett {
    char prev;
    char curr;
}lett;


int main() {
    lett a;
    int count_string = 0;
    int count_word = 0;

    scanf("%c", &a.prev);
    if (a.prev == '\n') {
        count_string++;
    }

    while(scanf("%c", &a.curr) == 1){
        if ((a.curr == '\n')) {
            if ((a.prev != ' ') && (a.prev != '\n')) {
                count_word++;
            }
            count_string++;
        }
        else {
            if ((a.curr == ' ') && (a.prev != ' ')){
                count_word++;
            }
        }
         if (count_word > WORD_COUNT_SIZE || count_string > STRING_COUNT_SIZE) {
            printf("слишком большой файл");
            break;
         }
        a.prev = a.curr;
    }
    printf("Количество строк: %d\nКоличество слов: %d\nПроверим совпадают ли значения с wc:\n", count_string, count_word);

    execlp("/bin/sh", "sh", "-c", "wc -w -l <test" , NULL);
    return 0;
}//kessy

/*
Задача 2.1
Написать программу на С mywc. Программа должна читать со стандартного входа файл
(используйте перенаправление ввода/вывода С помощью угловых собок <>) и возвращать количество слов и строк в этом файле.
 */
