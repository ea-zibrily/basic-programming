include <iostream>
using namespace std;

int main() {
  int x,i,j,k,z,ct, n[100];

  cout<<"Bilangan Sempurna\nBerikan range bilangan : ";
  cin>>x;
  for(i=1;i<=x;i++){
    for(j=1,k=0,z=0,ct=0;j<i/2+1;j++){
      if(i%j==0){
        z+=j;
        n[ct]=j;
        ct++;
      }
    }
    if(z==i){
      while(k<ct){
        cout<<n[k];
        k++;
        if(k!=ct)
          cout<<"+";
        else
          cout<<"";
      }
    cout<<"="<<z<<endl;
    }
  }
}