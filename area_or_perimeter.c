/*
You are given the length and width of a 4-sided polygon. The polygon can either be a rectangle or a square.
If it is a square, return its area. If it is a rectangle, return its perimeter.
*/

// Ternary Operators
// Condition if l equals w, l*w (area), else 2*(l+w) (perimeter)

#include <stdio.h>

int area_or_perimeter(int l , int w) {
  return (l==w) ? l*w : 2*(l+w); 
}

int main(void) {
    int ans = area_or_perimeter(12, 12);
    printf("%d", ans);
    
    return 0;
}