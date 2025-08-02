#include<iostream>
using namespace std;
class alok {
    // properties
    private: 
    string address;
    public:
    char section;
    int roll;
    void print() {
        cout<< section<<endl;
    }
};
int main() {
    // cfreation of object 
    alok student ;
   // student.address= " mahalakshminagar ";  // ----> error show declared private here
    student.section= 'a';
    student.roll= 33;
    // cout<<" address of alok " <<student.address<<endl;       // ----> error show declared private here 
      cout<<" section of alok : " <<student.section<<endl; 
       cout<<" roll of alok  :" <<student.roll<<endl; 
        return 0; 

}