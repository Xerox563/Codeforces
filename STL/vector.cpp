// // #include<bits/stdc++.h>
// // using namespace std;
// // int main() {
// //    vector<int> v= {1,2,3,4,5,6};
// //    vector<int>::iterator it;
// //    for(auto it = v.begin();it!=v.end();it++) {
// //      cout<<(*it)<<" ";
// //    }
// //     return 0;
// // }

// // /* Iterators -> nothing but just a pointer to an element with in range of element..
// // Dereferencing -> to get the value at which currently iterator is pointing..(*it)
// // it->begin ->points to first element
// // it->end -> points to next of last element.

// //                                                                  */
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<pair<int, int>> v;
//     vector<int> nums = {1, 2, 3, 4, 5};
//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = i; j < v.size(); j++)
//         {
//             if (abs(i - j) <= min(i, j))
//             {
//                 v.push_back(make_pair(i, j));
//             }
//         }
//     }
//     vector<int> ans;
//     for (int i = 0; i < v.size(); i++)
//     {
//         ans.push_back(v[i].first ^ v[i].second);
//     }
//     int answer = *max_element(ans.begin(), ans.end());
//     cout << answer << endl;
//     return 0;
// }
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int findMaximumXOR(vector<int> &nums)
{
  // int len = nums.size();
  // int answ = 0;

  // for (int i = 0; i < len; ++i)
  // {
  //   for (int j = i + 1; j < len; ++j)
  //   {
  //     if (abs(nums[i] - nums[j]) <= min(nums[i], nums[j]))
  //     {
  //      answ = max(answ,nums[i] ^ nums[j]);
  //     }
  //   }
  // }

 
  // return answ;


}

int main()
{
 

  vector<int> nums2 = {10, 100};
  cout << findMaximumXOR(nums2) << endl; // Output: 0

  vector<int> nums3 = {5, 6, 25, 30};
  cout << findMaximumXOR(nums3) << endl; // Output: 7

  return 0;
}
