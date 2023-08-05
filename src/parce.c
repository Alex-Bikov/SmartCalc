#include "calculate.h"

int parser(char *str,
           char *new_str) {  //делаем массив отделяя пробелами каждый элемент
  int check_brackets = 0;    // проверка скобок
  int error = 0;             // проверка ошибок
  int s_count = 0;           // счетчик старой строки
  int p_oper = 0;            // проверка операции подряд
  int n_count = 0;           // счетчик новой строки
  while (str[s_count] != '\0') {
    if (isdigit(str[s_count]) == 1 || str[s_count] == 'x') {
      while (isdigit(str[s_count]) == 1 || str[s_count] == '.' ||
             str[s_count] == 'x') {
        new_str[n_count] = str[s_count];
        n_count += 1;
        s_count += 1;
      }
      p_oper = 0;
    } else if (str[s_count] == 's' && str[s_count + 1] == 'i' &&
               str[s_count + 2] == 'n' && str[s_count + 3] == '(') {  // sin
      plus_index(new_str, "s (", &s_count, &n_count, &check_brackets, 4, 3, 1);

    } else if (str[s_count] == 'c' && str[s_count + 1] == 'o' &&
               str[s_count + 2] == 's' && str[s_count + 3] == '(') {  // cos
      plus_index(new_str, "c (", &s_count, &n_count, &check_brackets, 4, 3, 1);

    } else if (str[s_count] == 't' && str[s_count + 1] == 'a' &&
               str[s_count + 2] == 'n' && str[s_count + 3] == '(') {  // tan
      plus_index(new_str, "t (", &s_count, &n_count, &check_brackets, 4, 3, 1);

    } else if (str[s_count] == 'a' && str[s_count + 1] == 'c' &&
               str[s_count + 2] == 'o' && str[s_count + 3] == 's' &&
               str[s_count + 4] == '(') {
      plus_index(new_str, "a (", &s_count, &n_count, &check_brackets, 5, 3, 1);

    } else if (str[s_count] == 'a' && str[s_count + 1] == 's' &&
               str[s_count + 2] == 'i' && str[s_count + 3] == 'n' &&
               str[s_count + 4] == '(') {
      plus_index(new_str, "b (", &s_count, &n_count, &check_brackets, 5, 3, 1);

    } else if (str[s_count] == 'a' && str[s_count + 1] == 't' &&
               str[s_count + 2] == 'a' && str[s_count + 3] == 'n' &&
               str[s_count + 4] == '(') {
      plus_index(new_str, "z (", &s_count, &n_count, &check_brackets, 5, 3, 1);

    } else if (str[s_count] == 's' && str[s_count + 1] == 'q' &&
               str[s_count + 2] == 'r' && str[s_count + 3] == 't' &&
               str[s_count + 4] == '(') {
      plus_index(new_str, "q (", &s_count, &n_count, &check_brackets, 5, 3, 1);

    } else if (str[s_count] == 'l' && str[s_count + 1] == 'n' &&
               str[s_count + 2] == '(') {
      plus_index(new_str, "n (", &s_count, &n_count, &check_brackets, 4, 3, 1);

    } else if (str[s_count] == 'l' && str[s_count + 1] == 'o' &&
               str[s_count + 2] == 'g' && str[s_count + 3] == '(') {
      plus_index(new_str, "o (", &s_count, &n_count, &check_brackets, 4, 3, 1);

    } else if (str[s_count] == 'm' && str[s_count + 1] == 'o' &&
               str[s_count + 2] == 'd') {
      plus_index(new_str, "m", &s_count, &n_count, &check_brackets, 3, 1, 0);

    } else if (check_symbol(str[s_count]) == 1) {
      if (str[s_count] == '(') {
        p_oper = 0;
      }
      if ((p_oper == 1) ||
          (s_count == 0 && str[s_count] != '-' && str[s_count] != '(' &&
           check_symbol(str[s_count]) == 1)) {
        error = 1;
        break;
      }
      p_oper = 1;
      if (str[s_count] == '-') {
        if (s_count == 0 || check_symbol(str[s_count - 1] == 1) ||
            str[s_count - 1] == '(') {
          plus_index(new_str, "~ ", &s_count, &n_count, &check_brackets, 1, 2,
                     0);
          continue;
        }
      }
      if (str[s_count] == '(') {
        check_brackets++;
      } else if (str[s_count] == ')') {
        check_brackets--;
        p_oper = 0;
      }
      new_str[n_count] = str[s_count];
      n_count += 1;
      s_count += 1;
    } else if (str[s_count] == ' ') {
      s_count += 1;
    } else {
      error = 1;
      break;
    }
    new_str[n_count] = ' ';
    n_count++;
    if (check_brackets < 0) {
      error = 1;
      break;
    }
  }
  new_str[n_count] = '\0';
  if (check_brackets != 0) {
    error = 1;
  }
  return error;
}

int go(char *str, char *new_x, double *answer) {
  char new_str[1024] = {0};
  char str_polca[1024] = {0};
  int error = 0;
  error = parser(str, new_str);
  if (error == 0) {
    polca(new_str, str_polca);
    *answer = calculation(str_polca, new_x);
  }
  return error;
}
