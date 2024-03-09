#include <iostream>
#include <vector>
using namespace std;

vector<long long> fib_values;

// Function to compute the P-bonacci series value for N
long long p_bonacci(int N, int P)
{
    if (N < P)
        return N;

    long long ans = 0;
    for (int i = 1; i <= P; i++)
    {
        ans += p_bonacci(N - i, P);
    }
    return ans;
}

// Function to find the caller and callee of the K-th recursive call
pair<long long, long long> find_caller_callee(int N, int P, long long K)
{
    if (K == 1)
    {
        return {N, N - 1};
    }

    if (N <= P)
    {
        if (K <= N)
        {
            return {N, K - 1};
        }
        else
        {
            return {LLONG_MIN, LLONG_MIN}; // Invalid
        }
    }

    if (K <= N - P + 1)
    {
        return {N, K - 1};
    }

    long long K_start = N - P + 1;
    long long prev_caller = N;
    long long prev_callee = K_start - 1;

    for (int i = 1; i <= P; i++)
    {
        long long next_caller = N - i;
        if (K_start + 1 <= K && K <= K_start + fib_values[i - 1])
        {
            long long next_callee = prev_caller - 1;
            return {next_caller, next_callee};
        }
        K_start += fib_values[i - 1];
        prev_caller = next_caller;
    }

    return {LLONG_MIN, LLONG_MIN}; // Invalid
}

int main()
{
    fib_values.push_back(1);
    fib_values.push_back(1);
    int T;
    cin >> T;
    for (int case_num = 1; case_num <= T; case_num++)
    {
        int N, P;
        long long K;
        cin >> N >> P >> K;
        for (int i = 2; i <= P; i++)
        {
            fib_values.push_back(p_bonacci(N - i, P));
        }
        pair<long long, long long> result = find_caller_callee(N, P, K);
        cout << "Case " << case_num << ": ";
        if (result.first == LLONG_MIN)
        {
            cout << "Invalid\n";
        }
        else
        {
            cout << result.first << " " << result.second << endl;
        }
    }
    return 0;
}
