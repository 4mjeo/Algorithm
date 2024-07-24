#include <stdio.h>
#include <string.h>
int main() {
  int arr[26]={0,};
  char c[100];

  scanf("%s",c);

  for (int i=0;i<strlen(c);i++) {
    arr[c[i]-'a']++;
  }
  for (int j=0;j<26;j++) {
    printf("%d ", arr[j]);
  }
  return 0;
}