#include<iostream>
#include<vector>
using namespace std;
 int main() {
    vector<int>v;
    v.push_back(1);
    cout<<" capacity " << v.capacity() <<endl;
    
    v.push_back(45);
    cout<< " capacity " << v.capacity()<< endl ;
    v.push_back(456);
    cout<< " capacity " << v.capacity() << endl;
    cout<<" first print index  " << v.at(0)<< endl ;
    cout<< " second print front element _" << v.front()<< endl;
    cout<<" third print last element _" << v.back()<< endl;
    cout<<" before pop " <<endl;
    for(int i : v ){
        cout<< i<< endl ;
    }
    // pop back se niche se element ko clear ek ko kiya hai
        v.pop_back() ;
        cout<<" after pop " << endl;
        for( int i: v) {
            cout<<i<<endl;
        }
    
        v.clear();
        cout<<" after clear "  << v.size() <<endl;
        



    }


 
