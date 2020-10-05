#include<string.h>

int comp1(int a, int b)
{
  if (a < b)
    return -1;
  else
    return 1;
}


int comp2(double a, double b)
{
  if (b - a < 0.0000000008)
    return -1;
  else
    return 1;
}

int comp3(const char* a, const char* b)
{
  // int i = 0;
  // while (a[i] == b[i])
  // {
  //   if (a[i] < b[i])
  //   {
  //     return -1;
  //   }
  //
  //   else if (a[i] > b[i])
  //     return 1;
  //
  //   i++;
  // }
  return strcmp(a, b);
}

int comp4(const char* a, const char* b)
{
  if (strlen(a) < strlen(b))
    return -1;
  else
    return 1;
}

int comp5(const char* a, const char* b)
{
  int cnt_1 = 0;
  int cnt_2 = 0;
  for (int i = 0; a[i] != '\0'; i++)
  {
    if (a[i] == ' ')
      cnt_1++;
  }

  for (int i = 0; b[i] != '\0'; i++)
  {
    if (b[i] == ' ')
      cnt_2++;
  }

  if (cnt_1 < cnt_2)
    return -1;
  else
    return 1;
}

int comp6(const Person& a, const Person& b)
{
  if (a.age < b.age)
    return -1;
  else
    return 1;
}
