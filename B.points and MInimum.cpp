#include <iostream>
#include <vector>
#include <algorithm>

using

    namespace

    std;

struct

    Point
{

    int x, y;

    bool

    operator<(const Point &other) const
    {
        return x < other.x || (x == other.x && y < other.y);
    }
};

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(2 * N);
        for (int i = 0; i < 2 * N; i++)
        {
            cin >> A[i];
        }

        // Sort the points in ascending order.
        vector<Point> points(N);
        for (int i = 0; i < N; i++)
        {
            points[i] = {A[2 * i], A[2 * i + 1]};
        }
        sort(points.begin(), points.end());

        // Compute the minimum path length.
        int min_path_length = 0;
        for (int i = 0; i < N - 1; i++)
        {
            min_path_length += abs(points[i].x - points[i + 1].x) + abs(points[i].y - points[i + 1].y);
        }

        // Print the minimum path length.
        cout << min_path_length << endl;

        // Print the coordinates of the points in the path.
        for (int i = 0; i < N; i++)
        {
            cout << points[i].x << " " << points[i].y << endl;
        }
    }

    return 0;
}