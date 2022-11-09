#include<bits/stdc++.h>
using namespace std;

// to check if str1 is a substring of str2
int check_substring(string str1, string str2){
    int i,j;
    int len1 = str1.length();
    int len2 = str2.length();
 
    for (i = 0; i <= len2 - len1; i++){
        for (j = 0; j < len1; j++)
            if (str2[i + j] != str1[j])
                break;
 
        if (j == len1)
            return i;
    }
 
    return -1;
}

// check if string s is palindrome
bool isPalindrome(string s){
    long long l = s.length(), i;
    for(i=0; i<l/2; i++){
        if(s[i]!=s[l-i-1]) 
            return false;
    }
    return true;
}

// returns count of each character of string
map<char,int> Count(string s){
    map<char,int>mp;
    int i;
    int l=s.length();
    for(i=0; i<l; i++)
        mp[s[i]]++;
    return mp;
}

// to print all permutations of string
void permute(string a, int l, int r)
{
    // time complexity O(n*n!)
    if (l == r)
        cout<<a<<endl;
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permute(a, l+1, r);
            swap(a[l], a[i]);
        }
    }
}

// to find length of longest unique substring
int longestUniqueSubsttr(string str)
{
    int n = str.size();
    const int NO_OF_CHARS = 256;
    int res = 0;
    vector<int> lastIndex(NO_OF_CHARS, -1);
    int i = 0;
    for (int j = 0; j < n; j++) {
        i = max(i, lastIndex[str[j]] + 1);
        res = max(res, j - i + 1);
        lastIndex[str[j]] = j;
    }
    return res;
}

// substring consisting of all the characters of given string and having a minimum length
string findSubString(string str)
{
    int n = str.length();

    if (n <= 1)
        return str;

    int dist_count = 0;
    bool visited[MAX_CHARS] = { false };
    for (int i = 0; i < n; i++)
        if (visited[str[i]] == false)
            visited[str[i]] = true, dist_count++;

    int start = 0, start_index = -1, min_len = INT_MAX;

    int count = 0;
    int curr_count[MAX_CHARS] = { 0 };
    for (int j = 0; j < n; j++) {
        curr_count[str[j]]++;

        if (curr_count[str[j]] == 1)
            count++;

        if (count == dist_count) {
   
            while (curr_count[str[start]] > 1) {
                if (curr_count[str[start]] > 1)
                    curr_count[str[start]]--;
                start++;
            }

            int len_window = j - start + 1;
            if (min_len > len_window) {
                min_len = len_window;
                start_index = start;
            }
        }
    }

    return str.substr(start_index, min_len);
}