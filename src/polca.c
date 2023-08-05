#include "calculate.h"

void polca(char *str, char *new_str) {  // перевод выражения в польскую нотацию
  Stack *p = NULL;
  int n_count = 0;
  char *l = strtok(str, " ");
  while (l != NULL) {
    if (*l == ' ') {
      continue;
    }
    if (isdigit(l[0]) == 1 || *l == '.' || *l == 'x') {
      int l_count = 0;
      while (l[l_count] != '\0') {
        new_str[n_count] = l[l_count];
        n_count++;
        l_count++;
      }
      new_str[n_count] = ' ';
      n_count++;
    } else {
      int priority = check_priority(*l);
      if (p == NULL || *l == '(') {
        push_stack(&p, *l, priority, NULL);
      } else if (*l == ')') {
        while (p != NULL && (p->c != '(' || check_symbol(p->c) != 1)) {
          char symbol = pop_stack(&p);
          new_str[n_count] = symbol;
          new_str[n_count + 1] = ' ';
          n_count += 2;
        }
        if (p != NULL && p->c == '(') {
          pop_stack(&p);
        }
      } else {
        while (p != NULL &&
               (priority < p->priority || priority == p->priority)) {
          char symbol = pop_stack(&p);
          new_str[n_count] = symbol;
          new_str[n_count + 1] = ' ';
          n_count += 2;
        }
        push_stack(&p, *l, priority, NULL);
      }
    }
    l = strtok(NULL, " ");
  }
  while (p != NULL) {
    char symbol = pop_stack(&p);
    new_str[n_count] = symbol;
    new_str[n_count + 1] = ' ';
    n_count += 2;
  }
  new_str[n_count] = '\0';
}

double calculation(char *str, char *new_x) {
  Stack *p = NULL;
  char y[256];
  strcpy(y, str);
  double number = 0;
  char answer[256];
  char *l = strtok(y, " ");
  while (l != NULL) {
    if (l[0] == 'x') {
      push_stack(&p, 0, 0, new_x);
      l = strtok(NULL, " ");
      continue;
    }
    if (isdigit(l[0]) == 1) {
      push_stack(&p, 0, 0, l);
    } else {
      if (check_symbol(*l) == 1) {
        operation_binary(&p, answer, l, &number);
      } else {
        operation_unary(&p, answer, l, &number);
      }
    }
    l = strtok(NULL, " ");
  }
  pop_stack(&p);
  return number;
}