// #include <bits/stdc++.h>
// using namespace std;

// // Function to calculate solved problems and total penalty
// pair<int, int> solve_problems(vector<int> &durations, int total_time)
// {
//     int penalty = 0, solved = 0, current_time = 0;

//     sort(durations.begin(), durations.end());

//     for (int i = 0; i < durations.size(); i++)
//     {
//         if (current_time + durations[i] <= total_time)
//         {
//             solved++;
//             current_time += durations[i];
//             penalty += current_time;
//         }
//         else
//         {
//             break;
//         }
//     }

//     return {solved, penalty};

// void solve()
// {
//     long long participants, problems, total_time;
//     cin >> participants >> problems >> total_time;

//     priority_queue<pair<pair<int, int>, int>> pq; // Max-heap: {{solved problems, penalty}, participant index}

//     for (int i = 0; i < participants; i++)
//     {
//         vector<int> durations;

//         for (int j = 0; j < problems; j++)
//         {
//             int duration;
//             cin >> duration;
//             durations.push_back(duration);
//         }

//         pair<int, int> result = solve_problems(durations, total_time);
//         pq.push({{result.first, -result.second}, i + 1}); // Use negative penalty to simulate a min-heap on penalty
//     }

//     int rank = 1;

//     while (!pq.empty())
//     {
//         int participant = pq.top().second;
//         pq.pop();

//         if (participant == 1)
//         {
//             cout << rank << endl;
//             break;
//         }

//         rank++;
//     }
// }

// int main()
// {
//     long long t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>

#define int long long

using namespace std;

bool compare(const pair<int, long long> &a, const pair<int, long long> &b)
{
    if (a.first != b.first)
    {
        return a.first > b.first;
    }
    return a.second < b.second;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, h;
        cin >> n >> m >> h;

        pair<int, long long> rudolf_score;
        int rudolf_rank = 1;

        for (int i = 0; i < n; i++)
        {
            vector<int> tasks(m);
            for (int j = 0; j < m; j++)
            {
                cin >> tasks[j];
            }
            sort(tasks.begin(), tasks.end());

            int task_count = 0;
            long long penalty = 0, time_spent = 0;

            for (int task_time : tasks)
            {
                if (time_spent + task_time > h)
                    break;
                time_spent += task_time;
                penalty += time_spent;
                task_count++;
            }

            pair<int, long long> current_score = {task_count, penalty};

            if (i == 0)
            {
                rudolf_score = current_score;
            }
            else if (compare(current_score, rudolf_score))
            {
                rudolf_rank++;
            }
        }

        cout << rudolf_rank << '\n';
    }

    return 0;
}
