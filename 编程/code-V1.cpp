#include<bits/stdc++.h>
using namespace std;
#define float double
string yigejiexianzhudeheihe="   _________________\n  |      ____       |\nA-|-----|____|------|-B\n  |_________________|\n";
string lianggejiexianzhuchuanliandeheihe="   _________________\n  |  ____    ____   |\nA-|-|____|--|____|--|-B\n  |_________________|\n";
string lianggejiexianzhubingliandeheihe="   _________________\n  |      ____       |\n  |  ---|____|----  |\nA-|-|    ____     |-|-B\n  |  ---|____|----  |\n  |_________________|";
float calc(int a,int b) {
  float ans;
  ans=a*b/(a+b);
  return ans;
}
float calc(int a,int b,int c) {
  float ans;
  ans=(a*b+b*c+c*a)/a*b*c;
  return ans;
}
float calc(int a,int b,int c,int d) {
  float ans;
  ans=(a*b*c+b*c*d+c*d*a+d*a*b)/a*b*c*d;
  return ans;
}
float calc(int a,int b,int c,int d,int e) {
  float ans;
  ans=(a*b*c*d+b*c*d*e+c*d*e*a+d*e*a*b+e*a*b*c)/a*b*c*d*e;
  return ans;
}
int main(int argc, char const *argv[]) {
  int dianzugeshu,dianzuzhonglei;
  int dianzuzuzhi[101];
  cout<<"please input the number and the count of the dianzu\n";
  cin>>dianzugeshu>>dianzuzhonglei;
  std::cout << "enter the size of the dianzu" << '\n';
  for (int i = 0; i < dianzuzhonglei; i++) {
    cin>>dianzuzuzhi[i];
  }
  switch (dianzuzhonglei) {
    case 1:{
      cout<<yigejiexianzhudeheihe<<endl;
      cout<<"AB="<<dianzuzuzhi[0]<<"ohm(s)"<<endl;
    }
    case 2:{
      cout<<lianggejiexianzhuchuanliandeheihe<<endl;
      cout<<"AB="<<dianzuzuzhi[0]+dianzuzuzhi[1]<<"ohm(s)"<<endl;
      cout<<lianggejiexianzhubingliandeheihe<<endl;
      cout<<"AB="<<fixed<<setprecision(3)<<calc(dianzuzuzhi[0],dianzuzuzhi[1])<<"ohm(s)"<<endl;
    }
  }
  return 0;
}
