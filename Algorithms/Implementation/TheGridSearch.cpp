#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
                int R;
                int C;
                cin >> R >> C;
                vector<string> G(R);
                for(int G_i = 0;G_i < R;G_i++){
                   cin >> G[G_i]; 
                }
                int r;
                int c;
                cin >> r >> c;
                vector<string> P(r);
                for(int P_i = 0;P_i < r;P_i++){
                   cin >> P[P_i];

                }
                bool isTest =false;
                bool found=false;
                int pi=0,pj=0;
                int ii=0,jj=0;
        
                for(int i=0;i<R;i++){
                    for(int j=0;j<C;j++){
                       if(isTest) cout << "i: "<< i << " j: "<< j << " pi: " << pi << " pj: " << pj << endl;
                       if(G[i][j]==P[pi][pj]){
                           ii=i;
                           jj=j;
                           while(1){
                                if(isTest) cout << "i: "<< i << " j: "<< j << " pi: " << pi << " pj: " << pj << endl;
                                if(G[i][j]==P[pi][pj]){
                                    if(isTest) cout << " G[i][j]: "<<G[i][j] << " P[pi][pj]: "<< P[pi][pj] << endl;
                                    pj++;
                                    j++;
                                    if(pj>=c){
                                        pj=0;
                                        j=jj;
                                        i++;
                                        pi++;
                                        if(pi>=r){
                                            cout << "YES" << endl;
                                            found= true;
                                            break;
                                                  }
                                            }
                                }else {
                                    pi=0;
                                    pj=0;
                                    break;
                                }
                           }
                           if(found) break;
                           i=ii;
                           j=jj;
                     }
                    }
                    if(found) break;
                }
                if(found ==false) cout << "NO" << endl;
    }
    return 0;
}



