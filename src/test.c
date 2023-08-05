#include <check.h>

#include "calculate.h"

void run_tests(void);
Suite *suite_test(void);

START_TEST(test_1) {
  char test[] =
      "-cos(x)+ log(10) / tan(2) ^ sin(3) + (acos(x) - asin(x)) / atan(x) + "
      "sqrt(9) / ln(10)";
  char y[256];
  parser(test, y);
  ck_assert_int_eq(parser(test, y), 0);
}
END_TEST

START_TEST(test_2) {
  char test[] = "cos(x) + log(10)";
  double answer;
  go(test, "0.0", &answer);
  ck_assert_int_eq(go(test, "0.0", &answer), 0);
}
END_TEST

START_TEST(test_3) {
  char test[] =
      "-cos(x)+ log(10) / tan(2) ^ sin(3) + (acos(x) - asin(x)) / atan(x) * "
      "sqrt(9) / ln(10)";
  double answer = 0.0;
  ck_assert_int_eq(go(test, "0.0", &answer), 0);
}
END_TEST

START_TEST(test_4) {
  char test[] = "5mod2";
  double answer;
  go(test, "0.0", &answer);
  ck_assert_int_eq(go(test, "0.0", &answer), 0);
}
END_TEST

START_TEST(test_5) {
  char test[] =
      "-cos(x)+ log(10) / tan(2) ^ sin(3) + (acos(x) - asin(x)) / atan(x) * "
      "sqrt(9) / ln(10)";
  double answer = 0.0;
  ck_assert_int_eq(go(test, "0.0", &answer), 0);
}
END_TEST

START_TEST(test_6) {
  char test[] =
      "- cos((x)+ log(10) / tan(2) ^ sin(3) + (acos(x) - asin(x)) / atan(x) * "
      "sqrt(9) / ln(10)";
  double answer = 0.0;
  ck_assert_int_eq(go(test, "0.0", &answer), 1);
}
END_TEST

START_TEST(test_7) {
  char test[] = "2* /3";
  double answer = 0.0;
  ck_assert_int_eq(go(test, "0.0", &answer), 1);
}
END_TEST

START_TEST(test_8) {
  char test[] = "))2/3";
  double answer = 0.0;
  ck_assert_int_eq(go(test, "0.0", &answer), 1);
}
END_TEST

Suite *suite_test(void) {
  Suite *s;
  TCase *tc;
  s = suite_create("s21_SmartCalc");
  tc = tcase_create("test");

  tcase_add_test(tc, test_1);
  tcase_add_test(tc, test_2);
  tcase_add_test(tc, test_3);
  tcase_add_test(tc, test_4);
  tcase_add_test(tc, test_5);
  tcase_add_test(tc, test_6);
  tcase_add_test(tc, test_7);
  tcase_add_test(tc, test_8);

  suite_add_tcase(s, tc);
  return s;
}

int main(void) {
  run_tests();

  return 0;
}

void run_testcase(Suite *testcase) {
  static int counter_testcase = 1;

  if (counter_testcase > 1) putchar('\n');
  printf("%s%d%s", "CURRENT TEST: ", counter_testcase, "\n");
  counter_testcase++;

  SRunner *sr = srunner_create(testcase);

  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);

  srunner_free(sr);
}

void run_tests(void) {
  Suite *list_cases[] = {suite_test(), NULL};

  for (Suite **current_testcase = list_cases; *current_testcase != NULL;
       current_testcase++) {
    run_testcase(*current_testcase);
  }
}
