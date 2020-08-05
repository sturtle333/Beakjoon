#include<iostream>
using namespace std;
int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int M, N, min=0, sum=0; cin >> M >> N;
  if(M==1){
    if(N==1){
      cout << -1;
      return 0;
    }
  M=2;
  }
  for(int i=M; i<=N; i++){
    int cnt = 0;
    for(int j=2; j<i; j++){
      if(i%j==0){
        cnt+=1;
      }
    }
    if(cnt==0){
      sum+=i;
      if(min==0) min = i;
    }
  }
  if(min!=0) cout << sum << '\n' << min;
  else cout << -1;
  return 0;
}