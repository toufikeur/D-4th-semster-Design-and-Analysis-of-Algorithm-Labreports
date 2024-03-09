#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool has_no_perfect_prime_factor(vector<int> &A)
{
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = i + 1; j < A.size(); j++)
        {
            if (A[i] % A[j] == 0 && A[j] % A[i] == 0)
            {
                return false;
            }
        }
    }

    return true;
}

int count_almost_prime_factors(int n)
{
    int count = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count += 1;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }

    if (n > 1)
    {
        count += 1;
    }

    return count;
}

int longest_subarray_with_k_almost_prime_factors(vector<int> &A, int K)
{
    int max_length = 0;
    vector<int> current_window;
    int current_count = 0;

    for (int i = 0; i < A.size(); i++)
    {
        current_window.push_back(A[i]);
        current_count += count_almost_prime_factors(A[i]);

        if (current_window.size() > K)
        {
            current_count -= count_almost_prime_factors(current_window[0]);
            current_window.erase(current_window.begin());
        }
        int l = current_window.size();

        if (current_count == K && has_no_perfect_prime_factor(current_window))
        {
            max_length = max(max_length, l);
        }
    }

    return max_length;
}

int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);
        for (int j = 0; j < N; j++)
        {
            cin >> A[j];
        }

        int max_length = longest_subarray_with_k_almost_prime_factors(A, K);

        cout << "Case " << i << ": " << max_length << endl;
    }

    return 0;
}
