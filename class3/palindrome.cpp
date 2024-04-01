#include <bits/stdc++.h>
using namespace std;
//this makes the string input faster or cin and cout fast kore 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main()
{
    // finding out the palindrome of the string
    optimize();
    // string s ;
    // cin>>s;
    // string temp;
    // temp = s;
    // reverse(temp.begin(), temp.end());
    // if (s == temp)
    // {
    //     cout << "Palindrome";
    // }
    // else
    // {
    //     cout << "Not palindrome";
    // }


    //normal string input shudu space chara element nite pare
    //"safayat hossain" -> safayat nibe
    // string s;
    // cin>> s;
    // cout<<s<<endl;

    //space soho string newar way
    // string s1;
    // getline(cin,s1);
    // cout<<s1<<endl;


    // int tc;
    // cin>>tc;
    // for(int t = 1 ;t <= tc;t++){
    //     string s;
    //     char c;
    //     cin>>c;
    //     getline(cin,s);
    //     s = c+s;
    //     cout<<"Case "<<t<<" "<<s<<endl;
    // }


    //sorting a string
    // string s = "deaceA";
    // sort(s.begin(),s.end());
    // cout<<s<<" "<<endl;

    //sorting in reverse order
    // sort(s.rbegin(),s.rend());
    // cout<<s<<" "<<endl;

    //making a string unique
    // string s ="aseegjdfasja";
    // sort(s.begin(),s.end());
    // int sz = unique(s.begin(),s.end())-s.begin();
    // for(int i=0;i<sz;i++){
    //     cout<<s[i];
    // }
    // cout<<endl;

    //max element and min element
    // string s ="aasefajfh";
    // cout<<*max_element(s.begin(),s.end());
    // cout<<endl;
    // cout<<*min_element(s.begin(),s.end());


    //erasing from the string
    // string s ="safayat";
    // s.erase(s.begin());//O(n)
    // cout<<s<<endl;
    // s.erase(s.end()-1);
    // cout<<s<<endl;

    // string s = "eeemon",t = "eemomo";
    // if(s<t){
    //     cout<<s<<"  is smallest";
    // }else{
    //     cout<<t<<"  is the smallest";
    // }

    // string s ="AsjfafB";
    // string t ="aafjkafasjfkahf";
    // if(s<t){
    //     cout<< s<<" is lexiographically smallest";
    // }
    // else{
    //     cout<<t<<" is smallest";
    // }

    // vector<string> v;
    // v.push_back("Safayat");
    // v.push_back("Hossain");
    // v.push_back("jake");
    // v.push_back("Nishan");
    // v.push_back("momo");
    // v.push_back("Prity");

    // //lexigraphical order to sort a string
    // sort(v.begin(),v.end());
    // for(auto p : v){
    //     cout<<p<<endl;
    // }
    // cout<<endl;
    
    
    // //reverse lexigraphical order ot reverse sort a string
    // sort(v.rbegin(),v.rend());
    // for(auto p : v){
    //     cout<<p<<endl;
    // }

    //removing a specific character from the string

    // string s ="adajhaaalkf";
    // s.erase(remove(s.begin(),s.end(),'a'),s.begin()+7);
    // cout<<s<<endl;
    // string s ="safayat";
    // cout<<s.back()<<endl;
    // s.pop_back();
    // cout<<s;

}