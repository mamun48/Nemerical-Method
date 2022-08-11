#include <bits/stdc++.h>
using namespace std;
class Simpson
{
private:
    double a, b, n;

public:
    Simpson(double a, double b, double n)
    {
        this->a = a;
        this->b = b;
        this->n = n;
    }
    double function(double x)
    {
        return 1 / (1 + x * x);
    }
    double solve()
    {
        double h = (b - a) / n;
        double ans = 0;
        ans = function(a) + function(b);
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0)
            {
                ans += 2 * function(a + i * h);
            }
            else
            {
                ans += 4 * function(a + i * h);
            }
        }
        ans *= h / 3;
        return ans;
    }
};

int main()
{
    double a, b;
    cin >> a >> b;
    double n;
    cin >> n;
    Simpson simpson(a, b, n);
    cout << simpson.solve();
}