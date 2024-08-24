#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c, d, e, f, g, h, i, j, k, l;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;
    bool judge = false;
    if (a < j && a > g){
        if (b < k && b < h){
            if (c < l && c > i){
                judge = true;
            }else if(f > i && f < l){
                judge = true;
            }else if(c < i && f > l){
                judge = true;
            }
        }else if(e > h && e < k){
            if (c < l && c > i){
                judge = true;
            }else if(f > i && f < l){
                judge = true;
            }else if(c < i && f > l){
                judge = true;
            }
        }else if(b < h && e > k){
            if (c < l && c > i){
                judge = true;
            }else if(f > i && f < l){
                judge = true;
            }else if(c < i && f > l){
                judge = true;
            }
        }
    }else if(d > g && d < j){
        if (b < k && b < h){
            if (c < l && c > i){
                judge = true;
            }else if(f > i && f < l){
                judge = true;
            }else if(c < i && f > l){
                judge = true;
            }
        }else if(e > h && e < k){
            if (c < l && c > i){
                judge = true;
            }else if(f > i && f < l){
                judge = true;
            }else if(c < i && f > l){
                judge = true;
            }
        }else if(b < h && e > k){
            if (c < l && c > i){
                judge = true;
            }else if(f > i && f < l){
                judge = true;
            }else if(c < i && f > l){
                judge = true;
            }
        }
    }else if(a > j && a < g){
        if (b > k && b > h){
            if (c > l && c < i){
                judge = true;
            }else if(f < i && f > l){
                judge = true;
            }else if(c > i && f < l){
                judge = true;
            }
        }else if(e < h && e > k){
            if (c > l && c < i){
                judge = true;
            }else if(f < i && f > l){
                judge = true;
            }else if(c > i && f < l){
                judge = true;
            }
        }else if(b > h && e < k){
            if (c > l && c < i){
                judge = true;
            }else if(f < i && f > l){
                judge = true;
            }else if(c > i && f < l){
                judge = true;
            }
        }
    }else if(d < g && d > j){
        if (b < k && b > h){
            if (c > l && c < i){
                judge = true;
            }else if(f < i && f > l){
                judge = true;
            }else if(c > i && f < l){
                judge = true;
            }
        }else if(e < h && e > k){
            if (c > l && c < i){
                judge = true;
            }else if(f < i && f > l){
                judge = true;
            }else if(c > i && f < l){
                judge = true;
            }
        }else if(b > h && e < k){
            if (c > l && c < i){
                judge = true;
            }else if(f < i && f > l){
                judge = true;
            }else if(c > i && f < l){
                judge = true;
            }
        }
    }else if(a < g && b < h && c < i && d > j && e > k && f > l){
        judge = true;
    }else if(a > g && b > h && c > i && d < j && e < k && f < l){
        judge = true;
    }else if(a == g && b == h && c == i && d == j && e == k && f == l){
        judge = true;
    }
    
    if(judge) cout << "Yes" << endl;
    else cout << "No" << endl;
}