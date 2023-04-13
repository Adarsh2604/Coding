/*###################################*****{ADARSH}*****################################*/
#include <bits/stdc++.h>
using namespace std;
int main()
{

    // // PAIRS IN  STL ------->
    // pair<int, int> p;
    // p = {1, 7};
    // cout << p.first << " " << p.second << endl;

    // pair<int, pair<int, int>> q;
    // q = {1, {2, 3}};
    // cout << q.first << " " << q.second.first << " " << q.second.second;







    // // VECTORS IN STL------>
    // vector<int> v;
    // v.push_back(7);
    // v.push_back(8);
    // v.push_back(7);
    // v.push_back(7);
    // v.push_back(7);
    // for (auto it : v)
    // {
    //     cout << it << " " << endl;
    // }
    // // cout<<v.size()<<endl;
    // v.erase(v.begin() + 1);
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }
    // vector<int> v1(2, 100);
    // for (auto it : v1)
    // {
    //     cout << it << " ";
    // }
    // //  v.insert(v.begin()+1,2,4);
    // // v.insert(v.begin()+1,4);

    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }
    // v.swap(v1);
    // v.pop_back();
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }
    // // v.clear();
    // cout << v.empty() << endl;







    // // LIST IN STL---------->
    // list<int> ls;
    // ls.push_back(2);
    // ls.push_back(9);
    // ls.push_front(3);
    // for (auto it : ls)
    // {
    //     cout << it << " ";
    // }






    // //  DEQUE IN STL------->
    // deque<int> dq;
    // dq.push_back(10);
    // dq.push_back(20);
    // dq.push_front(30);
    // dq.push_front(40);
    // dq.push_front(50);
    
    // cout<<"The elements in the deque are: ";
    // for (auto it : dq)
    //  {
    //      cout << it << " ";
    //  }

    
    // cout<<"The size of the deque is: "<<dq.size()<<endl;
    // cout<<"The first element in the deque: "<<dq.front()<<endl;
    // cout<<"Deleting the first element"<<endl;
    // dq.pop_front();
    //  for (auto it : dq)
    //  {
    //      cout << it << " ";
    //  }

    // cout<<"The last element of the deque: "<<dq.back()<<endl;
    // cout<<"Deleting the last element"<<endl;
    // dq.pop_back();
    //  for (auto it : dq)
    //  {
    //      cout << it << " ";
    //  }







    //  // STACK IN STL --------->
    //  stack<int>st;
    //  st.push(2);    
    //  st.push(8);
    //  st.push(9);
    //  st.push(7);
    //  st.pop();
    //  cout<<st.size()<<endl;
    // int b =st.size();

    // for (int i = 1; i <=b; i++)
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }   

    // while(!st.empty()){
    //     cout << st.top() << " ";
    //     st.pop();
    //     ct++;
    // }







// // QUEUE IN STL ----->
// queue<int>q;
// q.push(7);
// q.push(4);
// q.push(5);
// q.push(8);
// // q.pop();
// // cout<<q.back();
// q.back()+=4;
// // cout<<q.back()<<endl;
// // cout<<q.size();
// // cout<<q.front();
// int c =q.size();
// for (int i = 0; i <c; i++)
// {
//     /* code */
//     cout<<q.front()<<" ";
//     q.pop();

// }





// // PRIORITY QUEUE IN STL ------------>
// with greatest elements at the top------->
// priority_queue<int>pq;
// pq.push(1);
// pq.push(2);
// pq.push(3);
// pq.push(8);
// // cout<<pq.top()<<" ";
// // pq.pop();

// // cout<<pq.size()<<endl;
// int d =pq.size();

// for (int i = 0; i < d; i++)
// {
//      cout<<pq.top()<<" ";
//      pq.pop();
    
// }

// // PRIORITY  QUEUE WITH SMALLEST ELEMENTS AT THE TOP--------->
// priority_queue<int,vector<int>,greater<int>> pq1;
// pq1.push(4);
// pq1.push(5);
// pq1.push(7);
// pq1.push(8);
// pq1.pop();
// cout<<pq1.top()<<endl;
// cout<<pq1.size()<<endl;




// //SETS IN STL ----------->
// set<int>s;
// s.insert(1);
// s.insert(2);
// s.insert(3);

// s.insert(5);
// s.erase(5);

// auto it=s.find(2); 
// //s.count(x);---> gives the count of the number in the set....///////
// // if the element is there it will print 1 else 0...
// int count =s.count(7);
// // cout<<count;
// // for (auto it = s.begin(); it != s.end(); it++) {
// //     cout << * it << " ";
// //   }
// auto it1=s.find(2);
// auto it2=s.find(3);
// // s.erase(it1,it2);
// // for (auto it = s.begin(); it != s.end(); it++) {
// //     cout << * it << " ";
// //   }
//   auto it3 = s.lower_bound(2);
//   cout<<(*it3);
// //  auto it4 = s.lower_bound(2);
// //   cout<<(*it4);






// // UNORDERED SET IN STL ------->
// unordered_set<int> s;
// s.insert(1);
// s.insert(2);
// s.insert(28);
// s.insert(26);
// s.insert(27);
// if(s.find(1)!=s.end())
// cout<<"true"<<endl;
// // s.erase(2);
// cout<<s.size()<<endl;






// //MAPS IN STL----->
// map<int,int>mp;
// mp.insert({2,4});
// mp.insert({3,5});
// for(auto it:mp){
//     cout<<it.first<<" "<<it.second<<endl;

// }
// auto it = mp.find(3);





// SORTING IN STL----------------->
// int a[4]={123,8,48,9};

// // sort(a,a+4);
// //sorting from any position to any position.....
// // sort(a+2,a+4);
// sort(a, a+4,greater<int>());
// for (int  i = 0; i < 4; i++)
// {
//     cout<<a[i]<<" ";
// }
//  vector<int>v;
//  v.push_back(2);
//  v.push_back(1);
//  v.push_back(27);
//  v.push_back(22);
//  v.push_back(28);
// sort(v.begin(),v.end());
// //iteratorion process .......
// for(auto it :v){
//     cout<<it<<" ";
// }






// // COUNTING THE NUMBER OF 1's IN  BINARY ---------->
// int n = 6;
// 2 underscores are before the function---->
// cout<< __builtin_popcount(n);

// long long n =7674275427542;
// cout<<__builtin_popcountll(n);



// // PRINTING MAXIMUM ELEMENT IN AN ARRAY--------->
// int a[5]= {3 ,56,77,88,33};
// cout << *max_element(a, a + 5)<<endl;
// cout << *min_element(a, a + 5);







//PERMUTATIONS OF ANY NUMBER-----------> 
// string s="234";
// do{
//     cout<<s<<endl;

// }while(next_permutation(s.begin(),s.end()));

    return 0;
}