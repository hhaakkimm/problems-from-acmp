#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <map>
using namespace std;
 
const int MAXN = (int)(1e5 + 1e2);
 
struct point{
    double x, y;
};
 
point a, b, c, d, e;
 
double area(point a, point b, point c) {
    double ax = a.x - b.x, ay = a.y - b.y;
    double bx = c.x - b.x, by = c.y - b.y;
 
    return abs((ax * by - bx * ay) / 2.0);
}
            
int n, cnt;
 
int main() {
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);                 
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> e.x >> e.y;
        cin >> a.x >> a.y;
        cin >> b.x >> b.y;
        cin >> c.x >> c.y;
        cin >> d.x >> d.y;
        double s = area(a, b ,c) + area(a, c, d);
        double s1 = area(a, e, b);
        double s2 = area(b, e, c);
        double s3 = area(c, e, d);
        double s4 = area(d, e, a);
        if(s1 + s2 + s3 + s4 == s) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
