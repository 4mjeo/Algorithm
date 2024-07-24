#include <stdio.h>
int main() {
    char str[101], stack[101];
    while(1) {
        gets(str);
        if(str[0] == '.') break;
        int top = -1;
        for(int i=0;str[i] != '.';i++) {
            if(str[i] == '(' || str[i] == '[')
                stack[++top] = str[i];
            else if(str[i] == ')')
                if(top > -1 && stack[top] == '(')
                    --top;
                else {
                    top = -2;
                    break;
                } 
                else if(str[i] == ']')
                    if(top > -1 && stack[top] == '[')
                        --top;
                    else {
                        top = -2;
                        break;
                    }
        }
        puts(top == -1 ? "yes" : "no");
    }
    return 0;
}