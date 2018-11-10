#include <stdio.h>
// find the max of four integers.
int max_of_four(int a, int b, int c, int d);

int max_of_four(int a, int b, int c, int d) {
    // find the largest of four integers.
    int first = (a > b) ? (a) : (b);
    int second = (c > d) ? (c) : (d);
    int answer = (first > second) ? (first) : (second);
    
    return answer;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
