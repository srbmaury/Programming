#include <bits/stdc++.h>     
using namespace std;
// function to generate random numbers in range [1-10] :
int randomize(){   
    return (rand() % 10)+1; 
}
char randomchar(){
  char A = 'a' , B = 'z';
  return (char)(rand() % (B-A+1)) + A;
}
int main (){
  srand(time(NULL));
  vector<int> T(1);
  generate(T.begin(), T.end(), randomize);
  T[0]+=10;
  cout<<T[0]<<'\n';
  while(T[0]--){

    vector<int> vect(1);
    generate(vect.begin(), vect.end(), randomize);
    int n=vect[0];
    cout<<vect[0]<<' ';
    // if(vect.size()>1) cout<<(vect[1] % n) + 1;    
    cout<<'\n';
    
    vector<char>v(n);
    generate(v.begin(), v.end(), randomchar);
    for (int i=0; i<v.size(); i++)
      // cout<<v[i]<<' ';
    if(v[i]%10<3) cout<<0;
    else if(v[i]%10>7) cout<<1;
    else cout<<"?";
    cout<<'\n';
  }
  return 0;
}
