#include "calculate.h"

void push_stack(Stack **head, char symbol, int pr,
                char *new_str) {  // добавляем в стек
  Stack *tmp = (Stack *)malloc(sizeof(Stack));
  tmp->c = symbol;
  tmp->priority = pr;
  if (new_str != NULL) {
    strcpy(tmp->str, new_str);
  }
  tmp->next = (*head);
  (*head) = tmp;
}

char pop_stack(Stack **head) {  // удаляем из стека
  Stack *prev = NULL;
  char symbol;
  prev = (*head);
  symbol = prev->c;
  (*head) = (*head)->next;
  free(prev);
  return symbol;
}

double pop_stack_str(Stack **head) {  // удаляем из стека
  Stack *prev = NULL;
  prev = (*head);
  char new_str[1024];
  strcpy(new_str, prev->str);
  double x = atof(new_str);
  (*head) = (*head)->next;
  free(prev);
  return x;
}

int check_symbol(char y) {  // проверка символа, что это операция
  char x[] = "-+*/^()m";
  int flag = 0;
  for (int i = 0; x[i] != '\0'; i++) {
    if (y == x[i]) {
      flag = 1;
      break;
    }
  }
  return flag;
}

int check_priority(char y) {  // проверки приоритета операции
  int priority = -1;
  if (y == '+' || y == '-') {
    priority = LOW;
  } else if (y == '*' || y == '/' || y == 'm' || y == '~') {
    priority = AVARAGE;
  } else if (y == '^') {
    priority = HIGH;
  } else if (y == '(' || y == ')') {
    priority = VERY_HIGH;
  } else {
    priority = HIGH;
  }
  return priority;
}

void operation_binary(Stack **head, char *answer, char *l, double *number) {
  double z = pop_stack_str(head);
  double y = pop_stack_str(head);
  if (*l == '+') {
    *number = z + y;
  } else if (*l == '-') {
    *number = y - z;
  } else if (*l == '*') {
    *number = z * y;
  } else if (*l == '/') {
    *number = y / z;
  } else if (*l == '^') {
    *number = pow(y, z);
  } else if (*l == 'm') {
    *number = fmod(y, z);
  }
  sprintf(answer, "%lf", *number);
  push_stack(head, 0, 0, answer);
  memset(answer, 0, sizeof(*answer));
}

void operation_unary(Stack **head, char *answer, char *l, double *number) {
  double x = pop_stack_str(head);
  if (*l == '~') {
    *number = -x;
  } else if (*l == 's') {
    *number = sin(x);
  } else if (*l == 'c') {
    *number = cos(x);
  } else if (*l == 't') {
    *number = tan(x);
  } else if (*l == 'a') {
    *number = acos(x);
  } else if (*l == 'b') {
    *number = asin(x);
  } else if (*l == 'z') {
    *number = atan(x);
  } else if (*l == 'q') {
    *number = sqrt(x);
  } else if (*l == 'n') {
    *number = log(x);
  } else if (*l == 'o') {
    *number = log10(x);
  }
  sprintf(answer, "%lf", *number);
  push_stack(head, 0, 0, answer);
  memset(answer, 0, sizeof(*answer));
}

void plus_index(char *new_str, char *str, int *s_count, int *n_count,
                int *check_brackets, int x, int y, int z) {
  strcat(new_str, str);
  *s_count += x;
  *n_count += y;
  *check_brackets += z;
}