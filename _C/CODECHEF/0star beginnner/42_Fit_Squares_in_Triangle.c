#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        int ans = 0;
        while (x > 2)
        {
            ans += (x - 2) / 2;
            x = x - 2;
        }
        printf("%d\n", ans);
    }
    return 0;
}
/*
Since the triangle is isosceles, the given base would also be equal to the height.
Now in the diagonal part, we would always need an extra length of 2 units in both height
and base of the triangle to accommodate a triangle. (The CF and AM segment of the triangle in the image.
The part that does not contribute to any square). In the remaining length of base, we can construct
length / 2 squares. Since each square is of 2 units, same would be the case of height,
there is no need to calculate that again.
So, for each level of given length we can construct “(length-2)/2” squares.
This gives us a base of “(length-2)” above it.
Continuing this process to get the no of squares for all available “length-2” height, we can calculate the squares.

For more effective way, we can use the formula of sum of AP n * ( n + 1 ) / 2, where n = length – 2
*/