#include <bits/stdc++.h>

using namespace std;

struct point
{
    int x;
    int y;
};

int det(int a, int b, int c, int d)
{
    return a*d - b*c;
}

double areaTriangle(point A, point B, point C)
{
    int a = B.x - A.x;
    int b = B.y - A.y;
    int c = C.x - A.x;
    int d = C.y - A.y;
    return 0.5*fabs(det(a,b,c,d));
}

int main()
{
    point A, B, C;
    cin >> A.x >> A.y;
    cin >> B.x >> B.y;
    cin >> C.x >> C.y;

    cout.precision (2);
    cout << fixed << areaTriangle(A, B, C);
}
