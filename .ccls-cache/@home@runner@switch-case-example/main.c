#include <stdio.h>


// palindrom function
int palindrom() {
  int number, original, reverse = 0, reminder;
  printf("Enter the number: ");
  scanf("%d", &number);
  // printf("%d", number);
  original = number;
  printf("\n");
  while (number != 0) {
    reminder = number % 10;
    reverse = reverse * 10 + reminder;
    number = number / 10;
  }

  if (original == reverse) {
    printf("Number is palindrom. Number = %d", reverse);
  } else {
    printf("Number is not palindrom. Number = %d", original);
  }
}

// armstrong function
int armstrong() {
  int number, original, sum = 0, reminder;
  printf("Enter the number: ");
  scanf("%d", &number);
  original = number;

  while (number != 0) {
    reminder = number % 10;
    sum = sum + (reminder * reminder * reminder);
    number = number / 10;
  }
  if (original == sum) {
    printf("Number is armstrong. Number = %d", sum);
  } else {
    printf("Number is not armstrong. Number = %d", sum);
  }
}

// reverse function
int reverse() {
  int number, reverse = 0, reminder;
  printf("Enter the number: ");
  scanf("%d", &number);

  while (number != 0) {
    reminder = number % 10;
    reverse = reverse * 10 + reminder;
    number = number / 10;
  }

  printf("Reverse Number = %d", reverse);
}

// sum of digits
int sum() {
  int number, sum = 0, reminder;
  printf("Enter the number: ");
  scanf("%d", &number);
  while (number != 0) {
    reminder = number % 10;
    sum += reminder;
    number = number / 10;
  }
  printf("Sum of digits = %d", sum);
}

int checkLeapYear() {
  int year;
  printf("Enter year:");
  scanf("%d", &year);
  if (year % 400 == 0) {
    printf("%d is leap year.\n", year);
  } else if (year % 100 == 0) {
    printf("%d is not a leap year.\n", year);
  } else if (year % 4 == 0) {
    printf("%d is leap year.\n", year);
  } else {
    printf("%d is not a leap year.\n", year);
  }
}

char vowelOrnot() {
  int lowerCase, upperCase;
  char c;
  printf("Enter alphabets: ");
  scanf("%c", &c);
  lowerCase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
  upperCase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

  if (lowerCase || upperCase) {
    printf("%c is Vowel.", c);
  } else {
    printf("%c is not vowel.", c);
  }
}

int main(void) {
  int x;
  printf("What do you want to do? \n");
  printf("\n");
  printf(" 1 for Palindrom\n 2 for Armstrong\n 3 for Reverse\n 4 for Sum of "
         "digits\n 5 for check leap year\n 6 for check vowel or not\n");
  printf("\n");
  printf("Enter your choice:");
  scanf("%d", &x);
  printf("\n");
  if (x == 1) {
    printf("You choose palindrom.\n");
  }
  if (x == 2) {
    printf("You choose armstrong.\n");
  }
  if (x == 3) {
    printf("You choose reverse.\n");
  }
  if (x == 4) {
    printf("You choose sum of digits.\n");
  }
  if (x == 5) {
    printf("You choose check leap year.\n");
  }
  if (x == 6) {
    printf("You choose Program check vowel or not.\n");
  }

  printf("\n");
  switch (x) {
  case 1:
    palindrom();
    break;

  case 2:
    armstrong();
    break;

  case 3:
    reverse();
    break;

  case 4:
    sum();
    break;

  case 5:
    checkLeapYear();
    break;

  case 6:
    vowelOrnot();
    break;

  default:
    printf("Input option is not available.");
  }
  return 0;
}