#include <bits/stdc++.h>     
using namespace std;

// function to generate random numbers in range [1-10] :
int randomize(){   
    return (rand() % 10)+1; 
}

int main (){
  srand(time(NULL));

  vector<int> T(1);
  generate(T.begin(), T.end(), randomize);

  cout<<T[0]<<'\n';
  while(T[0]--){

    vector<int> vect(1);
    generate(vect.begin(), vect.end(), randomize);
    int n=vect[0];
  
    cout<<n<<' ';
    if(vect.size()>1) cout<<(vect[1] % n) + 1;
    cout<<'\n';

    vector<int>v(n);
    generate(v.begin(), v.end(), randomize);
    for (int i=0; i<v.size(); i++)
    cout<<v[i]%10+1<<' ';
    cout<<'\n';
  }
  
  return 0;
}