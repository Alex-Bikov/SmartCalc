#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LOWEST 5
#define LOW 2        // +-
#define AVARAGE 3    // */
#define HIGH 4       // ^
#define VERY_HIGH 1  // ( )

typedef struct Stack {
  char c;
  char str[256];
  int priority;
  struct Stack *next;
} Stack;

/// @brief Добавление в стек
/// @param Stack указатель на стек
/// @param str символ
/// @param int приоритет
/// @param str указатель массив дабл
void push_stack(Stack **head, char symbol, int pr, char *new_str);

/// @brief Удаление из стека
/// @param указатель на стек
/// @return возвращает символ
char pop_stack(Stack **head);

/// @brief Проверка символа на отношение к операции
/// @param Символ для проверки
/// @return Возвращает флаг
int check_symbol(char y);

/// @brief ПРоверка приоритета операции
/// @param Символ для проверки
/// @return Возвращает приоритет операции
int check_priority(char y);

/// @brief Функция для расчета выражения польской нотации
/// @param str указатель массив польской нотации
/// @param str значение х
/// @return возвращает ответ
double calculation(char *str, char *new_x);

/// @brief Функция для преобразования выражения в польскую нотацию
/// @param str указатель на массив выражения
/// @param str указатель на массив польской нотации
void polca(char *str, char *new_str);

/// @brief Функция проверки введнное выражения
/// @param str введенное выражение
/// @param str преобразованное выражение
/// @return Возвращает ошибку
int parser(char *str, char *new_str);

/// @brief Функция для управление алгоритмом
/// @param str указатель введенное выражение
/// @param str значение х, ответ выражения
/// @param double ответ выражения
/// @return возвращает значение ошибки
int go(char *str, char *new_x, double *answer);

/// @brief Работа с массивами(прибавление индекса)
/// @param str указатель нового массива
/// @param str указатель исходного массива
/// @param int счетчик прохождения по массиву исходному
/// @param int счетчик прохождения по массиву новому
/// @param int счетчик скобок
/// @param int сдвиг исходного счетчика
/// @param int сдвиг нового счетчика
/// @param int сдвиг счетчика скобок
void plus_index(char *new_str, char *str, int *s_count, int *n_count,
                int *check_brackets, int x, int y, int z);

/// @brief Функция для унарной операции
/// @param Stack указатель на стек, указатель ответа, операция для действия,
/// приоритет, число ответа
/// @param str указатель ответа
/// @param str операция для действия
/// @param double ответ числом
void operation_unary(Stack **head, char *answer, char *l, double *number);

/// @brief Функция для бинарной операции
/// @param Stack указатель на стек, указатель ответа, операция для действия,
/// приоритет, число ответа
/// @param str указатель ответа
/// @param str операция для действия
/// @param double ответ числом
void operation_binary(Stack **head, char *answer, char *l, double *number);
